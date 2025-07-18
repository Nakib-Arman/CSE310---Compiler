parser grammar C8086Parser;

options {
    tokenVocab = C8086Lexer;
}

@parser::header {
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <cstdlib>
    #include "C8086Lexer.h"
	#include "SymbolTable/2105128_SymbolTable.cpp"

    extern std::ofstream parserLogFile;
}

@parser::members {
    void write(const std::string message) {
        if (!parserLogFile) {
            std::cout << "Error opening parserLogFile.txt" << std::endl;
            return;
        }

        parserLogFile << message << std::endl;
        parserLogFile.flush();
    }

	void initiate() {
		parserLogFile << ".MODEL SMALL" << std::endl;
		parserLogFile << ".STACK 100H" << std::endl<<std::endl;
		parserLogFile << ".DATA" << std::endl;
		parserLogFile << "\tnumber DB \"00000$\"" << std::endl;
		parserLogFile.flush();
	}

	SymbolTable* symbolTable = new SymbolTable(30, &HashFunction::sdbmHash);
	Function* curr_func = new Function();

	string datatype = "none";
	int arr_length = 1;
	int in_code_segment = 0;
	int division = 0;
	int label_count = 1;

}


start : {
		initiate();
	}
	program
	{
        write("Parsing completed successfully with 0 syntax errors.");
	}
	;

program : program unit 
	| unit
	;
	
unit 
	: var_declaration
    | func_declaration
    | func_definition
    ;
     
func_declaration 
	: type_specifier ID LPAREN parameter_list RPAREN SEMICOLON
	| type_specifier ID LPAREN RPAREN SEMICOLON
	;
		 
func_definition 
	: return_type func_name LPAREN parameter_list RPAREN compound_statement
	| return_type func_name LPAREN RPAREN compound_statement {
		symbolTable->print_all_scope_nonempty_indices();
	}
 	;

func_name
	: ID {
		curr_func->setName($ID->getText());
		Function* temp = new Function();
		temp->setName($ID->getText());
		symbolTable->insert($ID->getText(),"func","global",temp);
		if (symbolTable->getCurrentScopeID() == "1" && in_code_segment == 0) {
			write(".CODE");
			in_code_segment = 1;
			
		}
		write($ID->getText() + " PROC");
		symbolTable->EnterScope();
		if($ID->getText() == "main") {
			write("\tMOV AX, @DATA\n\tMOV DS, AX");
		}
		write("\tPUSH BP\n\tMOV BP, SP");
	}
	|
	;

return_type
	: ts=type_specifier {
		curr_func->setReturnType($ts.text);
	}
	|
	;				


parameter_list  
	: parameter_list COMMA type_specifier ID
	| parameter_list COMMA type_specifier
	| type_specifier ID
	| type_specifier
	;

 		
compound_statement 
	: LCURL statements RCURL
	| LCURL RCURL
	;
 		    
var_declaration 
    : ts=type_specifier_stack dl=declaration_list sm=SEMICOLON
    ;

 		 
type_specifier returns [string text]	
	: INT 
	| FLOAT
	| VOID 
	;

type_specifier_stack returns [string text]
	: INT {
		datatype = $INT->getText();
		// write("\tPUSH BP\n\tMOV BP, SP");
	}
	| FLOAT {
		datatype = $FLOAT->getText();
		write("\tPUSH BP\n\tMOV BP, SP");
	}
	| VOID {
		datatype = $VOID->getText();
		write("\tPUSH BP\n\tMOV BP, SP");
	}
	;
 		
declaration_list 
	: declaration_list COMMA ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,"global",NULL);
			write("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
		else {
			symbolTable->insert($ID->getText(),datatype,"local",NULL);
			write("\tSUB SP, 2");
		}
	}
	| declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
	| ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,"global",NULL);
			write("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
		else {
			symbolTable->insert($ID->getText(),datatype,"local",NULL);
			write("\tSUB SP, 2");
		}
	}
	| ID LTHIRD CONST_INT RTHIRD
	;
 		  
statements 
	: statement
	| statements statement
	;
	   
