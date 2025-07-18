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
    void writeIntoparserLogFile(const std::string message) {
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
        writeIntoparserLogFile("Parsing completed successfully with 0 syntax errors.");
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
			writeIntoparserLogFile(".CODE");
			in_code_segment = 1;
			
		}
		writeIntoparserLogFile($ID->getText() + " PROC");
		symbolTable->EnterScope();
		if($ID->getText() == "main") {
			writeIntoparserLogFile("\tMOV AX, @DATA\n\tMOV DS, AX");
		}
		writeIntoparserLogFile("\tPUSH BP\n\tMOV BP, SP");
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
		// writeIntoparserLogFile("\tPUSH BP\n\tMOV BP, SP");
	}
	| FLOAT {
		datatype = $FLOAT->getText();
		writeIntoparserLogFile("\tPUSH BP\n\tMOV BP, SP");
	}
	| VOID {
		datatype = $VOID->getText();
		writeIntoparserLogFile("\tPUSH BP\n\tMOV BP, SP");
	}
	;
 		
declaration_list 
	: declaration_list COMMA ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,"global",NULL);
			writeIntoparserLogFile("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
		else {
			symbolTable->insert($ID->getText(),datatype,"local",NULL);
			writeIntoparserLogFile("\tSUB SP, 2");
		}
	}
	| declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
	| ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,"global",NULL);
			writeIntoparserLogFile("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
		else {
			symbolTable->insert($ID->getText(),datatype,"local",NULL);
			writeIntoparserLogFile("\tSUB SP, 2");
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
		writeIntoparserLogFile("");
	}
	| expression_statement {
		writeIntoparserLogFile("");
	}
	| compound_statement {
		writeIntoparserLogFile("");
	}
	| FOR LPAREN expression_statement expression_statement expression RPAREN statement {
		writeIntoparserLogFile("");
	}
	| IF LPAREN expression RPAREN statement {
		writeIntoparserLogFile("");
	}
	| IF LPAREN expression RPAREN statement ELSE statement {
		writeIntoparserLogFile("");
	}
	| WHILE LPAREN expression RPAREN statement {
		writeIntoparserLogFile("");
	}
	| PRINTLN LPAREN ID RPAREN SEMICOLON {
		if(symbolTable->getVariableScope($ID->getText()) == "global"){
			writeIntoparserLogFile("\tMOV AX, "+$ID->getText());
		}
		else{
			writeIntoparserLogFile("\tMOV AX, [BP-"+to_string(symbolTable->getStackIndex($ID->getText())*2)+"]");
		}
		writeIntoparserLogFile("\tCALL print_output\n\tCALL new_line     ; Line "+to_string($SEMICOLON->getLine()));
		writeIntoparserLogFile("");
	}
	| RETURN expression SEMICOLON {
		writeIntoparserLogFile("");
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
		writeIntoparserLogFile("\tMOV "+$v.name+", AX");
	}	
	;
			
logic_expression 
	: rel_expression 	
	| rel_expression LOGICOP {
		if($LOGICOP->getText() == ")
	} rel_expression 	
	;
			
rel_expression	
	: simple_expression 
	| simple_expression RELOP {
		writeIntoparserLogFile("\tMOV DX, AX");
	} simple_expression	{
		writeIntoparserLogFile("\tCMP DX, AX");
		string relop = $RELOP->getText();
		int first_label, second_label;
		if(relop == "<="){
			writeIntoparserLogFile("\tJLE L"+to_string(label_count));
			first_label = label_count++;
			writeIntoparserLogFile("\tJMP L"+to_string(label_count));
			second_label = label_count++;
		}
		else if(relop == "!="){
			writeIntoparserLogFile("\tJNE L"+to_string(label_count));
			first_label = label_count++;
			writeIntoparserLogFile("\tJMP L"+to_string(label_count));
			second_label = label_count++;
		}
		writeIntoparserLogFile("L"+to_string(first_label)+":");
		writeIntoparserLogFile("\tMOV AX, 1\n\tJMP L"+to_string(second_label+1));
		writeIntoparserLogFile("L"+to_string(second_label)+":");
		writeIntoparserLogFile("\tMOV AX, 0");
		writeIntoparserLogFile("L"+to_string(label_count)+":");
		label_count++;
	}
	;
				
simple_expression 
	: term 
	| simple_expression {
		writeIntoparserLogFile("\tMOV BX, AX");
	} ADDOP term {
		writeIntoparserLogFile("\tADD AX,BX");
	}
	;
					
term 
	: unary_expression
    | t=term MULOP {
		if($MULOP->getText() == "%"){
			division = 1;	
		}
		else{
			writeIntoparserLogFile("\tMOV CX, AX");
		}
	} unary_expression {
		if($MULOP->getText() == "%"){
			writeIntoparserLogFile("\tCWD\n\tDIV CX\n\tMOV AX,DX");
			division = 0;
		}
		else{
			writeIntoparserLogFile("\tCWD\n\tMUL CX");
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
			writeIntoparserLogFile("\tMOV CX, "+$v.name);
		}
		else{
			writeIntoparserLogFile("\tMOV AX, "+$v.name);
		}
	} 
	| ID LPAREN argument_list RPAREN
	| LPAREN expression RPAREN
	| CONST_INT {
		if(division == 1){
			writeIntoparserLogFile("\tMOV CX, " + $CONST_INT->getText());	
		}
		else{
			writeIntoparserLogFile("\tMOV AX, " + $CONST_INT->getText());
		}
	}
	| CONST_FLOAT {
		if(division == 1){
			writeIntoparserLogFile("\tMOV CX, " + $CONST_FLOAT->getText());	
		}
		else{
			writeIntoparserLogFile("\tMOV AX, " + $CONST_FLOAT->getText());
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
