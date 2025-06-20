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

    extern std::ofstream parserLogFile;
    extern std::ofstream errorFile;

    extern int syntaxErrorCount;

	using namespace std;
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

    void writeIntoErrorFile(const std::string message) {
        if (!errorFile) {
            std::cout << "Error opening errorFile.txt" << std::endl;
            return;
        }
        errorFile << message << std::endl;
        errorFile.flush();
    }
}


start : program
	{
        writeIntoparserLogFile("Parsing completed successfully with " + std::to_string(syntaxErrorCount) + " syntax errors.");
	}
	;

program returns [string pg_text]
	: pg=program un=unit {
		$pg_text = $pg.pg_text + "\n" + $un.unit_text;
		writeIntoparserLogFile("\nLine " + to_string($unit.stop->getLine()) + ": program : program unit\n");
		writeIntoparserLogFile($pg.pg_text + "\n" + $un.unit_text + "\n\n");
	}
	| unit {
		$pg_text = $unit.unit_text;
		writeIntoparserLogFile("\nLine " + to_string($unit.stop->getLine()) + ": program : unit\n");
		writeIntoparserLogFile($unit.unit_text + "\n\n");
	}
	;
	
unit returns [string unit_text]
	: vd=var_declaration {
		$unit_text = $vd.var_text;
		writeIntoparserLogFile("Line " + to_string($vd.stop->getLine()) + ": unit : var_declaration\n");
		writeIntoparserLogFile($vd.var_text + "\n");
	}
     | fd=func_declaration {
		$unit_text = $fd.func_dec_text;
		writeIntoparserLogFile("\nLine " + to_string($fd.stop->getLine()) + ": unit : func_declaration\n");
		writeIntoparserLogFile($fd.func_dec_text + "\n");
	}
     | func_definition
     ;
     
func_declaration returns [string func_dec_text]
		: type_specifier ID LPAREN parameter_list RPAREN SEMICOLON
		| ts=type_specifier ID LPAREN RPAREN SEMICOLON {
			$func_dec_text = $ts.name_line + " " + $ID->getText() + $LPAREN->getText() + $RPAREN->getText() + $SEMICOLON->getText();
			writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
			writeIntoparserLogFile($func_dec_text + "\n");
		}
		;
		 
func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement
		| type_specifier ID LPAREN RPAREN compound_statement
 		;				


parameter_list returns [string param_text]
		: pm=parameter_list COMMA ts=type_specifier ID {
			$param_text = $pm.param_text + "," + $ts.name_line + " " + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": parameter_list: parameter_list COMMA type_specifier ID\n");
			writeIntoparserLogFile($param_text + "\n");
		}
		| parameter_list COMMA type_specifier
 		| ts=type_specifier ID {
			$param_text = $ts.name_line + " " + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": parameter_list : type_specifier ID\n");
			writeIntoparserLogFile($param_text + "\n");
		}
		| ts=type_specifier {
			$param_text = $ts.name_line;
			writeIntoparserLogFile("Line " + to_string($ts.stop->getLine()) + ": parameter_list : type_specifier\n");
			writeIntoparserLogFile($param_text + "\n");
		}
 		;

 		
compound_statement returns [string cmst_text]
			: LCURL stmts=statements RCURL {
				$cmst_text = $$stmts.stmts_text;
				writeIntoparserLogFile("Line " + to_string($relex.stop->getLine()) + ": logic_expression : rel_expression\n");
				writeIntoparserLogFile($logic_text + "\n");
			}
 		    | LCURL RCURL
 		    ;
 		    
var_declaration returns [string var_text]
    : t=type_specifier dl=declaration_list sm=SEMICOLON {
        // writeIntoparserLogFile(
        //     std::string("Variable Declaration: type_specifier declaration_list ") +
        //     std::to_string($sm->getType()) +
        //     " at line " + std::to_string($sm->getLine())
        // );

        // writeIntoparserLogFile("type_specifier name_line: " + $t.name_line);

		$var_text = $t.name_line + " " + $dl.dl_list + ";";
		writeIntoparserLogFile("Line " + to_string($sm->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n");
		writeIntoparserLogFile($t.name_line + " " + $dl.dl_list + ";\n");
      }

    | t=type_specifier de=declaration_list_err sm=SEMICOLON {
        writeIntoErrorFile(
            std::string("Line# ") + std::to_string($sm->getLine()) +
            " with error name: " + $de.error_name +
            " - Syntax error at declaration list of variable declaration"
        );

        syntaxErrorCount++;
      }
    ;

declaration_list_err returns [std::string error_name]: {
        $error_name = "Error in declaration list";
    };

 		 
type_specifier returns [std::string name_line]	
        : INT {
			$name_line = $INT->getText();
			writeIntoparserLogFile("Line " + to_string($INT->getLine()) + ": type_specifier : INT\n");
			writeIntoparserLogFile($INT->getText() + "\n");
        }
 		| FLOAT {
			$name_line = $FLOAT->getText();
			writeIntoparserLogFile("Line " + to_string($FLOAT->getLine()) + ": type_specifier : FLOAT\n");
			writeIntoparserLogFile($FLOAT->getText() + "\n");
        }
 		| VOID {
			$name_line = $VOID->getText();
			writeIntoparserLogFile("Line " + to_string($VOID->getLine()) + ": type_specifier : VOID\n");
			writeIntoparserLogFile($VOID->getText() + "\n");
        }
 		;
 		
declaration_list returns [string dl_list]
		: dl=declaration_list COMMA ID {
			$dl_list = $dl.dl_list + "," + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": declaration_list : declaration_list COMMA ID\n");
			writeIntoparserLogFile($dl.dl_list + "," + $ID->getText() + "\n");
		}
 		  | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
 		  | ID {
			$dl_list = $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": decleration_list : ID\n");
			writeIntoparserLogFile($ID->getText() + "\n");
		}
 		  | ID LTHIRD CONST_INT RTHIRD
 		  ;
 		  
