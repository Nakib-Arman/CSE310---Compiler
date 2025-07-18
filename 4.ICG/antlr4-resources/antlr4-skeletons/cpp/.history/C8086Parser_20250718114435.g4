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
	int in_main = 0;
}


start : {
		initiate();
	}
	program
	{
		std::ifstream print_library("print_library.txt", std::ios::in);
		if (!print_library) {
			std::cerr << "Failed to open file1.txt" << std::endl;
		}
		std::string line;
		while (std::getline(print_library, line)) {
			write(line);
		}
        write("END main");
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
	: return_type func_name LPAREN parameter_list RPAREN compound_statement {
		if(in_main == 1){
			write("L"+to_string(label_count)+":");
			label_count++;
			write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
			write("\tPOP BP\n\tMOV AX, 4CH\n\tINT 21H");
			write(curr_func->getName()+" ENDP");
		}
		else{
			write("L"+to_string(label_count)+":");
			label_count++;
			write("\tPOP BP");
			if(curr_func->getStackElements() == 0){
				write("\tRET");
			}
			else{
				write("\tRET "+to_string(curr_func->getStackElements()*2));
			}
		}
	}
	| return_type func_name LPAREN RPAREN compound_statement {
		// symbolTable->print_all_scope_nonempty_indices();
		if(in_main == 1){
			write("L"+to_string(label_count)+":");
			label_count++;
			write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
			write("\tPOP BP\n\tMOV AX, 4CH\n\tINT 21H");
			write(curr_func->getName()+" ENDP");
		}
		else{
			write("L"+to_string(label_count)+":");
			label_count++;
			write("\tPOP BP");
			if(curr_func->getStackElements() == 0){
				write("\tRET");
			}
			else{
				write("\tRET "+to_string(curr_func->getStackElements()*2));
			}
		}
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
		if($ID->getText() == "main"){
			in_main = 1;
		}
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
	: parameter_list COMMA type_specifier ID {
		symbolTable->insert($ID->getText(),datatype,"parameter",NULL);
	}
	| parameter_list COMMA type_specifier
	| ts=type_specifier ID {
		symbolTable->insert($ID->getText(),datatype,"parameter",NULL);
	}
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
			curr_func->incStackElements();
			write("\tSUB SP, 2\t; Line "+to_string($ID->getLine()));
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
			curr_func->incStackElements();
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
	}
	| expression_statement {
	}
	| compound_statement {
	}
	| FOR LPAREN expression_statement {
		int begin_label = label_count;
	} es=expression_statement {
		write("\tCMP AX, 0");
		write("\tJNE L"+to_string(label_count));
		int true_label = label_count++;
		int inc_label = label_count++;
		int end_label = label_count++;
		write("\tJMP L"+to_string(end_label));
		write("L"+to_string(inc_label)+":");
	} expression {
		write("\tJMP L"+to_string(begin_label));
	} RPAREN {
		write("L"+to_string(true_label)+":");
	} statement {
		write("\tJMP L"+to_string(inc_label));
		write("L"+to_string(end_label)+":");
	}
	| IF LPAREN expression RPAREN {
		write("\tCMP AX, 0");
		write("\tJNE L"+to_string(label_count));
		write("\tJMP L"+to_string(label_count+1));
		write("L"+to_string(label_count)+":");
		label_count++;
	} statement {
		write("L"+to_string(label_count)+":");
		label_count++;
	}
	| IF LPAREN expression RPAREN {
		int if_label,else_label,end_label;
		write("\tCMP AX, 0");
		write("\tJNE L"+to_string(label_count));
		if_label = label_count;
		label_count++;
		write("\tJMP L"+to_string(label_count));
		else_label = label_count;
		label_count++;
		end_label = label_count;
		label_count++;
		write("L"+to_string(if_label)+":");
	} statement ELSE {
		write("\tJMP L"+to_string(end_label));
		write("L"+to_string(else_label)+":");
	} statement {
		write("L"+to_string(end_label)+":");
	}
	| WHILE LPAREN {
		int begin_label = label_count;
	} expression RPAREN {
		write("\tCMP AX, 0");
		write("\tJNE L"+to_string(label_count));
		int true_label = label_count++;
		int end_label = label_count++;
		write("\tJMP L"+to_string(end_label));
		write("L"+to_string(true_label)+":");
	} statement {
		write("\tJMP L"+to_string(begin_label));
		write("L"+to_string(end_label)+":");
	}
	| PRINTLN LPAREN ID RPAREN SEMICOLON {
		if(symbolTable->getVariableScope($ID->getText()) == "global"){
			write("\tMOV AX, "+$ID->getText());
		}
		else{
			int stack_index = symbolTable->getStackIndex($ID->getText());
			if(stack_index < 0) {
				
				write("\tMOV AX, [BP+"+to_string(-stack_index*2)+"]");
			}
			else{
				write("\tMOV AX, [BP"+to_string(-stack_index*2)+"]");
			}
		}
		write("\tCALL print_output\n\tCALL new_line     ; Line "+to_string($SEMICOLON->getLine()));
	}
	| {write("");} RETURN expression SEMICOLON {
		write("\tJMP L"+to_string(label_count)+"\t; Line "+to_string($SEMICOLON->getLine()));
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
			int stack_index = symbolTable->getStackIndex($ID->getText());
			if(stack_index < 0){
				cout<<symbolTable->getParamNum()<<endl;
				$name = "[BP+"+to_string(-symbolTable->getStackIndex($ID->getText())*2)+"]";
			}
			else{
				$name = "[BP"+to_string(-symbolTable->getStackIndex($ID->getText())*2)+"]";
			}
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
			write("\tJNE L"+to_string(label_count));
		}
		else{
			write("\tJE L"+to_string(label_count+1));
		}
	} rel_expression {
		write("\tCMP AX, 0");
		if($LOGICOP->getText() == "||"){
			write("\tJNE L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else{
			write("\tJE L"+to_string(label_count+1));
			write("\tJMP L"+to_string(label_count));
		}
		write("L"+to_string(label_count)+":");
		label_count++;
		write("\tMOV AX, 1\n\tJMP L"+to_string(label_count+1));
		write("L"+to_string(label_count)+":");
		label_count++;
		write("\tMOV AX, 0");
		write("L"+to_string(label_count)+":");
		label_count++;
	}
	;
			
rel_expression	
	: simple_expression 
	| simple_expression RELOP {
		write("\tMOV DX, AX");
	} simple_expression	{
		write("\tCMP DX, AX");
		string relop = $RELOP->getText();
		if(relop == "<="){
			write("\tJLE L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else if(relop == "!="){
			write("\tJNE L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else if(relop == "=="){
			write("\tJE L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else if(relop == "<"){
			write("\tJL L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else if(relop == ">"){
			write("\tJG L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		else if(relop == ">="){
			write("\tJGE L"+to_string(label_count));
			write("\tJMP L"+to_string(label_count+1));
		}
		write("L"+to_string(label_count)+":");
		label_count++;
		write("\tMOV AX, 1\n\tJMP L"+to_string(label_count+1));
		write("L"+to_string(label_count)+":");
		label_count++;
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
	: ADDOP unary_expression {
		write("\tNEG AX");
	}
	| NOT unary_expression 
	| factor 
	;
	
factor
	: v=variable {
		if(division == 1){
			write("\tMOV CX, "+$v.name);
		}
		else{
			write("L"+to_string(label_count)+":");
			label_count++;
			write("\tMOV AX, "+$v.name);
		}
	} 
	| ID LPAREN argument_list RPAREN {
		write("\tCALL "+$ID->getText());
	}
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
	| v=variable INCOP {
		write("L"+to_string(label_count)+":");
		label_count++;
		write("\tMOV AX, "+$v.name);
		write("\tPUSH AX");
		write("\tINC AX");
		write("\tMOV "+$v.name+", AX");
		write("\tPOP AX");
	}
	| v=variable DECOP {
		write("L"+to_string(label_count)+":");
		label_count++;
		write("\tMOV AX, "+$v.name);
		write("\tPUSH AX");
		write("\tDEC AX");
		write("\tMOV "+$v.name+", AX");
		write("\tPOP AX");
	}
	;
	
argument_list 
	: arguments
	|
	;
	
arguments 
	: arguments COMMA logic_expression{
		write("\tPUSH AX");
	}
	| logic_expression {
		write("\tPUSH AX");
	}
	;
