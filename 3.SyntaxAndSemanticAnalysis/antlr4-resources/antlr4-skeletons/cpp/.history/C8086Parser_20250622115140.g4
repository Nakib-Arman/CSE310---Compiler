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

	SymbolTable* symbolTable = new SymbolTable(30, &HashFunction::SDBMHash);
	int has_param = 0;
	int err_count = 0;
	string data_type="";
	string type1="";
	string return_type="";
	string term_type="";
	string unary_expression_type="";
}


start : pg=program
	{
        writeIntoparserLogFile("Line " + to_string($pg.stop->getLine()) + ": start : program\n");
		symbolTable->print_all_scope_nonempty_indices(parserLogFile);
		writeIntoparserLogFile("Total lines: " + to_string($pg.stop->getLine()));
		writeIntoparserLogFile("Total errors: " + to_string(err_count));
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
     | fdef=func_definition {
		$unit_text = $fdef.func_def_text + "\n";
		writeIntoparserLogFile("\nLine " + to_string($fdef.stop->getLine()) + ": unit : func_definition\n");
		writeIntoparserLogFile($fdef.func_def_text + "\n\n");
	 }
     ;
     
func_declaration returns [string func_dec_text]
		: ts=type_specifier ID LPAREN pm=parameter_list RPAREN SEMICOLON {
			$func_dec_text = $ts.name_line + " " + $ID->getText() + $LPAREN->getText() + $pm.param_text + $RPAREN->getText() + $SEMICOLON->getText();
			writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");
			writeIntoparserLogFile($func_dec_text + "\n");

			symbolTable->insert($ID->getText(),"func","");
		}
		| ts=type_specifier ID LPAREN RPAREN SEMICOLON {
			$func_dec_text = $ts.name_line + " " + $ID->getText() + $LPAREN->getText() + $RPAREN->getText() + $SEMICOLON->getText();
			writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
			writeIntoparserLogFile($func_dec_text + "\n");

			symbolTable->insert($ID->getText(),"func","");
		}
		;
		 
func_definition returns [string func_def_text] 
		: ts=type_specifier fn=func_name LPAREN pm=parameter_list RPAREN cmst=compound_statement {
			$func_def_text = $ts.name_line + " " + $fn.func_name_text + $LPAREN->getText() + $pm.param_text + $RPAREN->getText() + $cmst.cmst_text;
			writeIntoparserLogFile("Line " + to_string($cmst.stop->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n");
			writeIntoparserLogFile($func_def_text + "\n");
		}
		| ts=type_specifier fn=func_name LPAREN RPAREN cmst=compound_statement {
			$func_def_text = $ts.name_line + " " + $fn.func_name_text + $LPAREN->getText() + $RPAREN->getText() + $cmst.cmst_text;
			writeIntoparserLogFile("Line " + to_string($cmst.stop->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n");
			writeIntoparserLogFile($func_def_text + "\n");
		}
 		;	

func_name returns [string func_name_text]	
		: ID {
			symbolTable->insert($ID->getText(),"func","");
			symbolTable->EnterScope();
			has_param = 1;
			$func_name_text = $ID->getText();
		}
		|
		;		


parameter_list returns [string param_text]
		: pm=parameter_list COMMA ts=type_specifier ID {
			$param_text = $pm.param_text + "," + $ts.name_line + " " + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n");
			writeIntoparserLogFile($param_text + "\n");

			symbolTable->insert($ID->getText(),$ts.name_line,"");
		}
		| parameter_list COMMA type_specifier
 		| ts=type_specifier ID {
			$param_text = $ts.name_line + " " + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": parameter_list : type_specifier ID\n");
			writeIntoparserLogFile($param_text + "\n");

			symbolTable->insert($ID->getText(),$ts.name_line,"");
		}
		| ts=type_specifier {
			$param_text = $ts.name_line;
			writeIntoparserLogFile("Line " + to_string($ts.stop->getLine()) + ": parameter_list : type_specifier\n");
			writeIntoparserLogFile($param_text + "\n");
		}
 		;

 		
compound_statement returns [string cmst_text]
			: c=curlybrace stmts=statements RCURL {
				$cmst_text = $c.curl_text + "\n" + $stmts.stmts_text + $RCURL->getText();
				writeIntoparserLogFile("Line " + to_string($RCURL->getLine()) + ": compound_statement : LCURL statements RCURL\n");
				writeIntoparserLogFile($cmst_text + "\n");

				symbolTable->print_all_scope_nonempty_indices(parserLogFile);
				symbolTable->ExitScope();
			}
 		    | c=curlybrace RCURL {
				$cmst_text = $c.curl_text + $RCURL->getText();
				writeIntoparserLogFile("Line " + to_string($RCURL->getLine()) + ": compound_statement : LCURL RCURL\n");
				writeIntoparserLogFile($cmst_text + "\n");

				symbolTable->print_all_scope_nonempty_indices(parserLogFile);
				symbolTable->ExitScope();
			}
 		    ;
 		    
var_declaration returns [string var_text]
    : t=type_specifier dl=declaration_list sm=SEMICOLON {
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
			data_type = "int";
			$name_line = $INT->getText();
			writeIntoparserLogFile("Line " + to_string($INT->getLine()) + ": type_specifier : INT\n");
			writeIntoparserLogFile($INT->getText() + "\n");
        }
 		| FLOAT {
			data_type = "float";
			$name_line = $FLOAT->getText();
			writeIntoparserLogFile("Line " + to_string($FLOAT->getLine()) + ": type_specifier : FLOAT\n");
			writeIntoparserLogFile($FLOAT->getText() + "\n");
        }
 		| VOID {
			data_type = "void";
			$name_line = $VOID->getText();
			writeIntoparserLogFile("Line " + to_string($VOID->getLine()) + ": type_specifier : VOID\n");
			writeIntoparserLogFile($VOID->getText() + "\n");
        }
 		;
 		
declaration_list returns [string dl_list]
		: dl=declaration_list COMMA ID {
			bool inserted = symbolTable->insert($ID->getText(),data_type,"");
			if(!inserted) {
				writeIntoparserLogFile("Error at line " + to_string($ID->getLine()) + ": Multiple declaration of " + $ID->getText() + "\n");
				err_count++;
			}
			$dl_list = $dl.dl_list + "," + $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": declaration_list : declaration_list COMMA ID\n");
			writeIntoparserLogFile($dl_list + "\n");
		  }
 		  | dl=declaration_list COMMA ID LTHIRD cn=CONST_INT RTHIRD {
			bool inserted = symbolTable->insert($ID->getText(),data_type,"");
			if(!inserted) {
				writeIntoparserLogFile("Error at line " + to_string($ID->getLine()) + ": Multiple declaration of " + $ID->getText() + "\n");
				err_count++;
			}
			$dl_list = $dl.dl_list + "," + $ID->getText() + $LTHIRD->getText() + $cn->getText() + $RTHIRD->getText();
			writeIntoparserLogFile("Line " + to_string($RTHIRD->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
			writeIntoparserLogFile($dl_list + "\n");
		  }
 		  | ID {
			bool inserted = symbolTable->insert($ID->getText(),data_type,"");
			if(!inserted) {
				writeIntoparserLogFile("Error at line " + to_string($ID->getLine()) + ": Multiple declaration of " + $ID->getText() + "\n");
				err_count++;
			}
			$dl_list = $ID->getText();
			writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": declaration_list : ID\n");
			writeIntoparserLogFile($dl_list + "\n");
 		  }
 		  | ID LTHIRD CONST_INT RTHIRD {
			bool inserted = symbolTable->insert($ID->getText(),data_type,"");
			if(!inserted) {
				writeIntoparserLogFile("Error at line " + to_string($ID->getLine()) + ": Multiple declaration of " + $ID->getText() + "\n");
				err_count++;
			}
			$dl_list = $ID->getText() + $LTHIRD->getText() + $CONST_INT->getText() + $RTHIRD->getText();
			writeIntoparserLogFile("Line " + to_string($RTHIRD->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n");
			writeIntoparserLogFile($dl_list + "\n");
		  }
 		  ;
 		  
statements returns [string stmts_text]
	   : st=statement {
		$stmts_text = $st.st_text + "\n";
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statements : statement\n");
		writeIntoparserLogFile($stmts_text + "\n");
	   }
	   | stmts=statements st=statement {
		$stmts_text = $stmts.stmts_text + $st.st_text + "\n";
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statements : statements statement\n");
		writeIntoparserLogFile($stmts_text + "\n");
	   }
	   ;
	   
statement returns [string st_text]
	  : vd=var_declaration {
		$st_text = $vd.var_text;
		writeIntoparserLogFile("Line " + to_string($vd.stop->getLine()) + ": statement : var_declaration\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | exst=expression_statement {
		$st_text = $exst.expr_stmt_text;
		writeIntoparserLogFile("Line " + to_string($exst.stop->getLine()) + ": statement : expression_statement\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | cs=compound_statement {
		$st_text = $cs.cmst_text;
		writeIntoparserLogFile("Line " + to_string($cs.stop->getLine()) + ": statement : compound_statement\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | FOR LPAREN es1=expression_statement es2=expression_statement ex=expression RPAREN st=statement {
		$st_text = $FOR->getText() + $LPAREN->getText() + $es1.expr_stmt_text + $es2.expr_stmt_text + $ex.expr_text + $RPAREN->getText() + $st.st_text;
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | IF LPAREN ex=expression RPAREN st=statement {
		$st_text = $IF->getText() + " " + $LPAREN->getText() + $ex.expr_text + $RPAREN->getText() + $st.st_text;
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | IF LPAREN ex=expression RPAREN st1=statement ELSE st2=statement {
		$st_text = $IF->getText() + " " + $LPAREN->getText() + $ex.expr_text + $RPAREN->getText() + $st1.st_text + "\n" + $ELSE->getText() + "\n" + $st2.st_text;
		writeIntoparserLogFile("Line " + to_string($st2.stop->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n");
		writeIntoparserLogFile($st_text + "\n");
	  }
	  | WHILE LPAREN ex=expression RPAREN st=statement {
		$st_text = $WHILE->getText() + " " + $LPAREN->getText() + $ex.expr_text + $RPAREN->getText() + $st.st_text;
		writeIntoparserLogFile("Line " + to_string($st.stop->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | PRINTLN LPAREN ID RPAREN SEMICOLON {
		$st_text = $PRINTLN->getText() + $LPAREN->getText() + $ID->getText() + $RPAREN->getText() + $SEMICOLON->getText();
		writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  | RETURN expr=expression SEMICOLON {
		$st_text = $RETURN->getText() + " " + $expr.expr_text + $SEMICOLON->getText();
		writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": statement : RETURN expression SEMICOLON\n");
		writeIntoparserLogFile($st_text + "\n\n");
	  }
	  ;
	  
expression_statement returns [string expr_stmt_text]	
			: SEMICOLON {
				$expr_stmt_text = $SEMICOLON->getText();
				writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": expression_statement : SEMICOLON\n");
				writeIntoparserLogFile($expr_stmt_text + "\n");
			}			
			| exp=expression SEMICOLON {
				$expr_stmt_text = $exp.expr_text + $SEMICOLON->getText();
				writeIntoparserLogFile("Line " + to_string($SEMICOLON->getLine()) + ": expression_statement : expression SEMICOLON\n");
				writeIntoparserLogFile($expr_stmt_text + "\n");
			}
			;
	  
variable returns [string var_text]
	 : ID {
		data_type = symbolTable->getType($ID->getText());
		$var_text = $ID->getText();
		writeIntoparserLogFile("Line " + to_string($ID->getLine()) + ": variable : ID\n");
		writeIntoparserLogFile($var_text + "\n");
	 }	
	 | ID LTHIRD ex=expression RTHIRD {
		data_type = symbolTable->getType($ID->getText());
		$var_text = $ID->getText() + $LTHIRD->getText() + $ex.expr_text + $RTHIRD->getText();
		writeIntoparserLogFile("Line " + to_string($RTHIRD->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n");
		if (type1 != "int") {
			writeIntoparserLogFile("Error at line " + to_string($RTHIRD->getLine()) + ": Expression inside third brackets not an integer\n");
		}
		writeIntoparserLogFile($var_text + "\n");
	 }
	 ;
	 
 expression returns [string expr_text]
 	   : logex=logic_expression {
		 $expr_text = $logex.logic_text;
		 writeIntoparserLogFile("Line " + to_string($logex.stop->getLine()) + ": expression : logic expression\n");
		 writeIntoparserLogFile($expr_text + "\n");
	   }
	   | var=variable ASSIGNOP logex=logic_expression {
		 $expr_text = $var.var_text + $ASSIGNOP->getText() + $logex.logic_text;
		 writeIntoparserLogFile("Line " + to_string($logex.stop->getLine()) + ": expression : variable ASSIGNOP logic_expression\n");
		 if (data_type != type1) {
			writeIntoparserLogFile("Error at line " + to_string($logex.stop->getLine()) + ": Type Mismatch\n");
		 }
		 writeIntoparserLogFile($expr_text + "\n");
	   }
	   ;
			
logic_expression returns [string logic_text]
		 : relex=rel_expression {
			$logic_text = $relex.rel_text;
			writeIntoparserLogFile("Line " + to_string($relex.stop->getLine()) + ": logic_expression : rel_expression\n");
			writeIntoparserLogFile($logic_text + "\n");
		 }
		 | relex1=rel_expression LOGICOP relex2=rel_expression {
			$logic_text = $relex1.rel_text + $LOGICOP->getText() + $relex2.rel_text;
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
		| smex1=simple_expression RELOP smex2=simple_expression	{
		  $rel_text = $smex1.sim_text + $RELOP->getText() + $smex2.sim_text;
		  writeIntoparserLogFile("Line " + to_string($smex2.stop->getLine()) + ": rel_expression : simple_expression RELOP simple_expression\n");
		  writeIntoparserLogFile($rel_text + "\n");
		}
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
     |  t=term MULOP unex=unary_expression {
		$term_text = $t.term_text + $MULOP->getText() + $unex.unex_text;
		writeIntoparserLogFile("Line " + to_string($unex.stop->getLine()) + ": term : term MULOP unary_expression\n");
		writeIntoparserLogFile($term_text + "\n");
	 }
     ;

unary_expression returns [string unex_text]
		 : ADDOP unex=unary_expression {
			$unex_text = $ADDOP->getText() + $unex.unex_text;
			writeIntoparserLogFile("Line " + to_string($unex.stop->getLine()) + ": unary_expression : ADDOP unary_expression\n");
			writeIntoparserLogFile($unex_text + "\n");
		 } 
		 | NOT unex=unary_expression {
			$unex_text = $NOT->getText() + $unex.unex_text;
			writeIntoparserLogFile("Line " + to_string($unex.stop->getLine()) + ": unary_expression : NOT unary expression\n");
			writeIntoparserLogFile($unex_text + "\n");
		 }
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
	| ID LPAREN al=argument_list RPAREN {
		$fact_text = $ID->getText() + $LPAREN->getText() + $al.arglist_text + $RPAREN->getText();
		writeIntoparserLogFile("Line " + to_string($RPAREN->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| LPAREN ex=expression RPAREN {
		$fact_text = $LPAREN->getText() + $ex.expr_text + $RPAREN->getText();
		writeIntoparserLogFile("Line " + to_string($RPAREN->getLine()) + ": factor : LPAREN expression RPAREN\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| cn=CONST_INT {
		type1 = "int";
		$fact_text = $cn->getText();
		writeIntoparserLogFile("Line " + to_string($cn->getLine()) + ": factor : CONST_INT\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| cn=CONST_FLOAT {
		type1 = "float";
		$fact_text = $cn->getText() + "0";
		writeIntoparserLogFile("Line " + to_string($cn->getLine()) + ": factor : CONST_FLOAT\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| var=variable INCOP {
		$fact_text = $var.var_text + $INCOP->getText();
		writeIntoparserLogFile("Line " + to_string($INCOP->getLine()) + ": factor : variable INCOP\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	| var=variable DECOP {
		$fact_text = $var.var_text + $DECOP->getText();
		writeIntoparserLogFile("Line " + to_string($DECOP->getLine()) + ": factor : variable DECOP\n");
		writeIntoparserLogFile($fact_text + "\n");
	}
	;
	
argument_list returns [string arglist_text]
			  : args=arguments {
				$arglist_text = $args.arg_text;
				writeIntoparserLogFile("Line " + to_string($args.stop->getLine()) + ": argument_list : arguments\n");
				writeIntoparserLogFile($arglist_text + "\n");
			  }
			  |
			  ;
	
arguments returns [string arg_text]
		  : args=arguments COMMA logex=logic_expression {
			$arg_text = $args.arg_text + $COMMA->getText() + $logex.logic_text;
			writeIntoparserLogFile("Line " + to_string($logex.stop->getLine()) + ": arguments : arguments COMMA logic_expression\n");
			writeIntoparserLogFile($arg_text + "\n");
		  }
	      | logex=logic_expression {
			$arg_text = $logex.logic_text;
			writeIntoparserLogFile("Line " + to_string($logex.stop->getLine()) + ": arguments : logic_expression\n");
			writeIntoparserLogFile($arg_text + "\n");
		  }
	      ;

curlybrace returns [string curl_text]
		: LCURL {
			$curl_text = $LCURL->getText();
			if (has_param == 0) {
				symbolTable->EnterScope();
			}
			else {
				has_param = 0;
			}
		}
		;