statements returns [string stmts_text]
	   : st=statement {
		$stmts_text = $st.st_text;
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statements : statement\n");
		writeIntoparserLogFile($stmts_text + "\n");
	   }
	   | statements statement
	   ;
	   
statement returns [string st_text]
	  : var_declaration
	  | expression_statement
	  | compound_statement
	  | FOR LPAREN expression_statement expression_statement expression RPAREN statement
	  | IF LPAREN expression RPAREN statement
	  | IF LPAREN expression RPAREN statement ELSE statement
	  | WHILE LPAREN expression RPAREN statement
	  | PRINTLN LPAREN ID RPAREN SEMICOLON
	  | RETURN expr=expression SEMICOLON {
		$st_text = $RETURN->getText() + " " + $expr.expr_text + $SEMICOLON->getText();
		writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": statement : RETURN expression SEMICOLON\n");
		writeIntoparserLogFile($st_text + "\n");
	  }
	  ;
	  
expression_statement 	: SEMICOLON			
			| expression SEMICOLON 
			;
	  
variable returns [string var_text]
	 : ID {
		$var_text = $ID->getText();
		writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": variable : ID\n");
		writeIntoparserLogFile($var_text + "\n");
	 }	
	 | ID LTHIRD expression RTHIRD 
	 ;
	 
 expression returns [string expr_text]
 	   : logex=logic_expression {
		 $expr_text = $logex.logic_text;
		 writeIntoparserLogFile("Line " + to_string($logex.stop->getLine()) + ": expression : logic_expression\n");
		 writeIntoparserLogFile($expr_text + "\n");
	   }
	   | variable ASSIGNOP logic_expression 	
	   ;
			
logic_expression returns [string logic_text]
		 : relex=rel_expression {
			$logic_text = $relex.rel_text;
			writeIntoparserLogFile("Line " + to_string($relex.stop->getLine()) + ": logic_expression : rel_expression\n");
			writeIntoparserLogFile($logic_text + "\n");
		 }
		 | relex1=rel_expression LOGICOP relex2=rel_expression {
			$logic_text = $relex1.rel_text + " " + $LOGICOP->getText() + " " + $relex2.rel_text;
			writeIntoparserLogFile("Line " + to_string($relex2.stop->getLine()) + ": logic_expression : rel_expression LOGICOP rel_expression\n");
			writeIntoparserLogFile($logic_text + "\n");
		 }	
		 ;
			
rel_expression returns [string rel_text]
		: smex=simple_expression {
		  $rel_text = $smex.sim_text;
		  writeIntoparserLogFile("Line " + to_string($smex.stop->getLine()) + ": rel_expression : simple_expression\n");
		  writeIntoparserLogFile($rel_text + "\n");
		}
		| simple_expression RELOP simple_expression	
		;
				
simple_expression returns [string sim_text]
		  : term {
			$sim_text = $term.term_text;
			writeIntoparserLogFile("Line " + to_string($term.stop->getLine()) + ": simple_expression : term\n");
			writeIntoparserLogFile($sim_text + "\n");
		  }
		  | smex=simple_expression ADDOP term {
			$sim_text = $smex.sim_text + $ADDOP->getText() + $term.term_text;
			writeIntoparserLogFile("Line " + to_string($term.stop->getLine()) + ": simple_expression : simple_expression ADDOP term\n");
			writeIntoparserLogFile($sim_text + "\n");
		  }
		  ;
					
term returns [string term_text]
	 :	unex=unary_expression {
		$term_text = $unex.unex_text;
		writeIntoparserLogFile("Line " + to_string($unex.stop->getLine()) + ": term : unary_expression\n");
		writeIntoparserLogFile($term_text + "\n");
	 }
     |  term MULOP unary_expression
     ;

unary_expression returns [string unex_text]
		 : ADDOP unary_expression  
		 | NOT unary_expression 
		 | factor {
			$unex_text = $factor.fact_text;
			writeIntoparserLogFile("Line " + to_string($factor.stop->getLine()) + ": unary_expression : factor\n");
			writeIntoparserLogFile($unex_text + "\n");
		 }
		 ;
	
factor returns [string fact_text]	
	: var=variable {
		$fact_text = $var.var_text;
		writeIntoparserLogFile("Line " + to_string($var.stop->getLine()) + ": factor : variable\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| ID LPAREN argument_list RPAREN
	| LPAREN expression RPAREN
	| CONST_INT 
	| CONST_FLOAT
	| variable INCOP 
	| variable DECOP
	;
	
argument_list : arguments
			  |
			  ;
	
arguments : arguments COMMA logic_expression
	      | logic_expression
	      ;
