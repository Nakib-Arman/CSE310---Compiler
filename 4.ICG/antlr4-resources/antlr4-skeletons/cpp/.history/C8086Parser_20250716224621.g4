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
		parserLogFile.flush();
	}

	SymbolTable* symbolTable = new SymbolTable(30, &HashFunction::sdbmHash);
	Function* curr_func = new Function();

	string datatype = "none";
	int arr_length = 1;
	int in_code_segment = 0;

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
	| return_type func_name LPAREN RPAREN compound_statement
 	;

func_name
	: ID {
		curr_func->setName($ID->getText());
		Function* temp = new Function();
		temp->setName($ID->getText());
		symbolTable->insert($ID->getText(),"func",temp);
		if (symbolTable->getCurrentScopeID() == "1" && in_code_segment == 0) {
			writeIntoparserLogFile(".CODE");
			in_code_segment = 1;
			
		}
		writeIntoparserLogFile($ID->getText() + " PROC");
		symbolTable->EnterScope();
		if($ID->getText() == "main") {
			writeIntoparserLogFile("\tMOV AX, @DATA\n\tMOV DS, AX");
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

 		 
type_specifier returns [string name_line]	
	: INT 
	| FLOAT
	| VOID 
	;

type_specifier_stack returns [string text
 		
declaration_list 
	: declaration_list COMMA ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,NULL);
			writeIntoparserLogFile("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
	}
	| declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
	| ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype,NULL);
			writeIntoparserLogFile("\t"+$ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
		}
	}
	| ID LTHIRD CONST_INT RTHIRD
	;
 		  
statements 
	: statement
	| statements statement
	;
	   
statement 
	: var_declaration
	| expression_statement
	| compound_statement
	| FOR LPAREN expression_statement expression_statement expression RPAREN statement
	| IF LPAREN expression RPAREN statement
	| IF LPAREN expression RPAREN statement ELSE statement
	| WHILE LPAREN expression RPAREN statement
	| PRINTLN LPAREN ID RPAREN SEMICOLON
	| RETURN expression SEMICOLON
	;
	  
expression_statement 
	: SEMICOLON			
	| expression SEMICOLON 
	;
	  
variable 
	: ID 		
	| ID LTHIRD expression RTHIRD 
	;
	 
 expression 
 	: logic_expression	
	| variable ASSIGNOP logic_expression 	
	;
			
logic_expression 
	: rel_expression 	
	| rel_expression LOGICOP rel_expression 	
	;
			
rel_expression	
	: simple_expression 
	| simple_expression RELOP simple_expression	
	;
				
simple_expression 
	: term 
	| simple_expression ADDOP term 
	;
					
term 
	: unary_expression
    | term MULOP unary_expression
    ;

unary_expression 
	: ADDOP unary_expression  
	| NOT unary_expression 
	| factor 
	;
	
factor
	: variable 
	| ID LPAREN argument_list RPAREN
	| LPAREN expression RPAREN
	| CONST_INT 
	| CONST_FLOAT
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
