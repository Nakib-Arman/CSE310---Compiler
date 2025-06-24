// Generated from /home/arzon/Work/Academics/3-1/Sessional/CSE210 - Compiler/3.SyntaxAndSemanticAnalysis/antlr4-resources/antlr4-skeletons/cpp/C8086Parser.g4 by ANTLR 4.13.1

    #include <iostream>
    #include <fstream>
    #include <string>
	#include <vector>
    #include <cstdlib>
    #include "C8086Lexer.h"
	#include "SymbolTable/2105128_SymbolTable.cpp"

    extern std::ofstream parserLogFile;
    extern std::ofstream errorFile;

    extern int syntaxErrorCount;

	using namespace std;

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class C8086Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		LINE_COMMENT=1, BLOCK_COMMENT=2, STRING=3, WS=4, IF=5, ELSE=6, FOR=7, 
		WHILE=8, PRINTLN=9, RETURN=10, INT=11, FLOAT=12, VOID=13, LPAREN=14, RPAREN=15, 
		LCURL=16, RCURL=17, LTHIRD=18, RTHIRD=19, SEMICOLON=20, COMMA=21, ADDOP=22, 
		SUBOP=23, MULOP=24, INCOP=25, DECOP=26, NOT=27, RELOP=28, LOGICOP=29, 
		ASSIGNOP=30, HASH=31, ID=32, CONST_INT=33, CONST_FLOAT=34;
	public static final int
		RULE_start = 0, RULE_program = 1, RULE_unit = 2, RULE_func_declaration = 3, 
		RULE_func_name_dec = 4, RULE_func_definition = 5, RULE_func_name = 6, 
		RULE_return_type = 7, RULE_r_paren = 8, RULE_parameter_list = 9, RULE_compound_statement = 10, 
		RULE_var_declaration = 11, RULE_declaration_list_err = 12, RULE_type_specifier = 13, 
		RULE_declaration_list = 14, RULE_statements = 15, RULE_statement = 16, 
		RULE_expression_statement = 17, RULE_variable = 18, RULE_expression = 19, 
		RULE_logic_expression = 20, RULE_rel_expression = 21, RULE_simple_expression = 22, 
		RULE_term = 23, RULE_unary_expression = 24, RULE_factor = 25, RULE_argument_list = 26, 
		RULE_arguments = 27, RULE_curlybrace = 28;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "program", "unit", "func_declaration", "func_name_dec", "func_definition", 
			"func_name", "return_type", "r_paren", "parameter_list", "compound_statement", 
			"var_declaration", "declaration_list_err", "type_specifier", "declaration_list", 
			"statements", "statement", "expression_statement", "variable", "expression", 
			"logic_expression", "rel_expression", "simple_expression", "term", "unary_expression", 
			"factor", "argument_list", "arguments", "curlybrace"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, "'if'", "'else'", "'for'", "'while'", "'printf'", 
			"'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
			"'['", "']'", "';'", "','", null, null, null, "'++'", "'--'", "'!'", 
			null, null, "'='", "'#'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
			"FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
			"RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
			"ADDOP", "SUBOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", 
			"ASSIGNOP", "HASH", "ID", "CONST_INT", "CONST_FLOAT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "C8086Parser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


	    void writeIntoparserLogFile(const std::string message) {
	        if (!parserLogFile) {
	            std::cout << "Error opening parserLogFile.txt" << std::endl;
	            return;
	        }

	        parserLogFile << message << std::endl;
	        parserLogFile.flush();
	    }

	    void writeIntoparserErrorFile(const std::string message) {
	        if (!errorFile) {
	            std::cout << "Error opening errorFile.txt" << std::endl;
	            return;
	        }
	        errorFile << message << std::endl;
	        errorFile.flush();
	    }

		SymbolTable* symbolTable = new SymbolTable(30, &HashFunction::SDBMHash);
		Function* cur_func = new Function();
		int has_param = 0;
		int err_count = 0;
		string data_type="";
		string type1="",type2="";
		int in_declaration=0;
		vector<string> argument_types;

	public C8086Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StartContext extends ParserRuleContext {
		public ProgramContext pg;
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_start);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			((StartContext)_localctx).pg = program(0);

			        writeIntoparserLogFile("Line " + to_string((((StartContext)_localctx).pg!=null?(((StartContext)_localctx).pg.stop):null)->getLine()) + ": start : program\n");
					symbolTable->print_all_scope_nonempty_indices(parserLogFile);
					writeIntoparserLogFile("Total number of lines: " + to_string((((StartContext)_localctx).pg!=null?(((StartContext)_localctx).pg.stop):null)->getLine()));
					writeIntoparserLogFile("Total number of errors: " + to_string(err_count));
				
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public string pg_text;
		public ProgramContext pg;
		public UnitContext unit;
		public UnitContext un;
		public UnitContext unit() {
			return getRuleContext(UnitContext.class,0);
		}
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		return program(0);
	}

	private ProgramContext program(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ProgramContext _localctx = new ProgramContext(_ctx, _parentState);
		ProgramContext _prevctx = _localctx;
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_program, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(62);
			((ProgramContext)_localctx).unit = unit();

					((ProgramContext)_localctx).pg_text =  ((ProgramContext)_localctx).unit.unit_text;
					writeIntoparserLogFile("\nLine " + to_string((((ProgramContext)_localctx).unit!=null?(((ProgramContext)_localctx).unit.stop):null)->getLine()) + ": program : unit\n");
					writeIntoparserLogFile(((ProgramContext)_localctx).unit.unit_text + "\n");
				
			}
			_ctx.stop = _input.LT(-1);
			setState(71);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ProgramContext(_parentctx, _parentState);
					_localctx.pg = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_program);
					setState(65);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(66);
					((ProgramContext)_localctx).un = ((ProgramContext)_localctx).unit = unit();

					          		((ProgramContext)_localctx).pg_text =  ((ProgramContext)_localctx).pg.pg_text + "\n" + ((ProgramContext)_localctx).un.unit_text;
					          		writeIntoparserLogFile("\nLine " + to_string((((ProgramContext)_localctx).unit!=null?(((ProgramContext)_localctx).unit.stop):null)->getLine()) + ": program : program unit\n");
					          		writeIntoparserLogFile(((ProgramContext)_localctx).pg.pg_text + "\n" + ((ProgramContext)_localctx).un.unit_text + "\n");
					          	
					}
					} 
				}
				setState(73);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitContext extends ParserRuleContext {
		public string unit_text;
		public Var_declarationContext vd;
		public Func_declarationContext fd;
		public Func_definitionContext fdef;
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public Func_declarationContext func_declaration() {
			return getRuleContext(Func_declarationContext.class,0);
		}
		public Func_definitionContext func_definition() {
			return getRuleContext(Func_definitionContext.class,0);
		}
		public UnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unit; }
	}

	public final UnitContext unit() throws RecognitionException {
		UnitContext _localctx = new UnitContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_unit);
		try {
			setState(83);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(74);
				((UnitContext)_localctx).vd = var_declaration();

						((UnitContext)_localctx).unit_text =  ((UnitContext)_localctx).vd.var_text;
						writeIntoparserLogFile("Line " + to_string((((UnitContext)_localctx).vd!=null?(((UnitContext)_localctx).vd.stop):null)->getLine()) + ": unit : var_declaration\n");
						writeIntoparserLogFile(((UnitContext)_localctx).vd.var_text);
					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(77);
				((UnitContext)_localctx).fd = func_declaration();

						((UnitContext)_localctx).unit_text =  ((UnitContext)_localctx).fd.func_dec_text;
						writeIntoparserLogFile("\nLine " + to_string((((UnitContext)_localctx).fd!=null?(((UnitContext)_localctx).fd.stop):null)->getLine()) + ": unit : func_declaration\n");
						writeIntoparserLogFile(((UnitContext)_localctx).fd.func_dec_text);
					
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(80);
				((UnitContext)_localctx).fdef = func_definition();

						((UnitContext)_localctx).unit_text =  ((UnitContext)_localctx).fdef.func_def_text;
						writeIntoparserLogFile("\nLine " + to_string((((UnitContext)_localctx).fdef!=null?(((UnitContext)_localctx).fdef.stop):null)->getLine()) + ": unit : func_definition\n");
						writeIntoparserLogFile(((UnitContext)_localctx).fdef.func_def_text);
					 
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_declarationContext extends ParserRuleContext {
		public string func_dec_text;
		public Type_specifierContext ts;
		public Func_name_decContext fn;
		public Token LPAREN;
		public Parameter_listContext pm;
		public Token RPAREN;
		public Token SEMICOLON;
		public Token ID;
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public Func_name_decContext func_name_dec() {
			return getRuleContext(Func_name_decContext.class,0);
		}
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Func_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_declaration; }
	}

	public final Func_declarationContext func_declaration() throws RecognitionException {
		Func_declarationContext _localctx = new Func_declarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_func_declaration);
		try {
			setState(100);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(85);
				((Func_declarationContext)_localctx).ts = type_specifier();
				setState(86);
				((Func_declarationContext)_localctx).fn = func_name_dec();
				setState(87);
				((Func_declarationContext)_localctx).LPAREN = match(LPAREN);
				setState(88);
				((Func_declarationContext)_localctx).pm = parameter_list(0);
				setState(89);
				((Func_declarationContext)_localctx).RPAREN = match(RPAREN);
				setState(90);
				((Func_declarationContext)_localctx).SEMICOLON = match(SEMICOLON);

							((Func_declarationContext)_localctx).func_dec_text =  ((Func_declarationContext)_localctx).ts.name_line + " " + ((Func_declarationContext)_localctx).fn.func_name_text + ((Func_declarationContext)_localctx).LPAREN->getText() + ((Func_declarationContext)_localctx).pm.param_text + ((Func_declarationContext)_localctx).RPAREN->getText() + ((Func_declarationContext)_localctx).SEMICOLON->getText();
							writeIntoparserLogFile("Line " + to_string(((Func_declarationContext)_localctx).SEMICOLON->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");
							writeIntoparserLogFile(_localctx.func_dec_text);

							symbolTable->ExitScope();
							Function* temp = new Function();
							temp->setName(cur_func->getName());
							temp->setReturnType(((Func_declarationContext)_localctx).ts.name_line);
							temp->setParamList(cur_func->getParamList());
							temp->declare();
							symbolTable->insert(((Func_declarationContext)_localctx).fn.func_name_text,"func",temp);
							in_declaration = 0;
							cur_func->clearParamList();
						
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(93);
				((Func_declarationContext)_localctx).ts = type_specifier();
				setState(94);
				((Func_declarationContext)_localctx).ID = match(ID);
				setState(95);
				((Func_declarationContext)_localctx).LPAREN = match(LPAREN);
				setState(96);
				((Func_declarationContext)_localctx).RPAREN = match(RPAREN);
				setState(97);
				((Func_declarationContext)_localctx).SEMICOLON = match(SEMICOLON);

							((Func_declarationContext)_localctx).func_dec_text =  ((Func_declarationContext)_localctx).ts.name_line + " " + ((Func_declarationContext)_localctx).ID->getText() + ((Func_declarationContext)_localctx).LPAREN->getText() + ((Func_declarationContext)_localctx).RPAREN->getText() + ((Func_declarationContext)_localctx).SEMICOLON->getText();
							writeIntoparserLogFile("Line " + to_string(((Func_declarationContext)_localctx).SEMICOLON->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
							writeIntoparserLogFile(_localctx.func_dec_text);

							Function *temp = new Function();
							temp->setName(((Func_declarationContext)_localctx).ID->getText());
							temp->setReturnType(((Func_declarationContext)_localctx).ts.name_line);
							temp->declare();
							symbolTable->insert(((Func_declarationContext)_localctx).ID->getText(),"func",temp);
							in_declaration = 0;
						
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_name_decContext extends ParserRuleContext {
		public string func_name_text;
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Func_name_decContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_name_dec; }
	}

	public final Func_name_decContext func_name_dec() throws RecognitionException {
		Func_name_decContext _localctx = new Func_name_decContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_func_name_dec);
		try {
			setState(105);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(102);
				((Func_name_decContext)_localctx).ID = match(ID);

							cur_func->setName(((Func_name_decContext)_localctx).ID->getText());
							has_param = 1;
							in_declaration = 1;
							((Func_name_decContext)_localctx).func_name_text =  ((Func_name_decContext)_localctx).ID->getText();
						
				}
				break;
			case LPAREN:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_definitionContext extends ParserRuleContext {
		public string func_def_text;
		public Return_typeContext ts;
		public Func_nameContext fn;
		public Token LPAREN;
		public Parameter_listContext pm;
		public R_parenContext rp;
		public Compound_statementContext cmst;
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public Return_typeContext return_type() {
			return getRuleContext(Return_typeContext.class,0);
		}
		public Func_nameContext func_name() {
			return getRuleContext(Func_nameContext.class,0);
		}
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public R_parenContext r_paren() {
			return getRuleContext(R_parenContext.class,0);
		}
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public Func_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_definition; }
	}

	public final Func_definitionContext func_definition() throws RecognitionException {
		Func_definitionContext _localctx = new Func_definitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_func_definition);
		try {
			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				((Func_definitionContext)_localctx).ts = return_type();
				setState(108);
				((Func_definitionContext)_localctx).fn = func_name();
				setState(109);
				((Func_definitionContext)_localctx).LPAREN = match(LPAREN);
				setState(110);
				((Func_definitionContext)_localctx).pm = parameter_list(0);
				setState(111);
				((Func_definitionContext)_localctx).rp = r_paren();
				setState(112);
				((Func_definitionContext)_localctx).cmst = compound_statement();

							if(((Func_definitionContext)_localctx).cmst.type == "return" && ((Func_definitionContext)_localctx).ts.name_line == "void") {
								writeIntoparserLogFile("Error at line " + to_string((((Func_definitionContext)_localctx).cmst!=null?(((Func_definitionContext)_localctx).cmst.stop):null)->getLine()) + ": Cannot return value from function " + ((Func_definitionContext)_localctx).fn.func_name_text + " with void return type\n");
								writeIntoparserErrorFile("Error at line " + to_string((((Func_definitionContext)_localctx).cmst!=null?(((Func_definitionContext)_localctx).cmst.stop):null)->getLine()) + ": Cannot return value from function " + ((Func_definitionContext)_localctx).fn.func_name_text + " with void return type\n");
								err_count++;
							}

							cur_func->clearParamList();

							((Func_definitionContext)_localctx).func_def_text =  ((Func_definitionContext)_localctx).ts.name_line + " " + ((Func_definitionContext)_localctx).fn.func_name_text + ((Func_definitionContext)_localctx).LPAREN->getText() + ((Func_definitionContext)_localctx).pm.param_text + ((Func_definitionContext)_localctx).rp.rparen_text + ((Func_definitionContext)_localctx).cmst.cmst_text;
							writeIntoparserLogFile("Line " + to_string((((Func_definitionContext)_localctx).cmst!=null?(((Func_definitionContext)_localctx).cmst.stop):null)->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n");
							writeIntoparserLogFile(_localctx.func_def_text);

						
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(115);
				((Func_definitionContext)_localctx).ts = return_type();
				setState(116);
				((Func_definitionContext)_localctx).fn = func_name();
				setState(117);
				((Func_definitionContext)_localctx).LPAREN = match(LPAREN);
				setState(118);
				((Func_definitionContext)_localctx).rp = r_paren();
				setState(119);
				((Func_definitionContext)_localctx).cmst = compound_statement();

							((Func_definitionContext)_localctx).func_def_text =  ((Func_definitionContext)_localctx).ts.name_line + " " + ((Func_definitionContext)_localctx).fn.func_name_text + ((Func_definitionContext)_localctx).LPAREN->getText() + ((Func_definitionContext)_localctx).rp.rparen_text + ((Func_definitionContext)_localctx).cmst.cmst_text;
							writeIntoparserLogFile("Line " + to_string((((Func_definitionContext)_localctx).cmst!=null?(((Func_definitionContext)_localctx).cmst.stop):null)->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n");
							writeIntoparserLogFile(_localctx.func_def_text);
						
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_nameContext extends ParserRuleContext {
		public string func_name_text;
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Func_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_name; }
	}

	public final Func_nameContext func_name() throws RecognitionException {
		Func_nameContext _localctx = new Func_nameContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_func_name);
		try {
			setState(127);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(124);
				((Func_nameContext)_localctx).ID = match(ID);

							cur_func->setName(((Func_nameContext)_localctx).ID->getText());
							Function* temp = new Function();
							temp->setName(((Func_nameContext)_localctx).ID->getText());
							symbolTable->insert(((Func_nameContext)_localctx).ID->getText(),"func",temp);
							symbolTable->EnterScope();
							has_param = 1;
							((Func_nameContext)_localctx).func_name_text =  ((Func_nameContext)_localctx).ID->getText();
						
				}
				break;
			case LPAREN:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Return_typeContext extends ParserRuleContext {
		public string name_line;
		public Type_specifierContext ts;
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public Return_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_type; }
	}

	public final Return_typeContext return_type() throws RecognitionException {
		Return_typeContext _localctx = new Return_typeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_return_type);
		try {
			setState(133);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case FLOAT:
			case VOID:
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				((Return_typeContext)_localctx).ts = type_specifier();

							((Return_typeContext)_localctx).name_line =  ((Return_typeContext)_localctx).ts.name_line;
							cur_func->setReturnType(((Return_typeContext)_localctx).ts.name_line);
						
				}
				break;
			case LPAREN:
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class R_parenContext extends ParserRuleContext {
		public string rparen_text;
		public Token RPAREN;
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
		public R_parenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_r_paren; }
	}

	public final R_parenContext r_paren() throws RecognitionException {
		R_parenContext _localctx = new R_parenContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_r_paren);
		try {
			setState(138);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case RPAREN:
				enterOuterAlt(_localctx, 1);
				{
				setState(135);
				((R_parenContext)_localctx).RPAREN = match(RPAREN);

							Function* temp = symbolTable->getFunc(cur_func->getName());
							if(temp!=NULL){
								if (!temp->declarationType()){
									temp->setReturnType(cur_func->getReturnType());
									temp->setParamList(cur_func->getParamList());
								}
								else{
									if(temp->getReturnType() != cur_func->getReturnType()){
										writeIntoparserLogFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
										writeIntoparserErrorFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
										err_count++;
									}
									else if(temp->getParamNum() != cur_func->getParamNum()){
										writeIntoparserLogFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
										writeIntoparserErrorFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
										err_count++;
									}
								}
							}
							else{
								writeIntoparserLogFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
								writeIntoparserErrorFile("Error at line " + to_string(((R_parenContext)_localctx).RPAREN->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
								err_count++;
							}
							((R_parenContext)_localctx).rparen_text =  ((R_parenContext)_localctx).RPAREN->getText();
						
				}
				break;
			case LCURL:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Parameter_listContext extends ParserRuleContext {
		public string param_text;
		public Parameter_listContext pm;
		public Type_specifierContext ts;
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public Parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_list; }
	}

	public final Parameter_listContext parameter_list() throws RecognitionException {
		return parameter_list(0);
	}

	private Parameter_listContext parameter_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Parameter_listContext _localctx = new Parameter_listContext(_ctx, _parentState);
		Parameter_listContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_parameter_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(141);
				((Parameter_listContext)_localctx).ts = type_specifier();
				setState(142);
				((Parameter_listContext)_localctx).ID = match(ID);

							((Parameter_listContext)_localctx).param_text =  ((Parameter_listContext)_localctx).ts.name_line + " " + ((Parameter_listContext)_localctx).ID->getText();
							writeIntoparserLogFile("Line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": parameter_list : type_specifier ID\n");
							writeIntoparserLogFile(_localctx.param_text + "\n");
							
							if(!in_declaration){
								bool inserted = symbolTable->insert(((Parameter_listContext)_localctx).ID->getText(),((Parameter_listContext)_localctx).ts.name_line);
								if (!inserted) {
									writeIntoparserLogFile("Error at line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Parameter_listContext)_localctx).ID->getText() + "\n");
									writeIntoparserErrorFile("Error at line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Parameter_listContext)_localctx).ID->getText() + "\n");
									err_count++;
								}
							}
							cur_func->addToParamList(((Parameter_listContext)_localctx).ts.name_line);
						
				}
				break;
			case 2:
				{
				setState(145);
				((Parameter_listContext)_localctx).ts = type_specifier();

							((Parameter_listContext)_localctx).param_text =  ((Parameter_listContext)_localctx).ts.name_line;
							writeIntoparserLogFile("Line " + to_string((((Parameter_listContext)_localctx).ts!=null?(((Parameter_listContext)_localctx).ts.stop):null)->getLine()) + ": parameter_list : type_specifier\n");
							writeIntoparserLogFile(_localctx.param_text + "\n");
						
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(161);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(159);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
					case 1:
						{
						_localctx = new Parameter_listContext(_parentctx, _parentState);
						_localctx.pm = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(150);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(151);
						match(COMMA);
						setState(152);
						((Parameter_listContext)_localctx).ts = type_specifier();
						setState(153);
						((Parameter_listContext)_localctx).ID = match(ID);

						          			if(!in_declaration){
						          				bool inserted = symbolTable->insert(((Parameter_listContext)_localctx).ID->getText(),((Parameter_listContext)_localctx).ts.name_line);
						          				if (!inserted) {
						          					writeIntoparserLogFile("Error at line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Parameter_listContext)_localctx).ID->getText() + " in parameter\n");
						          					writeIntoparserErrorFile("Error at line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Parameter_listContext)_localctx).ID->getText() + " in parameter\n");
						          					err_count++;
						          				}
						          			}
						          			cur_func->addToParamList(((Parameter_listContext)_localctx).ts.name_line);

						          			((Parameter_listContext)_localctx).param_text =  ((Parameter_listContext)_localctx).pm.param_text + "," + ((Parameter_listContext)_localctx).ts.name_line + " " + ((Parameter_listContext)_localctx).ID->getText();
						          			writeIntoparserLogFile("Line " + to_string(((Parameter_listContext)_localctx).ID->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n");
						          			writeIntoparserLogFile(_localctx.param_text + "\n");
						          		
						}
						break;
					case 2:
						{
						_localctx = new Parameter_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(156);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(157);
						match(COMMA);
						setState(158);
						type_specifier();
						}
						break;
					}
					} 
				}
				setState(163);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Compound_statementContext extends ParserRuleContext {
		public string cmst_text;
		public string type;
		public CurlybraceContext c;
		public StatementsContext stmts;
		public Token RCURL;
		public TerminalNode RCURL() { return getToken(C8086Parser.RCURL, 0); }
		public CurlybraceContext curlybrace() {
			return getRuleContext(CurlybraceContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public Compound_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_statement; }
	}

	public final Compound_statementContext compound_statement() throws RecognitionException {
		Compound_statementContext _localctx = new Compound_statementContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_compound_statement);
		try {
			setState(173);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(164);
				((Compound_statementContext)_localctx).c = curlybrace();
				setState(165);
				((Compound_statementContext)_localctx).stmts = statements(0);
				setState(166);
				((Compound_statementContext)_localctx).RCURL = match(RCURL);

								((Compound_statementContext)_localctx).type =  ((Compound_statementContext)_localctx).stmts.type;
								((Compound_statementContext)_localctx).cmst_text =  ((Compound_statementContext)_localctx).c.curl_text + "\n" + ((Compound_statementContext)_localctx).stmts.stmts_text + ((Compound_statementContext)_localctx).RCURL->getText();
								writeIntoparserLogFile("Line " + to_string(((Compound_statementContext)_localctx).RCURL->getLine()) + ": compound_statement : LCURL statements RCURL\n");
								writeIntoparserLogFile(_localctx.cmst_text + "\n");

								symbolTable->print_all_scope_nonempty_indices(parserLogFile);
								symbolTable->ExitScope();
							
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(169);
				((Compound_statementContext)_localctx).c = curlybrace();
				setState(170);
				((Compound_statementContext)_localctx).RCURL = match(RCURL);

								((Compound_statementContext)_localctx).cmst_text =  ((Compound_statementContext)_localctx).c.curl_text + ((Compound_statementContext)_localctx).RCURL->getText();
								writeIntoparserLogFile("Line " + to_string(((Compound_statementContext)_localctx).RCURL->getLine()) + ": compound_statement : LCURL RCURL\n");
								writeIntoparserLogFile(_localctx.cmst_text + "\n");

								symbolTable->print_all_scope_nonempty_indices(parserLogFile);
								symbolTable->ExitScope();
							
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Var_declarationContext extends ParserRuleContext {
		public string var_text;
		public Type_specifierContext t;
		public Declaration_listContext dl;
		public Token sm;
		public Declaration_list_errContext de;
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public Declaration_list_errContext declaration_list_err() {
			return getRuleContext(Declaration_list_errContext.class,0);
		}
		public Var_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declaration; }
	}

	public final Var_declarationContext var_declaration() throws RecognitionException {
		Var_declarationContext _localctx = new Var_declarationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_var_declaration);
		try {
			setState(185);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(175);
				((Var_declarationContext)_localctx).t = type_specifier();
				setState(176);
				((Var_declarationContext)_localctx).dl = declaration_list(0);
				setState(177);
				((Var_declarationContext)_localctx).sm = match(SEMICOLON);

				  		((Var_declarationContext)_localctx).var_text =  ((Var_declarationContext)_localctx).t.name_line + " " + ((Var_declarationContext)_localctx).dl.dl_list + ";";
						writeIntoparserLogFile("Line " + to_string(((Var_declarationContext)_localctx).sm->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n");
						if (((Var_declarationContext)_localctx).t.name_line == "void") {
							writeIntoparserLogFile("Error at line " + to_string(((Var_declarationContext)_localctx).sm->getLine()) + ": Variable type cannot be void\n");
							writeIntoparserErrorFile("Error at line " + to_string(((Var_declarationContext)_localctx).sm->getLine()) + ": Variable type cannot be void\n");
							err_count++;
						}
						writeIntoparserLogFile(((Var_declarationContext)_localctx).t.name_line + " " + ((Var_declarationContext)_localctx).dl.dl_list + ";\n");
				      
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(180);
				((Var_declarationContext)_localctx).t = type_specifier();
				setState(181);
				((Var_declarationContext)_localctx).de = declaration_list_err();
				setState(182);
				((Var_declarationContext)_localctx).sm = match(SEMICOLON);

				      
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Declaration_list_errContext extends ParserRuleContext {
		public std::string error_name;
		public Declaration_list_errContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_list_err; }
	}

	public final Declaration_list_errContext declaration_list_err() throws RecognitionException {
		Declaration_list_errContext _localctx = new Declaration_list_errContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_declaration_list_err);
		try {
			enterOuterAlt(_localctx, 1);
			{

			        ((Declaration_list_errContext)_localctx).error_name =  "Error in declaration list";
			    
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_specifierContext extends ParserRuleContext {
		public std::string name_line;
		public Token INT;
		public Token FLOAT;
		public Token VOID;
		public TerminalNode INT() { return getToken(C8086Parser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(C8086Parser.FLOAT, 0); }
		public TerminalNode VOID() { return getToken(C8086Parser.VOID, 0); }
		public Type_specifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_specifier; }
	}

	public final Type_specifierContext type_specifier() throws RecognitionException {
		Type_specifierContext _localctx = new Type_specifierContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_type_specifier);
		try {
			setState(195);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(189);
				((Type_specifierContext)_localctx).INT = match(INT);

							data_type = "int";
							((Type_specifierContext)_localctx).name_line =  ((Type_specifierContext)_localctx).INT->getText();
							writeIntoparserLogFile("Line " + to_string(((Type_specifierContext)_localctx).INT->getLine()) + ": type_specifier : INT\n");
							writeIntoparserLogFile(((Type_specifierContext)_localctx).INT->getText() + "\n");
				        
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(191);
				((Type_specifierContext)_localctx).FLOAT = match(FLOAT);

							data_type = "float";
							((Type_specifierContext)_localctx).name_line =  ((Type_specifierContext)_localctx).FLOAT->getText();
							writeIntoparserLogFile("Line " + to_string(((Type_specifierContext)_localctx).FLOAT->getLine()) + ": type_specifier : FLOAT\n");
							writeIntoparserLogFile(((Type_specifierContext)_localctx).FLOAT->getText() + "\n");
				        
				}
				break;
			case VOID:
				enterOuterAlt(_localctx, 3);
				{
				setState(193);
				((Type_specifierContext)_localctx).VOID = match(VOID);

							data_type = "void";
							((Type_specifierContext)_localctx).name_line =  ((Type_specifierContext)_localctx).VOID->getText();
							writeIntoparserLogFile("Line " + to_string(((Type_specifierContext)_localctx).VOID->getLine()) + ": type_specifier : VOID\n");
							writeIntoparserLogFile(((Type_specifierContext)_localctx).VOID->getText() + "\n");
				        
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Declaration_listContext extends ParserRuleContext {
		public string dl_list;
		public Declaration_listContext dl;
		public Token ID;
		public Token LTHIRD;
		public Token CONST_INT;
		public Token RTHIRD;
		public Token cn;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(C8086Parser.LTHIRD, 0); }
		public TerminalNode CONST_INT() { return getToken(C8086Parser.CONST_INT, 0); }
		public TerminalNode RTHIRD() { return getToken(C8086Parser.RTHIRD, 0); }
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public Declaration_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_list; }
	}

	public final Declaration_listContext declaration_list() throws RecognitionException {
		return declaration_list(0);
	}

	private Declaration_listContext declaration_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Declaration_listContext _localctx = new Declaration_listContext(_ctx, _parentState);
		Declaration_listContext _prevctx = _localctx;
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_declaration_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				{
				setState(198);
				((Declaration_listContext)_localctx).ID = match(ID);

							bool inserted = symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),data_type);
							if(!inserted) {
								writeIntoparserLogFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
								writeIntoparserErrorFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
								err_count++;
							}
							((Declaration_listContext)_localctx).dl_list =  ((Declaration_listContext)_localctx).ID->getText();
							writeIntoparserLogFile("Line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": declaration_list : ID\n");
							writeIntoparserLogFile(_localctx.dl_list + "\n");
				 		  
				}
				break;
			case 2:
				{
				setState(200);
				((Declaration_listContext)_localctx).ID = match(ID);
				setState(201);
				((Declaration_listContext)_localctx).LTHIRD = match(LTHIRD);
				setState(202);
				((Declaration_listContext)_localctx).CONST_INT = match(CONST_INT);
				setState(203);
				((Declaration_listContext)_localctx).RTHIRD = match(RTHIRD);

							bool inserted = symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),data_type + " array");
							if(!inserted) {
								writeIntoparserLogFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
								writeIntoparserErrorFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
								err_count++;
							}
							((Declaration_listContext)_localctx).dl_list =  ((Declaration_listContext)_localctx).ID->getText() + ((Declaration_listContext)_localctx).LTHIRD->getText() + ((Declaration_listContext)_localctx).CONST_INT->getText() + ((Declaration_listContext)_localctx).RTHIRD->getText();
							writeIntoparserLogFile("Line " + to_string(((Declaration_listContext)_localctx).RTHIRD->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n");
							writeIntoparserLogFile(_localctx.dl_list + "\n");
						  
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(220);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(218);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new Declaration_listContext(_parentctx, _parentState);
						_localctx.dl = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(207);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(208);
						match(COMMA);
						setState(209);
						((Declaration_listContext)_localctx).ID = match(ID);

						          			bool inserted = symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),data_type);
						          			if(!inserted) {
						          				writeIntoparserLogFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
						          				writeIntoparserErrorFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
						          				err_count++;
						          			}
						          			((Declaration_listContext)_localctx).dl_list =  ((Declaration_listContext)_localctx).dl.dl_list + "," + ((Declaration_listContext)_localctx).ID->getText();
						          			writeIntoparserLogFile("Line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": declaration_list : declaration_list COMMA ID\n");
						          			writeIntoparserLogFile(_localctx.dl_list + "\n");
						          		  
						}
						break;
					case 2:
						{
						_localctx = new Declaration_listContext(_parentctx, _parentState);
						_localctx.dl = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(211);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(212);
						match(COMMA);
						setState(213);
						((Declaration_listContext)_localctx).ID = match(ID);
						setState(214);
						((Declaration_listContext)_localctx).LTHIRD = match(LTHIRD);
						setState(215);
						((Declaration_listContext)_localctx).cn = match(CONST_INT);
						setState(216);
						((Declaration_listContext)_localctx).RTHIRD = match(RTHIRD);

						          			bool inserted = symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),data_type + " array");
						          			if(!inserted) {
						          				writeIntoparserLogFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
						          				writeIntoparserErrorFile("Error at line " + to_string(((Declaration_listContext)_localctx).ID->getLine()) + ": Multiple declaration of " + ((Declaration_listContext)_localctx).ID->getText() + "\n");
						          				err_count++;
						          			}
						          			((Declaration_listContext)_localctx).dl_list =  ((Declaration_listContext)_localctx).dl.dl_list + "," + ((Declaration_listContext)_localctx).ID->getText() + ((Declaration_listContext)_localctx).LTHIRD->getText() + ((Declaration_listContext)_localctx).cn->getText() + ((Declaration_listContext)_localctx).RTHIRD->getText();
						          			writeIntoparserLogFile("Line " + to_string(((Declaration_listContext)_localctx).RTHIRD->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
						          			writeIntoparserLogFile(_localctx.dl_list + "\n");
						          		  
						}
						break;
					}
					} 
				}
				setState(222);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementsContext extends ParserRuleContext {
		public string stmts_text;
		public string type;
		public StatementsContext stmts;
		public StatementContext st;
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	}

	public final StatementsContext statements() throws RecognitionException {
		return statements(0);
	}

	private StatementsContext statements(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementsContext _localctx = new StatementsContext(_ctx, _parentState);
		StatementsContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_statements, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(224);
			((StatementsContext)_localctx).st = statement();

					((StatementsContext)_localctx).type =  ((StatementsContext)_localctx).st.type;
					((StatementsContext)_localctx).stmts_text =  ((StatementsContext)_localctx).st.st_text + "\n";
					writeIntoparserLogFile("Line " + to_string((((StatementsContext)_localctx).st!=null?(((StatementsContext)_localctx).st.stop):null)->getLine()) + ": statements : statement\n");
					writeIntoparserLogFile(_localctx.stmts_text);
				   
			}
			_ctx.stop = _input.LT(-1);
			setState(233);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementsContext(_parentctx, _parentState);
					_localctx.stmts = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_statements);
					setState(227);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(228);
					((StatementsContext)_localctx).st = statement();

					          		((StatementsContext)_localctx).stmts_text =  ((StatementsContext)_localctx).stmts.stmts_text + ((StatementsContext)_localctx).st.st_text + "\n";
					          		writeIntoparserLogFile("Line " + to_string((((StatementsContext)_localctx).st!=null?(((StatementsContext)_localctx).st.stop):null)->getLine()) + ": statements : statements statement\n");
					          		writeIntoparserLogFile(_localctx.stmts_text);
					          	   
					}
					} 
				}
				setState(235);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public string st_text;
		public string type;
		public Var_declarationContext vd;
		public Expression_statementContext exst;
		public Compound_statementContext cs;
		public Token FOR;
		public Token LPAREN;
		public Expression_statementContext es1;
		public Expression_statementContext es2;
		public ExpressionContext ex;
		public Token RPAREN;
		public StatementContext st;
		public Token IF;
		public StatementContext st1;
		public Token ELSE;
		public StatementContext st2;
		public Token WHILE;
		public Token PRINTLN;
		public Token ID;
		public Token SEMICOLON;
		public Token RETURN;
		public ExpressionContext expr;
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public List<Expression_statementContext> expression_statement() {
			return getRuleContexts(Expression_statementContext.class);
		}
		public Expression_statementContext expression_statement(int i) {
			return getRuleContext(Expression_statementContext.class,i);
		}
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public TerminalNode FOR() { return getToken(C8086Parser.FOR, 0); }
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode IF() { return getToken(C8086Parser.IF, 0); }
		public TerminalNode ELSE() { return getToken(C8086Parser.ELSE, 0); }
		public TerminalNode WHILE() { return getToken(C8086Parser.WHILE, 0); }
		public TerminalNode PRINTLN() { return getToken(C8086Parser.PRINTLN, 0); }
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public TerminalNode RETURN() { return getToken(C8086Parser.RETURN, 0); }
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_statement);
		try {
			setState(288);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(236);
				((StatementContext)_localctx).vd = var_declaration();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).vd.var_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).vd!=null?(((StatementContext)_localctx).vd.stop):null)->getLine()) + ": statement : var_declaration\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(239);
				((StatementContext)_localctx).exst = expression_statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).exst.expr_stmt_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).exst!=null?(((StatementContext)_localctx).exst.stop):null)->getLine()) + ": statement : expression_statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(242);
				((StatementContext)_localctx).cs = compound_statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).cs.cmst_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).cs!=null?(((StatementContext)_localctx).cs.stop):null)->getLine()) + ": statement : compound_statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(245);
				((StatementContext)_localctx).FOR = match(FOR);
				setState(246);
				((StatementContext)_localctx).LPAREN = match(LPAREN);
				setState(247);
				((StatementContext)_localctx).es1 = expression_statement();
				setState(248);
				((StatementContext)_localctx).es2 = expression_statement();
				setState(249);
				((StatementContext)_localctx).ex = expression();
				setState(250);
				((StatementContext)_localctx).RPAREN = match(RPAREN);
				setState(251);
				((StatementContext)_localctx).st = statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).FOR->getText() + ((StatementContext)_localctx).LPAREN->getText() + ((StatementContext)_localctx).es1.expr_stmt_text + ((StatementContext)_localctx).es2.expr_stmt_text + ((StatementContext)_localctx).ex.expr_text + ((StatementContext)_localctx).RPAREN->getText() + ((StatementContext)_localctx).st.st_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).st!=null?(((StatementContext)_localctx).st.stop):null)->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(254);
				((StatementContext)_localctx).IF = match(IF);
				setState(255);
				((StatementContext)_localctx).LPAREN = match(LPAREN);
				setState(256);
				((StatementContext)_localctx).ex = expression();
				setState(257);
				((StatementContext)_localctx).RPAREN = match(RPAREN);
				setState(258);
				((StatementContext)_localctx).st = statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).IF->getText() + ((StatementContext)_localctx).LPAREN->getText() + ((StatementContext)_localctx).ex.expr_text + ((StatementContext)_localctx).RPAREN->getText() + ((StatementContext)_localctx).st.st_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).st!=null?(((StatementContext)_localctx).st.stop):null)->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(261);
				((StatementContext)_localctx).IF = match(IF);
				setState(262);
				((StatementContext)_localctx).LPAREN = match(LPAREN);
				setState(263);
				((StatementContext)_localctx).ex = expression();
				setState(264);
				((StatementContext)_localctx).RPAREN = match(RPAREN);
				setState(265);
				((StatementContext)_localctx).st1 = statement();
				setState(266);
				((StatementContext)_localctx).ELSE = match(ELSE);
				setState(267);
				((StatementContext)_localctx).st2 = statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).IF->getText() + ((StatementContext)_localctx).LPAREN->getText() + ((StatementContext)_localctx).ex.expr_text + ((StatementContext)_localctx).RPAREN->getText() + ((StatementContext)_localctx).st1.st_text + ((StatementContext)_localctx).ELSE->getText() + " " + ((StatementContext)_localctx).st2.st_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).st2!=null?(((StatementContext)_localctx).st2.stop):null)->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(270);
				((StatementContext)_localctx).WHILE = match(WHILE);
				setState(271);
				((StatementContext)_localctx).LPAREN = match(LPAREN);
				setState(272);
				((StatementContext)_localctx).ex = expression();
				setState(273);
				((StatementContext)_localctx).RPAREN = match(RPAREN);
				setState(274);
				((StatementContext)_localctx).st = statement();

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).WHILE->getText() + ((StatementContext)_localctx).LPAREN->getText() + ((StatementContext)_localctx).ex.expr_text + ((StatementContext)_localctx).RPAREN->getText() + ((StatementContext)_localctx).st.st_text;
						writeIntoparserLogFile("Line " + to_string((((StatementContext)_localctx).st!=null?(((StatementContext)_localctx).st.stop):null)->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(277);
				((StatementContext)_localctx).PRINTLN = match(PRINTLN);
				setState(278);
				((StatementContext)_localctx).LPAREN = match(LPAREN);
				setState(279);
				((StatementContext)_localctx).ID = match(ID);
				setState(280);
				((StatementContext)_localctx).RPAREN = match(RPAREN);
				setState(281);
				((StatementContext)_localctx).SEMICOLON = match(SEMICOLON);

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).PRINTLN->getText() + ((StatementContext)_localctx).LPAREN->getText() + ((StatementContext)_localctx).ID->getText() + ((StatementContext)_localctx).RPAREN->getText() + ((StatementContext)_localctx).SEMICOLON->getText();
						writeIntoparserLogFile("Line " + to_string(((StatementContext)_localctx).SEMICOLON->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n");
						SymbolInfo* temp = symbolTable->LookUp(((StatementContext)_localctx).ID->getText());
						if (temp == NULL) {
							writeIntoparserLogFile("Error at line " + to_string(((StatementContext)_localctx).SEMICOLON->getLine()) + ": Undeclared variable " + ((StatementContext)_localctx).ID->getText() + "\n");
							writeIntoparserErrorFile("Error at line " + to_string(((StatementContext)_localctx).SEMICOLON->getLine()) + ": Undeclared variable " + ((StatementContext)_localctx).ID->getText() + "\n");
							err_count++;
						}
						writeIntoparserLogFile(_localctx.st_text + "\n");
					  
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(283);
				((StatementContext)_localctx).RETURN = match(RETURN);
				setState(284);
				((StatementContext)_localctx).expr = expression();
				setState(285);
				((StatementContext)_localctx).SEMICOLON = match(SEMICOLON);

						((StatementContext)_localctx).st_text =  ((StatementContext)_localctx).RETURN->getText() + " " + ((StatementContext)_localctx).expr.expr_text + ((StatementContext)_localctx).SEMICOLON->getText();
						writeIntoparserLogFile("Line " + to_string(((StatementContext)_localctx).SEMICOLON->getLine()) + ": statement : RETURN expression SEMICOLON\n");
						writeIntoparserLogFile(_localctx.st_text + "\n");
						((StatementContext)_localctx).type =  "return";
					  
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expression_statementContext extends ParserRuleContext {
		public string expr_stmt_text;
		public Token SEMICOLON;
		public ExpressionContext exp;
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Expression_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_statement; }
	}

	public final Expression_statementContext expression_statement() throws RecognitionException {
		Expression_statementContext _localctx = new Expression_statementContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_expression_statement);
		try {
			setState(296);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SEMICOLON:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				((Expression_statementContext)_localctx).SEMICOLON = match(SEMICOLON);

								((Expression_statementContext)_localctx).expr_stmt_text =  ((Expression_statementContext)_localctx).SEMICOLON->getText();
								writeIntoparserLogFile("Line " + to_string(((Expression_statementContext)_localctx).SEMICOLON->getLine()) + ": expression_statement : SEMICOLON\n");
								writeIntoparserLogFile(_localctx.expr_stmt_text + "\n");
							
				}
				break;
			case LPAREN:
			case ADDOP:
			case NOT:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(292);
				((Expression_statementContext)_localctx).exp = expression();
				setState(293);
				((Expression_statementContext)_localctx).SEMICOLON = match(SEMICOLON);

								((Expression_statementContext)_localctx).expr_stmt_text =  ((Expression_statementContext)_localctx).exp.expr_text + ((Expression_statementContext)_localctx).SEMICOLON->getText();
								writeIntoparserLogFile("Line " + to_string(((Expression_statementContext)_localctx).SEMICOLON->getLine()) + ": expression_statement : expression SEMICOLON\n");
								writeIntoparserLogFile(_localctx.expr_stmt_text + "\n");
							
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public string var_text;
		public string type;
		public Token ID;
		public Token LTHIRD;
		public ExpressionContext ex;
		public Token RTHIRD;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(C8086Parser.LTHIRD, 0); }
		public TerminalNode RTHIRD() { return getToken(C8086Parser.RTHIRD, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_variable);
		try {
			setState(306);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(298);
				((VariableContext)_localctx).ID = match(ID);

						data_type = symbolTable->getType(((VariableContext)_localctx).ID->getText());
						((VariableContext)_localctx).type =  data_type;
						string suffix="";
						if(data_type.length() >= 6){
							suffix = data_type.substr(data_type.length() - 6);
						}
						((VariableContext)_localctx).var_text =  ((VariableContext)_localctx).ID->getText();
						writeIntoparserLogFile("Line " + to_string(((VariableContext)_localctx).ID->getLine()) + ": variable : ID\n");
						if(data_type == "") {
							writeIntoparserLogFile("Error at line " + to_string(((VariableContext)_localctx).ID->getLine()) + ": Undeclared variable " + ((VariableContext)_localctx).ID->getText() + "\n");
							writeIntoparserErrorFile("Error at line " + to_string(((VariableContext)_localctx).ID->getLine()) + ": Undeclared variable " + ((VariableContext)_localctx).ID->getText() + "\n");
							err_count++;
						}
						else if (suffix == " array") {
							writeIntoparserLogFile("Error at line " + to_string(((VariableContext)_localctx).ID->getLine()) + ": Type mismatch, " + ((VariableContext)_localctx).ID->getText() + " is an array\n");
							writeIntoparserErrorFile("Error at line " + to_string(((VariableContext)_localctx).ID->getLine()) + ": Type mismatch, " + ((VariableContext)_localctx).ID->getText() + " is an array\n");
							err_count++;
						}
						writeIntoparserLogFile(_localctx.var_text + "\n");
					 
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(300);
				((VariableContext)_localctx).ID = match(ID);
				setState(301);
				((VariableContext)_localctx).LTHIRD = match(LTHIRD);
				setState(302);
				((VariableContext)_localctx).ex = expression();
				setState(303);
				((VariableContext)_localctx).RTHIRD = match(RTHIRD);

						data_type = symbolTable->getType(((VariableContext)_localctx).ID->getText());
						((VariableContext)_localctx).var_text =  ((VariableContext)_localctx).ID->getText() + ((VariableContext)_localctx).LTHIRD->getText() + ((VariableContext)_localctx).ex.expr_text + ((VariableContext)_localctx).RTHIRD->getText();
						string suffix="";
						if(data_type.length() >= 6){
							suffix = data_type.substr(data_type.length() - 6);
						}
						writeIntoparserLogFile("Line " + to_string(((VariableContext)_localctx).RTHIRD->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n");
						if (suffix != " array") {
							writeIntoparserLogFile("Error at line " + to_string(((VariableContext)_localctx).RTHIRD->getLine()) + ": " + ((VariableContext)_localctx).ID->getText() + " not an array\n");
							writeIntoparserErrorFile("Error at line " + to_string(((VariableContext)_localctx).RTHIRD->getLine()) + ": " + ((VariableContext)_localctx).ID->getText() + " not an array\n");
							err_count++;
						}
						if (((VariableContext)_localctx).ex.type != "int") {
							writeIntoparserLogFile("Error at line " + to_string(((VariableContext)_localctx).RTHIRD->getLine()) + ": Expression inside third brackets not an integer\n");
							writeIntoparserErrorFile("Error at line " + to_string(((VariableContext)_localctx).RTHIRD->getLine()) + ": Expression inside third brackets not an integer\n");
							err_count++;
						}
						writeIntoparserLogFile(_localctx.var_text + "\n");
						string element_type = data_type.substr(0, data_type.find(' '));
						((VariableContext)_localctx).type =  element_type;
					 
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public string expr_text;
		public string type;
		public Logic_expressionContext logex;
		public VariableContext var;
		public Token ASSIGNOP;
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public TerminalNode ASSIGNOP() { return getToken(C8086Parser.ASSIGNOP, 0); }
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expression);
		try {
			setState(316);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(308);
				((ExpressionContext)_localctx).logex = logic_expression();

						 ((ExpressionContext)_localctx).type =  ((ExpressionContext)_localctx).logex.type;
						 ((ExpressionContext)_localctx).expr_text =  ((ExpressionContext)_localctx).logex.logic_text;
						 writeIntoparserLogFile("Line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": expression : logic_expression\n");
						 writeIntoparserLogFile(_localctx.expr_text + "\n");
					   
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(311);
				((ExpressionContext)_localctx).var = variable();
				setState(312);
				((ExpressionContext)_localctx).ASSIGNOP = match(ASSIGNOP);
				setState(313);
				((ExpressionContext)_localctx).logex = logic_expression();

						 ((ExpressionContext)_localctx).expr_text =  ((ExpressionContext)_localctx).var.var_text + ((ExpressionContext)_localctx).ASSIGNOP->getText() + ((ExpressionContext)_localctx).logex.logic_text;
						 writeIntoparserLogFile("Line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": expression : variable ASSIGNOP logic_expression\n");
						 data_type = ((ExpressionContext)_localctx).var.type;
						 string element_type = data_type.substr(0, data_type.find(' '));
						 if (data_type != "" && ((ExpressionContext)_localctx).logex.type != "Undefined"){
							if (element_type != ((ExpressionContext)_localctx).logex.type) {
								if (data_type == "void" || ((ExpressionContext)_localctx).logex.type == "void") {
									writeIntoparserLogFile("Error at line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": Void function used in expression\n");
									writeIntoparserErrorFile("Error at line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": Void function used in expression\n");
									err_count++;
									if (data_type != "void") ((ExpressionContext)_localctx).type =  data_type;
									else if (((ExpressionContext)_localctx).logex.type != "void") ((ExpressionContext)_localctx).type =  ((ExpressionContext)_localctx).logex.type;
									else ((ExpressionContext)_localctx).type =  "void";
								}
								else{
									if (data_type == "float" && ((ExpressionContext)_localctx).logex.type == "int") {
									}
									else{
										writeIntoparserLogFile("Error at line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": Type Mismatch\n");
										writeIntoparserErrorFile("Error at line " + to_string((((ExpressionContext)_localctx).logex!=null?(((ExpressionContext)_localctx).logex.stop):null)->getLine()) + ": Type Mismatch\n");
										err_count++;
									}
								}
							}
						 }
						 writeIntoparserLogFile(_localctx.expr_text + "\n");
					   
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Logic_expressionContext extends ParserRuleContext {
		public string logic_text;
		public string type;
		public Rel_expressionContext relex;
		public Rel_expressionContext relex1;
		public Token LOGICOP;
		public Rel_expressionContext relex2;
		public List<Rel_expressionContext> rel_expression() {
			return getRuleContexts(Rel_expressionContext.class);
		}
		public Rel_expressionContext rel_expression(int i) {
			return getRuleContext(Rel_expressionContext.class,i);
		}
		public TerminalNode LOGICOP() { return getToken(C8086Parser.LOGICOP, 0); }
		public Logic_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logic_expression; }
	}

	public final Logic_expressionContext logic_expression() throws RecognitionException {
		Logic_expressionContext _localctx = new Logic_expressionContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_logic_expression);
		try {
			setState(326);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(318);
				((Logic_expressionContext)_localctx).relex = rel_expression();

							((Logic_expressionContext)_localctx).type =  ((Logic_expressionContext)_localctx).relex.type;
							((Logic_expressionContext)_localctx).logic_text =  ((Logic_expressionContext)_localctx).relex.rel_text;
							writeIntoparserLogFile("Line " + to_string((((Logic_expressionContext)_localctx).relex!=null?(((Logic_expressionContext)_localctx).relex.stop):null)->getLine()) + ": logic_expression : rel_expression\n");
							writeIntoparserLogFile(_localctx.logic_text + "\n");
						 
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(321);
				((Logic_expressionContext)_localctx).relex1 = rel_expression();
				setState(322);
				((Logic_expressionContext)_localctx).LOGICOP = match(LOGICOP);
				setState(323);
				((Logic_expressionContext)_localctx).relex2 = rel_expression();

							((Logic_expressionContext)_localctx).logic_text =  ((Logic_expressionContext)_localctx).relex1.rel_text + ((Logic_expressionContext)_localctx).LOGICOP->getText() + ((Logic_expressionContext)_localctx).relex2.rel_text;
							writeIntoparserLogFile("Line " + to_string((((Logic_expressionContext)_localctx).relex2!=null?(((Logic_expressionContext)_localctx).relex2.stop):null)->getLine()) + ": logic_expression : rel_expression LOGICOP rel_expression\n");
							writeIntoparserLogFile(_localctx.logic_text + "\n");
						 
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Rel_expressionContext extends ParserRuleContext {
		public string rel_text;
		public string type;
		public Simple_expressionContext smex;
		public Simple_expressionContext smex1;
		public Token RELOP;
		public Simple_expressionContext smex2;
		public List<Simple_expressionContext> simple_expression() {
			return getRuleContexts(Simple_expressionContext.class);
		}
		public Simple_expressionContext simple_expression(int i) {
			return getRuleContext(Simple_expressionContext.class,i);
		}
		public TerminalNode RELOP() { return getToken(C8086Parser.RELOP, 0); }
		public Rel_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rel_expression; }
	}

	public final Rel_expressionContext rel_expression() throws RecognitionException {
		Rel_expressionContext _localctx = new Rel_expressionContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_rel_expression);
		try {
			setState(336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(328);
				((Rel_expressionContext)_localctx).smex = simple_expression(0);

						  ((Rel_expressionContext)_localctx).type =  ((Rel_expressionContext)_localctx).smex.type;
						  ((Rel_expressionContext)_localctx).rel_text =  ((Rel_expressionContext)_localctx).smex.sim_text;
						  writeIntoparserLogFile("Line " + to_string((((Rel_expressionContext)_localctx).smex!=null?(((Rel_expressionContext)_localctx).smex.stop):null)->getLine()) + ": rel_expression : simple_expression\n");
						  writeIntoparserLogFile(_localctx.rel_text + "\n");
						
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(331);
				((Rel_expressionContext)_localctx).smex1 = simple_expression(0);
				setState(332);
				((Rel_expressionContext)_localctx).RELOP = match(RELOP);
				setState(333);
				((Rel_expressionContext)_localctx).smex2 = simple_expression(0);

						  ((Rel_expressionContext)_localctx).rel_text =  ((Rel_expressionContext)_localctx).smex1.sim_text + ((Rel_expressionContext)_localctx).RELOP->getText() + ((Rel_expressionContext)_localctx).smex2.sim_text;
						  writeIntoparserLogFile("Line " + to_string((((Rel_expressionContext)_localctx).smex2!=null?(((Rel_expressionContext)_localctx).smex2.stop):null)->getLine()) + ": rel_expression : simple_expression RELOP simple_expression\n");
						  writeIntoparserLogFile(_localctx.rel_text + "\n");
						
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Simple_expressionContext extends ParserRuleContext {
		public string sim_text;
		public string type;
		public Simple_expressionContext smex;
		public TermContext term;
		public Token ADDOP;
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(C8086Parser.ADDOP, 0); }
		public Simple_expressionContext simple_expression() {
			return getRuleContext(Simple_expressionContext.class,0);
		}
		public Simple_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_expression; }
	}

	public final Simple_expressionContext simple_expression() throws RecognitionException {
		return simple_expression(0);
	}

	private Simple_expressionContext simple_expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Simple_expressionContext _localctx = new Simple_expressionContext(_ctx, _parentState);
		Simple_expressionContext _prevctx = _localctx;
		int _startState = 44;
		enterRecursionRule(_localctx, 44, RULE_simple_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(339);
			((Simple_expressionContext)_localctx).term = term(0);

						((Simple_expressionContext)_localctx).type =  ((Simple_expressionContext)_localctx).term.type;
						((Simple_expressionContext)_localctx).sim_text =  ((Simple_expressionContext)_localctx).term.term_text;
						writeIntoparserLogFile("Line " + to_string((((Simple_expressionContext)_localctx).term!=null?(((Simple_expressionContext)_localctx).term.stop):null)->getLine()) + ": simple_expression : term\n");
						writeIntoparserLogFile(_localctx.sim_text + "\n");
					  
			}
			_ctx.stop = _input.LT(-1);
			setState(349);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Simple_expressionContext(_parentctx, _parentState);
					_localctx.smex = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_simple_expression);
					setState(342);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(343);
					((Simple_expressionContext)_localctx).ADDOP = match(ADDOP);
					setState(344);
					((Simple_expressionContext)_localctx).term = term(0);

					          			if(((Simple_expressionContext)_localctx).smex.type == "float" || ((Simple_expressionContext)_localctx).term.type == "float") ((Simple_expressionContext)_localctx).type = "float";
					          			else ((Simple_expressionContext)_localctx).type =  "int";
					          			((Simple_expressionContext)_localctx).sim_text =  ((Simple_expressionContext)_localctx).smex.sim_text + ((Simple_expressionContext)_localctx).ADDOP->getText() + ((Simple_expressionContext)_localctx).term.term_text;
					          			writeIntoparserLogFile("Line " + to_string((((Simple_expressionContext)_localctx).term!=null?(((Simple_expressionContext)_localctx).term.stop):null)->getLine()) + ": simple_expression : simple_expression ADDOP term\n");
					          			writeIntoparserLogFile(_localctx.sim_text + "\n");
					          		  
					}
					} 
				}
				setState(351);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermContext extends ParserRuleContext {
		public string term_text;
		public string type;
		public TermContext t;
		public Unary_expressionContext unex;
		public Token MULOP;
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public TerminalNode MULOP() { return getToken(C8086Parser.MULOP, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		return term(0);
	}

	private TermContext term(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermContext _localctx = new TermContext(_ctx, _parentState);
		TermContext _prevctx = _localctx;
		int _startState = 46;
		enterRecursionRule(_localctx, 46, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(353);
			((TermContext)_localctx).unex = unary_expression();

					((TermContext)_localctx).type =  ((TermContext)_localctx).unex.type;
					((TermContext)_localctx).term_text =  ((TermContext)_localctx).unex.unex_text;
					writeIntoparserLogFile("Line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": term : unary_expression\n");
					writeIntoparserLogFile(_localctx.term_text + "\n");
				 
			}
			_ctx.stop = _input.LT(-1);
			setState(363);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TermContext(_parentctx, _parentState);
					_localctx.t = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_term);
					setState(356);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(357);
					((TermContext)_localctx).MULOP = match(MULOP);
					setState(358);
					((TermContext)_localctx).unex = unary_expression();

					          		((TermContext)_localctx).term_text =  ((TermContext)_localctx).t.term_text + ((TermContext)_localctx).MULOP->getText() + ((TermContext)_localctx).unex.unex_text;
					          		writeIntoparserLogFile("Line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": term : term MULOP unary_expression\n");
					          		if (((TermContext)_localctx).t.type != "int" || ((TermContext)_localctx).unex.type != "int") {
					          			if (((TermContext)_localctx).MULOP->getText() == "%") {
					          				writeIntoparserLogFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Non-Integer operand on modulus operator\n");
					          				writeIntoparserErrorFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Non-Integer operand on modulus operator\n");
					          				err_count++;
					          				((TermContext)_localctx).type =  "int";
					          			}
					          			else{
					          				if(((TermContext)_localctx).t.type == "void" || ((TermContext)_localctx).unex.type == "void") {
					          					writeIntoparserLogFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Void function used in expression\n");
					          					writeIntoparserErrorFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Void function used in expression\n");
					          					err_count++;
					          					if(((TermContext)_localctx).t.type != "void") ((TermContext)_localctx).type =  ((TermContext)_localctx).t.type;
					          					else if (((TermContext)_localctx).unex.type != "void") ((TermContext)_localctx).type =  ((TermContext)_localctx).unex.type;
					          					else{
					          						((TermContext)_localctx).type =  "void";
					          					}
					          				}
					          				else ((TermContext)_localctx).type =  "float";
					          			}
					          		}
					          		if (((TermContext)_localctx).MULOP->getText() == "%" && ((TermContext)_localctx).unex.unex_text == "0") {
					          			writeIntoparserLogFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Modulus by Zero\n");
					          			writeIntoparserErrorFile("Error at line " + to_string((((TermContext)_localctx).unex!=null?(((TermContext)_localctx).unex.stop):null)->getLine()) + ": Modulus by Zero\n");
					          			err_count++;
					          			((TermContext)_localctx).type =  ((TermContext)_localctx).t.type;
					          		}
					          		writeIntoparserLogFile(_localctx.term_text + "\n");
					          	 
					}
					} 
				}
				setState(365);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Unary_expressionContext extends ParserRuleContext {
		public string unex_text;
		public string type;
		public Token ADDOP;
		public Unary_expressionContext unex;
		public Token NOT;
		public FactorContext factor;
		public TerminalNode ADDOP() { return getToken(C8086Parser.ADDOP, 0); }
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(C8086Parser.NOT, 0); }
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public Unary_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unary_expression; }
	}

	public final Unary_expressionContext unary_expression() throws RecognitionException {
		Unary_expressionContext _localctx = new Unary_expressionContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_unary_expression);
		try {
			setState(377);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADDOP:
				enterOuterAlt(_localctx, 1);
				{
				setState(366);
				((Unary_expressionContext)_localctx).ADDOP = match(ADDOP);
				setState(367);
				((Unary_expressionContext)_localctx).unex = unary_expression();

							((Unary_expressionContext)_localctx).unex_text =  ((Unary_expressionContext)_localctx).ADDOP->getText() + ((Unary_expressionContext)_localctx).unex.unex_text;
							writeIntoparserLogFile("Line " + to_string((((Unary_expressionContext)_localctx).unex!=null?(((Unary_expressionContext)_localctx).unex.stop):null)->getLine()) + ": unary_expression : ADDOP unary_expression\n");
							writeIntoparserLogFile(_localctx.unex_text + "\n");
						 
				}
				break;
			case NOT:
				enterOuterAlt(_localctx, 2);
				{
				setState(370);
				((Unary_expressionContext)_localctx).NOT = match(NOT);
				setState(371);
				((Unary_expressionContext)_localctx).unex = unary_expression();

							((Unary_expressionContext)_localctx).unex_text =  ((Unary_expressionContext)_localctx).NOT->getText() + ((Unary_expressionContext)_localctx).unex.unex_text;
							writeIntoparserLogFile("Line " + to_string((((Unary_expressionContext)_localctx).unex!=null?(((Unary_expressionContext)_localctx).unex.stop):null)->getLine()) + ": unary_expression : NOT unary_expression\n");
							writeIntoparserLogFile(_localctx.unex_text + "\n");
						 
				}
				break;
			case LPAREN:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(374);
				((Unary_expressionContext)_localctx).factor = factor();

							((Unary_expressionContext)_localctx).type =  ((Unary_expressionContext)_localctx).factor.type;
							((Unary_expressionContext)_localctx).unex_text =  ((Unary_expressionContext)_localctx).factor.fact_text;
							writeIntoparserLogFile("Line " + to_string((((Unary_expressionContext)_localctx).factor!=null?(((Unary_expressionContext)_localctx).factor.stop):null)->getLine()) + ": unary_expression : factor\n");
							writeIntoparserLogFile(_localctx.unex_text + "\n");
						 
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FactorContext extends ParserRuleContext {
		public string fact_text;
		public string type;
		public VariableContext var;
		public Token ID;
		public Token LPAREN;
		public Argument_listContext al;
		public Token RPAREN;
		public ExpressionContext ex;
		public Token cn;
		public Token INCOP;
		public Token DECOP;
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
		public Argument_listContext argument_list() {
			return getRuleContext(Argument_listContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CONST_INT() { return getToken(C8086Parser.CONST_INT, 0); }
		public TerminalNode CONST_FLOAT() { return getToken(C8086Parser.CONST_FLOAT, 0); }
		public TerminalNode INCOP() { return getToken(C8086Parser.INCOP, 0); }
		public TerminalNode DECOP() { return getToken(C8086Parser.DECOP, 0); }
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_factor);
		try {
			setState(405);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(379);
				((FactorContext)_localctx).var = variable();

						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).var.var_text;
						writeIntoparserLogFile("Line " + to_string((((FactorContext)_localctx).var!=null?(((FactorContext)_localctx).var.stop):null)->getLine()) + ": factor : variable\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(382);
				((FactorContext)_localctx).ID = match(ID);
				setState(383);
				((FactorContext)_localctx).LPAREN = match(LPAREN);
				setState(384);
				((FactorContext)_localctx).al = argument_list();
				setState(385);
				((FactorContext)_localctx).RPAREN = match(RPAREN);

						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).ID->getText() + ((FactorContext)_localctx).LPAREN->getText() + ((FactorContext)_localctx).al.arglist_text + ((FactorContext)_localctx).RPAREN->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n");
						
						Function* temp = symbolTable->getFunc(((FactorContext)_localctx).ID->getText());
						if(temp == NULL) {
							writeIntoparserLogFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": Undefined function " + ((FactorContext)_localctx).ID->getText() + "\n");
							writeIntoparserErrorFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": Undefined function " + ((FactorContext)_localctx).ID->getText() + "\n");
							err_count++;
							((FactorContext)_localctx).type =  "Undefined";
						}
						else{
							string suffix="";
							if(data_type.length() >= 6){
								suffix = data_type.substr(data_type.length() - 6);
							}
							if (suffix != " array") {
								vector <string> param_list = temp->getParamList();
								if (argument_types.size() != param_list.size()){
									writeIntoparserLogFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + ((FactorContext)_localctx).ID->getText() + "\n");
									writeIntoparserErrorFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": Total number of arguments mismatch with declaration in function " + ((FactorContext)_localctx).ID->getText() + "\n");
									err_count++;
								}
								else{
									for(int i=0;i<param_list.size();i++) {
										if(argument_types[i] != param_list[i]) {
											writeIntoparserLogFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": " + to_string(i+1) + "th argument mismatch in function " + ((FactorContext)_localctx).ID->getText() + "\n");
											writeIntoparserErrorFile("Error at line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": " + to_string(i+1) + "th argument mismatch in function " + ((FactorContext)_localctx).ID->getText() + "\n");
											err_count++;
											break;
										}
									}
								}
							}
							((FactorContext)_localctx).type =  temp->getReturnType();
						}

						writeIntoparserLogFile(_localctx.fact_text + "\n");
						argument_types.clear();
					
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(388);
				((FactorContext)_localctx).LPAREN = match(LPAREN);
				setState(389);
				((FactorContext)_localctx).ex = expression();
				setState(390);
				((FactorContext)_localctx).RPAREN = match(RPAREN);

						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).LPAREN->getText() + ((FactorContext)_localctx).ex.expr_text + ((FactorContext)_localctx).RPAREN->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).RPAREN->getLine()) + ": factor : LPAREN expression RPAREN\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(393);
				((FactorContext)_localctx).cn = match(CONST_INT);

						((FactorContext)_localctx).type =  "int";
						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).cn->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).cn->getLine()) + ": factor : CONST_INT\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(395);
				((FactorContext)_localctx).cn = match(CONST_FLOAT);

						((FactorContext)_localctx).type =  "float";
						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).cn->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).cn->getLine()) + ": factor : CONST_FLOAT\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(397);
				((FactorContext)_localctx).var = variable();
				setState(398);
				((FactorContext)_localctx).INCOP = match(INCOP);

						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).var.var_text + ((FactorContext)_localctx).INCOP->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).INCOP->getLine()) + ": factor : variable INCOP\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(401);
				((FactorContext)_localctx).var = variable();
				setState(402);
				((FactorContext)_localctx).DECOP = match(DECOP);

						((FactorContext)_localctx).fact_text =  ((FactorContext)_localctx).var.var_text + ((FactorContext)_localctx).DECOP->getText();
						writeIntoparserLogFile("Line " + to_string(((FactorContext)_localctx).DECOP->getLine()) + ": factor : variable DECOP\n");
						writeIntoparserLogFile(_localctx.fact_text + "\n");
					
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Argument_listContext extends ParserRuleContext {
		public string arglist_text;
		public ArgumentsContext args;
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public Argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_list; }
	}

	public final Argument_listContext argument_list() throws RecognitionException {
		Argument_listContext _localctx = new Argument_listContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_argument_list);
		try {
			setState(411);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
			case ADDOP:
			case NOT:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(407);
				((Argument_listContext)_localctx).args = arguments(0);

								((Argument_listContext)_localctx).arglist_text =  ((Argument_listContext)_localctx).args.arg_text;
								writeIntoparserLogFile("Line " + to_string((((Argument_listContext)_localctx).args!=null?(((Argument_listContext)_localctx).args.stop):null)->getLine()) + ": argument_list : arguments\n");
								writeIntoparserLogFile(_localctx.arglist_text + "\n");
							  
				}
				break;
			case RPAREN:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentsContext extends ParserRuleContext {
		public string arg_text;
		public ArgumentsContext args;
		public Logic_expressionContext logex;
		public Token COMMA;
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public ArgumentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arguments; }
	}

	public final ArgumentsContext arguments() throws RecognitionException {
		return arguments(0);
	}

	private ArgumentsContext arguments(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArgumentsContext _localctx = new ArgumentsContext(_ctx, _parentState);
		ArgumentsContext _prevctx = _localctx;
		int _startState = 54;
		enterRecursionRule(_localctx, 54, RULE_arguments, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(414);
			((ArgumentsContext)_localctx).logex = logic_expression();

						((ArgumentsContext)_localctx).arg_text =  ((ArgumentsContext)_localctx).logex.logic_text;
						writeIntoparserLogFile("Line " + to_string((((ArgumentsContext)_localctx).logex!=null?(((ArgumentsContext)_localctx).logex.stop):null)->getLine()) + ": arguments : logic_expression\n");
						writeIntoparserLogFile(_localctx.arg_text + "\n");

						argument_types.push_back(((ArgumentsContext)_localctx).logex.type);
					  
			}
			_ctx.stop = _input.LT(-1);
			setState(424);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ArgumentsContext(_parentctx, _parentState);
					_localctx.args = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_arguments);
					setState(417);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(418);
					((ArgumentsContext)_localctx).COMMA = match(COMMA);
					setState(419);
					((ArgumentsContext)_localctx).logex = logic_expression();

					          			((ArgumentsContext)_localctx).arg_text =  ((ArgumentsContext)_localctx).args.arg_text + ((ArgumentsContext)_localctx).COMMA->getText() + ((ArgumentsContext)_localctx).logex.logic_text;
					          			writeIntoparserLogFile("Line " + to_string((((ArgumentsContext)_localctx).logex!=null?(((ArgumentsContext)_localctx).logex.stop):null)->getLine()) + ": arguments : arguments COMMA logic_expression\n");
					          			writeIntoparserLogFile(_localctx.arg_text + "\n");

					          			argument_types.push_back(((ArgumentsContext)_localctx).logex.type);
					          		  
					}
					} 
				}
				setState(426);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CurlybraceContext extends ParserRuleContext {
		public string curl_text;
		public Token LCURL;
		public TerminalNode LCURL() { return getToken(C8086Parser.LCURL, 0); }
		public CurlybraceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_curlybrace; }
	}

	public final CurlybraceContext curlybrace() throws RecognitionException {
		CurlybraceContext _localctx = new CurlybraceContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_curlybrace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(427);
			((CurlybraceContext)_localctx).LCURL = match(LCURL);

						((CurlybraceContext)_localctx).curl_text =  ((CurlybraceContext)_localctx).LCURL->getText();
						if (has_param == 0) {
							symbolTable->EnterScope();
						}
						else {
							has_param = 0;
						}
					
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 1:
			return program_sempred((ProgramContext)_localctx, predIndex);
		case 9:
			return parameter_list_sempred((Parameter_listContext)_localctx, predIndex);
		case 14:
			return declaration_list_sempred((Declaration_listContext)_localctx, predIndex);
		case 15:
			return statements_sempred((StatementsContext)_localctx, predIndex);
		case 22:
			return simple_expression_sempred((Simple_expressionContext)_localctx, predIndex);
		case 23:
			return term_sempred((TermContext)_localctx, predIndex);
		case 27:
			return arguments_sempred((ArgumentsContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean program_sempred(ProgramContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameter_list_sempred(Parameter_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 4);
		case 2:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean declaration_list_sempred(Declaration_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean statements_sempred(StatementsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean simple_expression_sempred(Simple_expressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean term_sempred(TermContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean arguments_sempred(ArgumentsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\"\u01af\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0005\u0001F\b\u0001\n\u0001\f\u0001I\t\u0001\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0003\u0002T\b\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003e\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u0004j\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005"+
		"{\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u0080\b\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007\u0086\b\u0007"+
		"\u0001\b\u0001\b\u0001\b\u0003\b\u008b\b\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003\t\u0095\b\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005\t\u00a0\b\t\n"+
		"\t\f\t\u00a3\t\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0003\n\u00ae\b\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0003\u000b\u00ba\b\u000b\u0001\f\u0001\f\u0001\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00c4\b\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0003\u000e\u00ce\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0005\u000e\u00db\b\u000e\n\u000e\f\u000e\u00de\t\u000e\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0005\u000f\u00e8\b\u000f\n\u000f\f\u000f\u00eb\t\u000f"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u0121\b\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0003\u0011\u0129\b\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u0133\b\u0012"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0003\u0013\u013d\b\u0013\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0003\u0014\u0147\b\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0003\u0015\u0151\b\u0015"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0005\u0016\u015c\b\u0016\n\u0016"+
		"\f\u0016\u015f\t\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0005\u0017"+
		"\u016a\b\u0017\n\u0017\f\u0017\u016d\t\u0017\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0003\u0018\u017a\b\u0018\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0003\u0019\u0196\b\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0003\u001a\u019c\b\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0005"+
		"\u001b\u01a7\b\u001b\n\u001b\f\u001b\u01aa\t\u001b\u0001\u001c\u0001\u001c"+
		"\u0001\u001c\u0001\u001c\u0000\u0007\u0002\u0012\u001c\u001e,.6\u001d"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$&(*,.02468\u0000\u0000\u01be\u0000:\u0001\u0000\u0000"+
		"\u0000\u0002=\u0001\u0000\u0000\u0000\u0004S\u0001\u0000\u0000\u0000\u0006"+
		"d\u0001\u0000\u0000\u0000\bi\u0001\u0000\u0000\u0000\nz\u0001\u0000\u0000"+
		"\u0000\f\u007f\u0001\u0000\u0000\u0000\u000e\u0085\u0001\u0000\u0000\u0000"+
		"\u0010\u008a\u0001\u0000\u0000\u0000\u0012\u0094\u0001\u0000\u0000\u0000"+
		"\u0014\u00ad\u0001\u0000\u0000\u0000\u0016\u00b9\u0001\u0000\u0000\u0000"+
		"\u0018\u00bb\u0001\u0000\u0000\u0000\u001a\u00c3\u0001\u0000\u0000\u0000"+
		"\u001c\u00cd\u0001\u0000\u0000\u0000\u001e\u00df\u0001\u0000\u0000\u0000"+
		" \u0120\u0001\u0000\u0000\u0000\"\u0128\u0001\u0000\u0000\u0000$\u0132"+
		"\u0001\u0000\u0000\u0000&\u013c\u0001\u0000\u0000\u0000(\u0146\u0001\u0000"+
		"\u0000\u0000*\u0150\u0001\u0000\u0000\u0000,\u0152\u0001\u0000\u0000\u0000"+
		".\u0160\u0001\u0000\u0000\u00000\u0179\u0001\u0000\u0000\u00002\u0195"+
		"\u0001\u0000\u0000\u00004\u019b\u0001\u0000\u0000\u00006\u019d\u0001\u0000"+
		"\u0000\u00008\u01ab\u0001\u0000\u0000\u0000:;\u0003\u0002\u0001\u0000"+
		";<\u0006\u0000\uffff\uffff\u0000<\u0001\u0001\u0000\u0000\u0000=>\u0006"+
		"\u0001\uffff\uffff\u0000>?\u0003\u0004\u0002\u0000?@\u0006\u0001\uffff"+
		"\uffff\u0000@G\u0001\u0000\u0000\u0000AB\n\u0002\u0000\u0000BC\u0003\u0004"+
		"\u0002\u0000CD\u0006\u0001\uffff\uffff\u0000DF\u0001\u0000\u0000\u0000"+
		"EA\u0001\u0000\u0000\u0000FI\u0001\u0000\u0000\u0000GE\u0001\u0000\u0000"+
		"\u0000GH\u0001\u0000\u0000\u0000H\u0003\u0001\u0000\u0000\u0000IG\u0001"+
		"\u0000\u0000\u0000JK\u0003\u0016\u000b\u0000KL\u0006\u0002\uffff\uffff"+
		"\u0000LT\u0001\u0000\u0000\u0000MN\u0003\u0006\u0003\u0000NO\u0006\u0002"+
		"\uffff\uffff\u0000OT\u0001\u0000\u0000\u0000PQ\u0003\n\u0005\u0000QR\u0006"+
		"\u0002\uffff\uffff\u0000RT\u0001\u0000\u0000\u0000SJ\u0001\u0000\u0000"+
		"\u0000SM\u0001\u0000\u0000\u0000SP\u0001\u0000\u0000\u0000T\u0005\u0001"+
		"\u0000\u0000\u0000UV\u0003\u001a\r\u0000VW\u0003\b\u0004\u0000WX\u0005"+
		"\u000e\u0000\u0000XY\u0003\u0012\t\u0000YZ\u0005\u000f\u0000\u0000Z[\u0005"+
		"\u0014\u0000\u0000[\\\u0006\u0003\uffff\uffff\u0000\\e\u0001\u0000\u0000"+
		"\u0000]^\u0003\u001a\r\u0000^_\u0005 \u0000\u0000_`\u0005\u000e\u0000"+
		"\u0000`a\u0005\u000f\u0000\u0000ab\u0005\u0014\u0000\u0000bc\u0006\u0003"+
		"\uffff\uffff\u0000ce\u0001\u0000\u0000\u0000dU\u0001\u0000\u0000\u0000"+
		"d]\u0001\u0000\u0000\u0000e\u0007\u0001\u0000\u0000\u0000fg\u0005 \u0000"+
		"\u0000gj\u0006\u0004\uffff\uffff\u0000hj\u0001\u0000\u0000\u0000if\u0001"+
		"\u0000\u0000\u0000ih\u0001\u0000\u0000\u0000j\t\u0001\u0000\u0000\u0000"+
		"kl\u0003\u000e\u0007\u0000lm\u0003\f\u0006\u0000mn\u0005\u000e\u0000\u0000"+
		"no\u0003\u0012\t\u0000op\u0003\u0010\b\u0000pq\u0003\u0014\n\u0000qr\u0006"+
		"\u0005\uffff\uffff\u0000r{\u0001\u0000\u0000\u0000st\u0003\u000e\u0007"+
		"\u0000tu\u0003\f\u0006\u0000uv\u0005\u000e\u0000\u0000vw\u0003\u0010\b"+
		"\u0000wx\u0003\u0014\n\u0000xy\u0006\u0005\uffff\uffff\u0000y{\u0001\u0000"+
		"\u0000\u0000zk\u0001\u0000\u0000\u0000zs\u0001\u0000\u0000\u0000{\u000b"+
		"\u0001\u0000\u0000\u0000|}\u0005 \u0000\u0000}\u0080\u0006\u0006\uffff"+
		"\uffff\u0000~\u0080\u0001\u0000\u0000\u0000\u007f|\u0001\u0000\u0000\u0000"+
		"\u007f~\u0001\u0000\u0000\u0000\u0080\r\u0001\u0000\u0000\u0000\u0081"+
		"\u0082\u0003\u001a\r\u0000\u0082\u0083\u0006\u0007\uffff\uffff\u0000\u0083"+
		"\u0086\u0001\u0000\u0000\u0000\u0084\u0086\u0001\u0000\u0000\u0000\u0085"+
		"\u0081\u0001\u0000\u0000\u0000\u0085\u0084\u0001\u0000\u0000\u0000\u0086"+
		"\u000f\u0001\u0000\u0000\u0000\u0087\u0088\u0005\u000f\u0000\u0000\u0088"+
		"\u008b\u0006\b\uffff\uffff\u0000\u0089\u008b\u0001\u0000\u0000\u0000\u008a"+
		"\u0087\u0001\u0000\u0000\u0000\u008a\u0089\u0001\u0000\u0000\u0000\u008b"+
		"\u0011\u0001\u0000\u0000\u0000\u008c\u008d\u0006\t\uffff\uffff\u0000\u008d"+
		"\u008e\u0003\u001a\r\u0000\u008e\u008f\u0005 \u0000\u0000\u008f\u0090"+
		"\u0006\t\uffff\uffff\u0000\u0090\u0095\u0001\u0000\u0000\u0000\u0091\u0092"+
		"\u0003\u001a\r\u0000\u0092\u0093\u0006\t\uffff\uffff\u0000\u0093\u0095"+
		"\u0001\u0000\u0000\u0000\u0094\u008c\u0001\u0000\u0000\u0000\u0094\u0091"+
		"\u0001\u0000\u0000\u0000\u0095\u00a1\u0001\u0000\u0000\u0000\u0096\u0097"+
		"\n\u0004\u0000\u0000\u0097\u0098\u0005\u0015\u0000\u0000\u0098\u0099\u0003"+
		"\u001a\r\u0000\u0099\u009a\u0005 \u0000\u0000\u009a\u009b\u0006\t\uffff"+
		"\uffff\u0000\u009b\u00a0\u0001\u0000\u0000\u0000\u009c\u009d\n\u0003\u0000"+
		"\u0000\u009d\u009e\u0005\u0015\u0000\u0000\u009e\u00a0\u0003\u001a\r\u0000"+
		"\u009f\u0096\u0001\u0000\u0000\u0000\u009f\u009c\u0001\u0000\u0000\u0000"+
		"\u00a0\u00a3\u0001\u0000\u0000\u0000\u00a1\u009f\u0001\u0000\u0000\u0000"+
		"\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u0013\u0001\u0000\u0000\u0000"+
		"\u00a3\u00a1\u0001\u0000\u0000\u0000\u00a4\u00a5\u00038\u001c\u0000\u00a5"+
		"\u00a6\u0003\u001e\u000f\u0000\u00a6\u00a7\u0005\u0011\u0000\u0000\u00a7"+
		"\u00a8\u0006\n\uffff\uffff\u0000\u00a8\u00ae\u0001\u0000\u0000\u0000\u00a9"+
		"\u00aa\u00038\u001c\u0000\u00aa\u00ab\u0005\u0011\u0000\u0000\u00ab\u00ac"+
		"\u0006\n\uffff\uffff\u0000\u00ac\u00ae\u0001\u0000\u0000\u0000\u00ad\u00a4"+
		"\u0001\u0000\u0000\u0000\u00ad\u00a9\u0001\u0000\u0000\u0000\u00ae\u0015"+
		"\u0001\u0000\u0000\u0000\u00af\u00b0\u0003\u001a\r\u0000\u00b0\u00b1\u0003"+
		"\u001c\u000e\u0000\u00b1\u00b2\u0005\u0014\u0000\u0000\u00b2\u00b3\u0006"+
		"\u000b\uffff\uffff\u0000\u00b3\u00ba\u0001\u0000\u0000\u0000\u00b4\u00b5"+
		"\u0003\u001a\r\u0000\u00b5\u00b6\u0003\u0018\f\u0000\u00b6\u00b7\u0005"+
		"\u0014\u0000\u0000\u00b7\u00b8\u0006\u000b\uffff\uffff\u0000\u00b8\u00ba"+
		"\u0001\u0000\u0000\u0000\u00b9\u00af\u0001\u0000\u0000\u0000\u00b9\u00b4"+
		"\u0001\u0000\u0000\u0000\u00ba\u0017\u0001\u0000\u0000\u0000\u00bb\u00bc"+
		"\u0006\f\uffff\uffff\u0000\u00bc\u0019\u0001\u0000\u0000\u0000\u00bd\u00be"+
		"\u0005\u000b\u0000\u0000\u00be\u00c4\u0006\r\uffff\uffff\u0000\u00bf\u00c0"+
		"\u0005\f\u0000\u0000\u00c0\u00c4\u0006\r\uffff\uffff\u0000\u00c1\u00c2"+
		"\u0005\r\u0000\u0000\u00c2\u00c4\u0006\r\uffff\uffff\u0000\u00c3\u00bd"+
		"\u0001\u0000\u0000\u0000\u00c3\u00bf\u0001\u0000\u0000\u0000\u00c3\u00c1"+
		"\u0001\u0000\u0000\u0000\u00c4\u001b\u0001\u0000\u0000\u0000\u00c5\u00c6"+
		"\u0006\u000e\uffff\uffff\u0000\u00c6\u00c7\u0005 \u0000\u0000\u00c7\u00ce"+
		"\u0006\u000e\uffff\uffff\u0000\u00c8\u00c9\u0005 \u0000\u0000\u00c9\u00ca"+
		"\u0005\u0012\u0000\u0000\u00ca\u00cb\u0005!\u0000\u0000\u00cb\u00cc\u0005"+
		"\u0013\u0000\u0000\u00cc\u00ce\u0006\u000e\uffff\uffff\u0000\u00cd\u00c5"+
		"\u0001\u0000\u0000\u0000\u00cd\u00c8\u0001\u0000\u0000\u0000\u00ce\u00dc"+
		"\u0001\u0000\u0000\u0000\u00cf\u00d0\n\u0004\u0000\u0000\u00d0\u00d1\u0005"+
		"\u0015\u0000\u0000\u00d1\u00d2\u0005 \u0000\u0000\u00d2\u00db\u0006\u000e"+
		"\uffff\uffff\u0000\u00d3\u00d4\n\u0003\u0000\u0000\u00d4\u00d5\u0005\u0015"+
		"\u0000\u0000\u00d5\u00d6\u0005 \u0000\u0000\u00d6\u00d7\u0005\u0012\u0000"+
		"\u0000\u00d7\u00d8\u0005!\u0000\u0000\u00d8\u00d9\u0005\u0013\u0000\u0000"+
		"\u00d9\u00db\u0006\u000e\uffff\uffff\u0000\u00da\u00cf\u0001\u0000\u0000"+
		"\u0000\u00da\u00d3\u0001\u0000\u0000\u0000\u00db\u00de\u0001\u0000\u0000"+
		"\u0000\u00dc\u00da\u0001\u0000\u0000\u0000\u00dc\u00dd\u0001\u0000\u0000"+
		"\u0000\u00dd\u001d\u0001\u0000\u0000\u0000\u00de\u00dc\u0001\u0000\u0000"+
		"\u0000\u00df\u00e0\u0006\u000f\uffff\uffff\u0000\u00e0\u00e1\u0003 \u0010"+
		"\u0000\u00e1\u00e2\u0006\u000f\uffff\uffff\u0000\u00e2\u00e9\u0001\u0000"+
		"\u0000\u0000\u00e3\u00e4\n\u0001\u0000\u0000\u00e4\u00e5\u0003 \u0010"+
		"\u0000\u00e5\u00e6\u0006\u000f\uffff\uffff\u0000\u00e6\u00e8\u0001\u0000"+
		"\u0000\u0000\u00e7\u00e3\u0001\u0000\u0000\u0000\u00e8\u00eb\u0001\u0000"+
		"\u0000\u0000\u00e9\u00e7\u0001\u0000\u0000\u0000\u00e9\u00ea\u0001\u0000"+
		"\u0000\u0000\u00ea\u001f\u0001\u0000\u0000\u0000\u00eb\u00e9\u0001\u0000"+
		"\u0000\u0000\u00ec\u00ed\u0003\u0016\u000b\u0000\u00ed\u00ee\u0006\u0010"+
		"\uffff\uffff\u0000\u00ee\u0121\u0001\u0000\u0000\u0000\u00ef\u00f0\u0003"+
		"\"\u0011\u0000\u00f0\u00f1\u0006\u0010\uffff\uffff\u0000\u00f1\u0121\u0001"+
		"\u0000\u0000\u0000\u00f2\u00f3\u0003\u0014\n\u0000\u00f3\u00f4\u0006\u0010"+
		"\uffff\uffff\u0000\u00f4\u0121\u0001\u0000\u0000\u0000\u00f5\u00f6\u0005"+
		"\u0007\u0000\u0000\u00f6\u00f7\u0005\u000e\u0000\u0000\u00f7\u00f8\u0003"+
		"\"\u0011\u0000\u00f8\u00f9\u0003\"\u0011\u0000\u00f9\u00fa\u0003&\u0013"+
		"\u0000\u00fa\u00fb\u0005\u000f\u0000\u0000\u00fb\u00fc\u0003 \u0010\u0000"+
		"\u00fc\u00fd\u0006\u0010\uffff\uffff\u0000\u00fd\u0121\u0001\u0000\u0000"+
		"\u0000\u00fe\u00ff\u0005\u0005\u0000\u0000\u00ff\u0100\u0005\u000e\u0000"+
		"\u0000\u0100\u0101\u0003&\u0013\u0000\u0101\u0102\u0005\u000f\u0000\u0000"+
		"\u0102\u0103\u0003 \u0010\u0000\u0103\u0104\u0006\u0010\uffff\uffff\u0000"+
		"\u0104\u0121\u0001\u0000\u0000\u0000\u0105\u0106\u0005\u0005\u0000\u0000"+
		"\u0106\u0107\u0005\u000e\u0000\u0000\u0107\u0108\u0003&\u0013\u0000\u0108"+
		"\u0109\u0005\u000f\u0000\u0000\u0109\u010a\u0003 \u0010\u0000\u010a\u010b"+
		"\u0005\u0006\u0000\u0000\u010b\u010c\u0003 \u0010\u0000\u010c\u010d\u0006"+
		"\u0010\uffff\uffff\u0000\u010d\u0121\u0001\u0000\u0000\u0000\u010e\u010f"+
		"\u0005\b\u0000\u0000\u010f\u0110\u0005\u000e\u0000\u0000\u0110\u0111\u0003"+
		"&\u0013\u0000\u0111\u0112\u0005\u000f\u0000\u0000\u0112\u0113\u0003 \u0010"+
		"\u0000\u0113\u0114\u0006\u0010\uffff\uffff\u0000\u0114\u0121\u0001\u0000"+
		"\u0000\u0000\u0115\u0116\u0005\t\u0000\u0000\u0116\u0117\u0005\u000e\u0000"+
		"\u0000\u0117\u0118\u0005 \u0000\u0000\u0118\u0119\u0005\u000f\u0000\u0000"+
		"\u0119\u011a\u0005\u0014\u0000\u0000\u011a\u0121\u0006\u0010\uffff\uffff"+
		"\u0000\u011b\u011c\u0005\n\u0000\u0000\u011c\u011d\u0003&\u0013\u0000"+
		"\u011d\u011e\u0005\u0014\u0000\u0000\u011e\u011f\u0006\u0010\uffff\uffff"+
		"\u0000\u011f\u0121\u0001\u0000\u0000\u0000\u0120\u00ec\u0001\u0000\u0000"+
		"\u0000\u0120\u00ef\u0001\u0000\u0000\u0000\u0120\u00f2\u0001\u0000\u0000"+
		"\u0000\u0120\u00f5\u0001\u0000\u0000\u0000\u0120\u00fe\u0001\u0000\u0000"+
		"\u0000\u0120\u0105\u0001\u0000\u0000\u0000\u0120\u010e\u0001\u0000\u0000"+
		"\u0000\u0120\u0115\u0001\u0000\u0000\u0000\u0120\u011b\u0001\u0000\u0000"+
		"\u0000\u0121!\u0001\u0000\u0000\u0000\u0122\u0123\u0005\u0014\u0000\u0000"+
		"\u0123\u0129\u0006\u0011\uffff\uffff\u0000\u0124\u0125\u0003&\u0013\u0000"+
		"\u0125\u0126\u0005\u0014\u0000\u0000\u0126\u0127\u0006\u0011\uffff\uffff"+
		"\u0000\u0127\u0129\u0001\u0000\u0000\u0000\u0128\u0122\u0001\u0000\u0000"+
		"\u0000\u0128\u0124\u0001\u0000\u0000\u0000\u0129#\u0001\u0000\u0000\u0000"+
		"\u012a\u012b\u0005 \u0000\u0000\u012b\u0133\u0006\u0012\uffff\uffff\u0000"+
		"\u012c\u012d\u0005 \u0000\u0000\u012d\u012e\u0005\u0012\u0000\u0000\u012e"+
		"\u012f\u0003&\u0013\u0000\u012f\u0130\u0005\u0013\u0000\u0000\u0130\u0131"+
		"\u0006\u0012\uffff\uffff\u0000\u0131\u0133\u0001\u0000\u0000\u0000\u0132"+
		"\u012a\u0001\u0000\u0000\u0000\u0132\u012c\u0001\u0000\u0000\u0000\u0133"+
		"%\u0001\u0000\u0000\u0000\u0134\u0135\u0003(\u0014\u0000\u0135\u0136\u0006"+
		"\u0013\uffff\uffff\u0000\u0136\u013d\u0001\u0000\u0000\u0000\u0137\u0138"+
		"\u0003$\u0012\u0000\u0138\u0139\u0005\u001e\u0000\u0000\u0139\u013a\u0003"+
		"(\u0014\u0000\u013a\u013b\u0006\u0013\uffff\uffff\u0000\u013b\u013d\u0001"+
		"\u0000\u0000\u0000\u013c\u0134\u0001\u0000\u0000\u0000\u013c\u0137\u0001"+
		"\u0000\u0000\u0000\u013d\'\u0001\u0000\u0000\u0000\u013e\u013f\u0003*"+
		"\u0015\u0000\u013f\u0140\u0006\u0014\uffff\uffff\u0000\u0140\u0147\u0001"+
		"\u0000\u0000\u0000\u0141\u0142\u0003*\u0015\u0000\u0142\u0143\u0005\u001d"+
		"\u0000\u0000\u0143\u0144\u0003*\u0015\u0000\u0144\u0145\u0006\u0014\uffff"+
		"\uffff\u0000\u0145\u0147\u0001\u0000\u0000\u0000\u0146\u013e\u0001\u0000"+
		"\u0000\u0000\u0146\u0141\u0001\u0000\u0000\u0000\u0147)\u0001\u0000\u0000"+
		"\u0000\u0148\u0149\u0003,\u0016\u0000\u0149\u014a\u0006\u0015\uffff\uffff"+
		"\u0000\u014a\u0151\u0001\u0000\u0000\u0000\u014b\u014c\u0003,\u0016\u0000"+
		"\u014c\u014d\u0005\u001c\u0000\u0000\u014d\u014e\u0003,\u0016\u0000\u014e"+
		"\u014f\u0006\u0015\uffff\uffff\u0000\u014f\u0151\u0001\u0000\u0000\u0000"+
		"\u0150\u0148\u0001\u0000\u0000\u0000\u0150\u014b\u0001\u0000\u0000\u0000"+
		"\u0151+\u0001\u0000\u0000\u0000\u0152\u0153\u0006\u0016\uffff\uffff\u0000"+
		"\u0153\u0154\u0003.\u0017\u0000\u0154\u0155\u0006\u0016\uffff\uffff\u0000"+
		"\u0155\u015d\u0001\u0000\u0000\u0000\u0156\u0157\n\u0001\u0000\u0000\u0157"+
		"\u0158\u0005\u0016\u0000\u0000\u0158\u0159\u0003.\u0017\u0000\u0159\u015a"+
		"\u0006\u0016\uffff\uffff\u0000\u015a\u015c\u0001\u0000\u0000\u0000\u015b"+
		"\u0156\u0001\u0000\u0000\u0000\u015c\u015f\u0001\u0000\u0000\u0000\u015d"+
		"\u015b\u0001\u0000\u0000\u0000\u015d\u015e\u0001\u0000\u0000\u0000\u015e"+
		"-\u0001\u0000\u0000\u0000\u015f\u015d\u0001\u0000\u0000\u0000\u0160\u0161"+
		"\u0006\u0017\uffff\uffff\u0000\u0161\u0162\u00030\u0018\u0000\u0162\u0163"+
		"\u0006\u0017\uffff\uffff\u0000\u0163\u016b\u0001\u0000\u0000\u0000\u0164"+
		"\u0165\n\u0001\u0000\u0000\u0165\u0166\u0005\u0018\u0000\u0000\u0166\u0167"+
		"\u00030\u0018\u0000\u0167\u0168\u0006\u0017\uffff\uffff\u0000\u0168\u016a"+
		"\u0001\u0000\u0000\u0000\u0169\u0164\u0001\u0000\u0000\u0000\u016a\u016d"+
		"\u0001\u0000\u0000\u0000\u016b\u0169\u0001\u0000\u0000\u0000\u016b\u016c"+
		"\u0001\u0000\u0000\u0000\u016c/\u0001\u0000\u0000\u0000\u016d\u016b\u0001"+
		"\u0000\u0000\u0000\u016e\u016f\u0005\u0016\u0000\u0000\u016f\u0170\u0003"+
		"0\u0018\u0000\u0170\u0171\u0006\u0018\uffff\uffff\u0000\u0171\u017a\u0001"+
		"\u0000\u0000\u0000\u0172\u0173\u0005\u001b\u0000\u0000\u0173\u0174\u0003"+
		"0\u0018\u0000\u0174\u0175\u0006\u0018\uffff\uffff\u0000\u0175\u017a\u0001"+
		"\u0000\u0000\u0000\u0176\u0177\u00032\u0019\u0000\u0177\u0178\u0006\u0018"+
		"\uffff\uffff\u0000\u0178\u017a\u0001\u0000\u0000\u0000\u0179\u016e\u0001"+
		"\u0000\u0000\u0000\u0179\u0172\u0001\u0000\u0000\u0000\u0179\u0176\u0001"+
		"\u0000\u0000\u0000\u017a1\u0001\u0000\u0000\u0000\u017b\u017c\u0003$\u0012"+
		"\u0000\u017c\u017d\u0006\u0019\uffff\uffff\u0000\u017d\u0196\u0001\u0000"+
		"\u0000\u0000\u017e\u017f\u0005 \u0000\u0000\u017f\u0180\u0005\u000e\u0000"+
		"\u0000\u0180\u0181\u00034\u001a\u0000\u0181\u0182\u0005\u000f\u0000\u0000"+
		"\u0182\u0183\u0006\u0019\uffff\uffff\u0000\u0183\u0196\u0001\u0000\u0000"+
		"\u0000\u0184\u0185\u0005\u000e\u0000\u0000\u0185\u0186\u0003&\u0013\u0000"+
		"\u0186\u0187\u0005\u000f\u0000\u0000\u0187\u0188\u0006\u0019\uffff\uffff"+
		"\u0000\u0188\u0196\u0001\u0000\u0000\u0000\u0189\u018a\u0005!\u0000\u0000"+
		"\u018a\u0196\u0006\u0019\uffff\uffff\u0000\u018b\u018c\u0005\"\u0000\u0000"+
		"\u018c\u0196\u0006\u0019\uffff\uffff\u0000\u018d\u018e\u0003$\u0012\u0000"+
		"\u018e\u018f\u0005\u0019\u0000\u0000\u018f\u0190\u0006\u0019\uffff\uffff"+
		"\u0000\u0190\u0196\u0001\u0000\u0000\u0000\u0191\u0192\u0003$\u0012\u0000"+
		"\u0192\u0193\u0005\u001a\u0000\u0000\u0193\u0194\u0006\u0019\uffff\uffff"+
		"\u0000\u0194\u0196\u0001\u0000\u0000\u0000\u0195\u017b\u0001\u0000\u0000"+
		"\u0000\u0195\u017e\u0001\u0000\u0000\u0000\u0195\u0184\u0001\u0000\u0000"+
		"\u0000\u0195\u0189\u0001\u0000\u0000\u0000\u0195\u018b\u0001\u0000\u0000"+
		"\u0000\u0195\u018d\u0001\u0000\u0000\u0000\u0195\u0191\u0001\u0000\u0000"+
		"\u0000\u01963\u0001\u0000\u0000\u0000\u0197\u0198\u00036\u001b\u0000\u0198"+
		"\u0199\u0006\u001a\uffff\uffff\u0000\u0199\u019c\u0001\u0000\u0000\u0000"+
		"\u019a\u019c\u0001\u0000\u0000\u0000\u019b\u0197\u0001\u0000\u0000\u0000"+
		"\u019b\u019a\u0001\u0000\u0000\u0000\u019c5\u0001\u0000\u0000\u0000\u019d"+
		"\u019e\u0006\u001b\uffff\uffff\u0000\u019e\u019f\u0003(\u0014\u0000\u019f"+
		"\u01a0\u0006\u001b\uffff\uffff\u0000\u01a0\u01a8\u0001\u0000\u0000\u0000"+
		"\u01a1\u01a2\n\u0002\u0000\u0000\u01a2\u01a3\u0005\u0015\u0000\u0000\u01a3"+
		"\u01a4\u0003(\u0014\u0000\u01a4\u01a5\u0006\u001b\uffff\uffff\u0000\u01a5"+
		"\u01a7\u0001\u0000\u0000\u0000\u01a6\u01a1\u0001\u0000\u0000\u0000\u01a7"+
		"\u01aa\u0001\u0000\u0000\u0000\u01a8\u01a6\u0001\u0000\u0000\u0000\u01a8"+
		"\u01a9\u0001\u0000\u0000\u0000\u01a97\u0001\u0000\u0000\u0000\u01aa\u01a8"+
		"\u0001\u0000\u0000\u0000\u01ab\u01ac\u0005\u0010\u0000\u0000\u01ac\u01ad"+
		"\u0006\u001c\uffff\uffff\u0000\u01ad9\u0001\u0000\u0000\u0000\u001eGS"+
		"diz\u007f\u0085\u008a\u0094\u009f\u00a1\u00ad\u00b9\u00c3\u00cd\u00da"+
		"\u00dc\u00e9\u0120\u0128\u0132\u013c\u0146\u0150\u015d\u016b\u0179\u0195"+
		"\u019b\u01a8";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}