statement 
	: var_declaration {
		write("");
	}
	| expression_statement {
		write("");
	}
	| compound_statement {
		write("");
	}
	| FOR LPAREN expression_statement expression_statement expression RPAREN statement {
		write("");
	}
	| IF LPAREN expression RPAREN statement {
		write("");
	}
	| IF LPAREN expression RPAREN statement ELSE statement {
		write("");
	}
	| WHILE LPAREN expression RPAREN statement {
		write("");
	}
	| PRINTLN LPAREN ID RPAREN SEMICOLON {
		if(symbolTable->getVariableScope($ID->getText()) == "global"){
			write("\tMOV AX, "+$ID->getText());
		}
		else{
			write("\tMOV AX, [BP-"+to_string(symbolTable->getStackIndex($ID->getText())*2)+"]");
		}
		write("\tCALL print_output\n\tCALL new_line     ; Line "+to_string($SEMICOLON->getLine()));
		write("");
	}
	| RETURN expression SEMICOLON {
		write("");
	}
	;
	  
expression_statement 
	: SEMICOLON			
	| expression SEMICOLON 
	;
	  
variable returns [string name]
	: ID {
		if(symbolTable->getVariableScope($ID->getText()) == "global"){
			$name = $ID->getText();
		}
		else{
			$name = "[BP-"+to_string(symbolTable->getStackIndex($ID->getText())*2)+"]";
		}
	}	
	| ID LTHIRD expression RTHIRD 
	;
	 
 expression 
 	: logic_expression	
	| v=variable ASSIGNOP le=logic_expression {
		write("\tMOV "+$v.name+", AX");
	}	
	;
			
logic_expression 
	: rel_expression 	
	| rel_expression LOGICOP {
			write("\tCMP AX, 0");
		if($LOGICOP->getText() == "||"){
			write("\tJNE L"+label_count);
			// write("\tJMP L"+label_count);
		}
		else{
			write("JE L"+to_string(label_count+1));
		}
	} rel_expression {
		// write("L"+to_string(label_count)+":");
		// label_count++;
		write("CMP AX, 0");
		if($LOGICOP->getText() == "||"){
			write("\tJNE L"+label_count);
			write("\tJMP L"+label_count+1);
		}
		else{
			write("\tJE")
		}
		// write("L"+to_string(label_count)+":");
		// label_count++;
		// if($LOGICOP->getText() == "||"){
		// 	write("\tMOV AX, 1");
		// 	write("JMP L"+to_string(label_count));
		// }
	}
	;
			
rel_expression	
	: simple_expression 
	| simple_expression RELOP {
		write("\tMOV DX, AX");
	} simple_expression	{
		write("\tCMP DX, AX");
		string relop = $RELOP->getText();
		int first_label, second_label;
		if(relop == "<="){
			write("\tJLE L"+to_string(label_count));
			first_label = label_count++;
			write("\tJMP L"+to_string(label_count));
			second_label = label_count++;
		}
		else if(relop == "!="){
			write("\tJNE L"+to_string(label_count));
			first_label = label_count++;
			write("\tJMP L"+to_string(label_count));
			second_label = label_count++;
		}
		write("L"+to_string(first_label)+":");
		write("\tMOV AX, 1\n\tJMP L"+to_string(second_label+1));
		write("L"+to_string(second_label)+":");
		write("\tMOV AX, 0");
		write("L"+to_string(label_count)+":");
		label_count++;
	}
	;
				
simple_expression 
	: term 
	| simple_expression {
		write("\tMOV BX, AX");
	} ADDOP term {
		write("\tADD AX,BX");
	}
	;
					
term 
	: unary_expression
    | t=term MULOP {
		if($MULOP->getText() == "%"){
			division = 1;	
		}
		else{
			write("\tMOV CX, AX");
		}
	} unary_expression {
		if($MULOP->getText() == "%"){
			write("\tCWD\n\tDIV CX\n\tMOV AX,DX");
			division = 0;
		}
		else{
			write("\tCWD\n\tMUL CX");
		}
	}
    ;

unary_expression 
	: ADDOP unary_expression  
	| NOT unary_expression 
	| factor 
	;
	
factor
	: v=variable {
		if(division == 1){
			write("\tMOV CX, "+$v.name);
		}
		else{
			write("\tMOV AX, "+$v.name);
		}
	} 
	| ID LPAREN argument_list RPAREN
	| LPAREN expression RPAREN
	| CONST_INT {
		if(division == 1){
			write("\tMOV CX, " + $CONST_INT->getText());	
		}
		else{
			write("\tMOV AX, " + $CONST_INT->getText());
		}
	}
	| CONST_FLOAT {
		if(division == 1){
			write("\tMOV CX, " + $CONST_FLOAT->getText());	
		}
		else{
			write("\tMOV AX, " + $CONST_FLOAT->getText());
		}
	}
	| variable INCOP 
	| variable DECOP
	;
	
argument_list 
	: arguments
	|
	;
	
arguments 
	: arguments COMMA logic_expression
	| logic_expression
	;
