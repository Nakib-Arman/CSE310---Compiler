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
	Function* cur_func = new Function();

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
	: type_specifier func_name LPAREN parameter_list RPAREN compound_statement
	| type_specifier ID LPAREN RPAREN compound_statement
 	;

func_name returns [string func_name_text]	
	: ID {
		cur_func->setName($ID->getText());
		Function* temp = new Function();
		temp->setName($ID->getText());
		symbolTable->insert($ID->getText(),"func",temp);
		if (symbolTable->getCurrentScope() == "1" && in_code_segment == 0) {
			writeIntoparserLogFile
		}
		symbolTable->EnterScope();
		$func_name_text = $ID->getText();
	}
	|
	;

return_type returns [string name_line]
		: ts=type_specifier {
			$name_line = $ts.name_line;
			cur_func->setReturnType($ts.name_line);
		}
		|
		;	

r_paren	returns [string rparen_text]
		: RPAREN {
			Function* temp = symbolTable->getFunc(cur_func->getName());
			if(temp!=NULL){
				if (!temp->declarationType()){
					temp->setReturnType(cur_func->getReturnType());
					temp->setParamList(cur_func->getParamList());
				}
				else{
					if(temp->getReturnType() != cur_func->getReturnType()){
						writeIntoparserLogFile("Error at line " + to_string($RPAREN->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
						writeIntoparserErrorFile("Error at line " + to_string($RPAREN->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
						err_count++;
					}
					else if(temp->getParamNum() != cur_func->getParamNum()){
						writeIntoparserLogFile("Error at line " + to_string($RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
						writeIntoparserErrorFile("Error at line " + to_string($RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
						err_count++;
					}
				}
			}
			else{
				writeIntoparserLogFile("Error at line " + to_string($RPAREN->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
				writeIntoparserErrorFile("Error at line " + to_string($RPAREN->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
				err_count++;
			}
			$rparen_text = $RPAREN->getText();
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
    : t=type_specifier dl=declaration_list sm=SEMICOLON 
    ;

 		 
type_specifier returns [std::string name_line]	
	: INT 
	| FLOAT
	| VOID 
	;
 		
declaration_list 
	: declaration_list COMMA ID
	| declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
	| ID {
		if(symbolTable->getCurrentScopeID() == "1"){
			symbolTable->insert($ID->getText(),datatype);
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
