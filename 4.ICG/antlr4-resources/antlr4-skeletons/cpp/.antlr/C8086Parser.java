// Generated from /home/arzon/Work/Academics/3-1/Sessional/CSE210 - Compiler/4.ICG/antlr4-resources/antlr4-skeletons/cpp/C8086Parser.g4 by ANTLR 4.13.1

    #include <iostream>
    #include <fstream>
    #include <string>
    #include <cstdlib>
    #include "C8086Lexer.h"
	#include "SymbolTable/2105128_SymbolTable.cpp"

    extern std::ofstream parserLogFile;

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
		ASSIGNOP=30, ID=31, CONST_INT=32, CONST_FLOAT=33;
	public static final int
		RULE_start = 0, RULE_program = 1, RULE_unit = 2, RULE_func_declaration = 3, 
		RULE_func_definition = 4, RULE_func_name = 5, RULE_return_type = 6, RULE_parameter_list = 7, 
		RULE_compound_statement = 8, RULE_var_declaration = 9, RULE_type_specifier = 10, 
		RULE_type_specifier_stack = 11, RULE_declaration_list = 12, RULE_statements = 13, 
		RULE_statement = 14, RULE_expression_statement = 15, RULE_variable = 16, 
		RULE_expression = 17, RULE_logic_expression = 18, RULE_rel_expression = 19, 
		RULE_simple_expression = 20, RULE_term = 21, RULE_unary_expression = 22, 
		RULE_factor = 23, RULE_argument_list = 24, RULE_arguments = 25;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "program", "unit", "func_declaration", "func_definition", "func_name", 
			"return_type", "parameter_list", "compound_statement", "var_declaration", 
			"type_specifier", "type_specifier_stack", "declaration_list", "statements", 
			"statement", "expression_statement", "variable", "expression", "logic_expression", 
			"rel_expression", "simple_expression", "term", "unary_expression", "factor", 
			"argument_list", "arguments"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, "'if'", "'else'", "'for'", "'while'", "'println'", 
			"'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
			"'['", "']'", "';'", "','", null, null, null, "'++'", "'--'", "'!'", 
			null, null, "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
			"FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
			"RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
			"ADDOP", "SUBOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", 
			"ASSIGNOP", "ID", "CONST_INT", "CONST_FLOAT"
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

	public C8086Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StartContext extends ParserRuleContext {
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

					initiate();
				
			setState(53);
			program(0);

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
			setState(57);
			unit();
			}
			_ctx.stop = _input.LT(-1);
			setState(63);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ProgramContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_program);
					setState(59);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(60);
					unit();
					}
					} 
				}
				setState(65);
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
			setState(69);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(66);
				var_declaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				func_declaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(68);
				func_definition();
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
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public Func_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_declaration; }
	}

	public final Func_declarationContext func_declaration() throws RecognitionException {
		Func_declarationContext _localctx = new Func_declarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_func_declaration);
		try {
			setState(84);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(71);
				type_specifier();
				setState(72);
				match(ID);
				setState(73);
				match(LPAREN);
				setState(74);
				parameter_list(0);
				setState(75);
				match(RPAREN);
				setState(76);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(78);
				type_specifier();
				setState(79);
				match(ID);
				setState(80);
				match(LPAREN);
				setState(81);
				match(RPAREN);
				setState(82);
				match(SEMICOLON);
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
	public static class Func_definitionContext extends ParserRuleContext {
		public Return_typeContext return_type() {
			return getRuleContext(Return_typeContext.class,0);
		}
		public Func_nameContext func_name() {
			return getRuleContext(Func_nameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
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
		enterRule(_localctx, 8, RULE_func_definition);
		try {
			setState(101);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				return_type();
				setState(87);
				func_name();
				setState(88);
				match(LPAREN);
				setState(89);
				parameter_list(0);
				setState(90);
				match(RPAREN);
				setState(91);
				compound_statement();

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
							write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
							write("\tPOP BP");
							if(symbolTable->getParamNum() == 1){
								write("\tRET");
							}
							else{
								write("\tRET "+to_string((symbolTable->getParamNum()-1)*2));
							}
						}
						symbolTable->ExitScope();
					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(94);
				return_type();
				setState(95);
				func_name();
				setState(96);
				match(LPAREN);
				setState(97);
				match(RPAREN);
				setState(98);
				compound_statement();

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
							if(symbolTable->getParamNum() == 1){
								write("\tRET");
							}
							else{
								write("\tRET "+to_string((symbolTable->getParamNum()-1)*2));
							}
						}
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
	public static class Func_nameContext extends ParserRuleContext {
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Func_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_name; }
	}

	public final Func_nameContext func_name() throws RecognitionException {
		Func_nameContext _localctx = new Func_nameContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_func_name);
		try {
			setState(106);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(103);
				((Func_nameContext)_localctx).ID = match(ID);

						curr_func = new Function();
						curr_func->setName(((Func_nameContext)_localctx).ID->getText());
						Function* temp = new Function();
						temp->setName(((Func_nameContext)_localctx).ID->getText());
						symbolTable->insert(((Func_nameContext)_localctx).ID->getText(),"func","global",temp);
						if (symbolTable->getCurrentScopeID() == "1" && in_code_segment == 0) {
							write(".CODE");
							in_code_segment = 1;
							
						}
						write(((Func_nameContext)_localctx).ID->getText() + " PROC");
						symbolTable->EnterScope();
						if(((Func_nameContext)_localctx).ID->getText() == "main") {
							write("\tMOV AX, @DATA\n\tMOV DS, AX");
						}
						write("\tPUSH BP\n\tMOV BP, SP");
						if(((Func_nameContext)_localctx).ID->getText() == "main"){
							in_main = 1;
						}
					
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
		enterRule(_localctx, 12, RULE_return_type);
		try {
			setState(112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case FLOAT:
			case VOID:
				enterOuterAlt(_localctx, 1);
				{
				setState(108);
				((Return_typeContext)_localctx).ts = type_specifier();

						curr_func->setReturnType(((Return_typeContext)_localctx).ts.text);
					
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
	public static class Parameter_listContext extends ParserRuleContext {
		public Type_specifierContext ts;
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
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
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_parameter_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(115);
				((Parameter_listContext)_localctx).ts = type_specifier();
				setState(116);
				((Parameter_listContext)_localctx).ID = match(ID);

						symbolTable->insert(((Parameter_listContext)_localctx).ID->getText(),datatype,"parameter",NULL);
					
				}
				break;
			case 2:
				{
				setState(119);
				type_specifier();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(133);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(131);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
					case 1:
						{
						_localctx = new Parameter_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(122);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(123);
						match(COMMA);
						setState(124);
						type_specifier();
						setState(125);
						((Parameter_listContext)_localctx).ID = match(ID);

						          		symbolTable->insert(((Parameter_listContext)_localctx).ID->getText(),datatype,"parameter",NULL);
						          	
						}
						break;
					case 2:
						{
						_localctx = new Parameter_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(128);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(129);
						match(COMMA);
						setState(130);
						type_specifier();
						}
						break;
					}
					} 
				}
				setState(135);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
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
		public TerminalNode LCURL() { return getToken(C8086Parser.LCURL, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode RCURL() { return getToken(C8086Parser.RCURL, 0); }
		public Compound_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_statement; }
	}

	public final Compound_statementContext compound_statement() throws RecognitionException {
		Compound_statementContext _localctx = new Compound_statementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_compound_statement);
		try {
			setState(142);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				match(LCURL);
				setState(137);
				statements(0);
				setState(138);
				match(RCURL);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(140);
				match(LCURL);
				setState(141);
				match(RCURL);
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
		public Type_specifier_stackContext ts;
		public Declaration_listContext dl;
		public Token sm;
		public Type_specifier_stackContext type_specifier_stack() {
			return getRuleContext(Type_specifier_stackContext.class,0);
		}
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(C8086Parser.SEMICOLON, 0); }
		public Var_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declaration; }
	}

	public final Var_declarationContext var_declaration() throws RecognitionException {
		Var_declarationContext _localctx = new Var_declarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_var_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			((Var_declarationContext)_localctx).ts = type_specifier_stack();
			setState(145);
			((Var_declarationContext)_localctx).dl = declaration_list(0);
			setState(146);
			((Var_declarationContext)_localctx).sm = match(SEMICOLON);
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
		public string text;
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
		enterRule(_localctx, 20, RULE_type_specifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 14336L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	@SuppressWarnings("CheckReturnValue")
	public static class Type_specifier_stackContext extends ParserRuleContext {
		public string text;
		public Token INT;
		public Token FLOAT;
		public Token VOID;
		public TerminalNode INT() { return getToken(C8086Parser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(C8086Parser.FLOAT, 0); }
		public TerminalNode VOID() { return getToken(C8086Parser.VOID, 0); }
		public Type_specifier_stackContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_specifier_stack; }
	}

	public final Type_specifier_stackContext type_specifier_stack() throws RecognitionException {
		Type_specifier_stackContext _localctx = new Type_specifier_stackContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_type_specifier_stack);
		try {
			setState(156);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(150);
				((Type_specifier_stackContext)_localctx).INT = match(INT);

						datatype = ((Type_specifier_stackContext)_localctx).INT->getText();
						// write("\tPUSH BP\n\tMOV BP, SP");
					
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(152);
				((Type_specifier_stackContext)_localctx).FLOAT = match(FLOAT);

						datatype = ((Type_specifier_stackContext)_localctx).FLOAT->getText();
						write("\tPUSH BP\n\tMOV BP, SP");
					
				}
				break;
			case VOID:
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				((Type_specifier_stackContext)_localctx).VOID = match(VOID);

						datatype = ((Type_specifier_stackContext)_localctx).VOID->getText();
						write("\tPUSH BP\n\tMOV BP, SP");
					
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
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(C8086Parser.LTHIRD, 0); }
		public TerminalNode CONST_INT() { return getToken(C8086Parser.CONST_INT, 0); }
		public TerminalNode RTHIRD() { return getToken(C8086Parser.RTHIRD, 0); }
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
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
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_declaration_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(159);
				((Declaration_listContext)_localctx).ID = match(ID);

						if(symbolTable->getCurrentScopeID() == "1"){
							symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),datatype,"global",NULL);
							write("\t"+((Declaration_listContext)_localctx).ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
						}
						else {
							symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),datatype,"local",NULL);
							curr_func->incStackElements();
							write("\tSUB SP, 2");
						}
					
				}
				break;
			case 2:
				{
				setState(161);
				((Declaration_listContext)_localctx).ID = match(ID);
				setState(162);
				match(LTHIRD);
				setState(163);
				match(CONST_INT);
				setState(164);
				match(RTHIRD);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(179);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(177);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new Declaration_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(167);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(168);
						match(COMMA);
						setState(169);
						((Declaration_listContext)_localctx).ID = match(ID);

						          		if(symbolTable->getCurrentScopeID() == "1"){
						          			symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),datatype,"global",NULL);
						          			write("\t"+((Declaration_listContext)_localctx).ID->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
						          		}
						          		else {
						          			symbolTable->insert(((Declaration_listContext)_localctx).ID->getText(),datatype,"local",NULL);
						          			curr_func->incStackElements();
						          			write("\tSUB SP, 2\t; Line "+to_string(((Declaration_listContext)_localctx).ID->getLine()));
						          		}
						          	
						}
						break;
					case 2:
						{
						_localctx = new Declaration_listContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(171);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(172);
						match(COMMA);
						setState(173);
						((Declaration_listContext)_localctx).ID = match(ID);
						setState(174);
						match(LTHIRD);
						setState(175);
						match(CONST_INT);
						setState(176);
						match(RTHIRD);
						}
						break;
					}
					} 
				}
				setState(181);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_statements, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(183);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(189);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statements);
					setState(185);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(186);
					statement();
					}
					} 
				}
				setState(191);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
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
		public Expression_statementContext es;
		public Token ID;
		public Token SEMICOLON;
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
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
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
		enterRule(_localctx, 28, RULE_statement);
		try {
			setState(254);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(192);
				var_declaration();

					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(195);
				expression_statement();

					
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(198);
				compound_statement();

					
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(201);
				match(FOR);
				setState(202);
				match(LPAREN);
				setState(203);
				expression_statement();

						int begin_label = label_count;
					
				setState(205);
				((StatementContext)_localctx).es = expression_statement();

						write("\tCMP AX, 0");
						write("\tJNE L"+to_string(label_count));
						int true_label = label_count++;
						int inc_label = label_count++;
						int end_label = label_count++;
						write("\tJMP L"+to_string(end_label));
						write("L"+to_string(inc_label)+":");
					
				setState(207);
				expression();

						write("\tJMP L"+to_string(begin_label));
					
				setState(209);
				match(RPAREN);

						write("L"+to_string(true_label)+":");
					
				setState(211);
				statement();

						write("\tJMP L"+to_string(inc_label));
						write("L"+to_string(end_label)+":");
					
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(214);
				match(IF);
				setState(215);
				match(LPAREN);
				setState(216);
				expression();
				setState(217);
				match(RPAREN);

						write("\tCMP AX, 0");
						write("\tJNE L"+to_string(label_count));
						write("\tJMP L"+to_string(label_count+1));
						write("L"+to_string(label_count)+":");
						label_count++;
					
				setState(219);
				statement();

						write("L"+to_string(label_count)+":");
						label_count++;
					
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(222);
				match(IF);
				setState(223);
				match(LPAREN);
				setState(224);
				expression();
				setState(225);
				match(RPAREN);

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
					
				setState(227);
				statement();
				setState(228);
				match(ELSE);

						write("\tJMP L"+to_string(end_label));
						write("L"+to_string(else_label)+":");
					
				setState(230);
				statement();

						write("L"+to_string(end_label)+":");
					
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(233);
				match(WHILE);
				setState(234);
				match(LPAREN);

						int begin_label = label_count;
					
				setState(236);
				expression();
				setState(237);
				match(RPAREN);

						write("\tCMP AX, 0");
						write("\tJNE L"+to_string(label_count));
						int true_label = label_count++;
						int end_label = label_count++;
						write("\tJMP L"+to_string(end_label));
						write("L"+to_string(true_label)+":");
					
				setState(239);
				statement();

						write("\tJMP L"+to_string(begin_label));
						write("L"+to_string(end_label)+":");
					
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(242);
				match(PRINTLN);
				setState(243);
				match(LPAREN);
				setState(244);
				((StatementContext)_localctx).ID = match(ID);
				setState(245);
				match(RPAREN);
				setState(246);
				((StatementContext)_localctx).SEMICOLON = match(SEMICOLON);

						if(symbolTable->getVariableScope(((StatementContext)_localctx).ID->getText()) == "global"){
							write("\tMOV AX, "+((StatementContext)_localctx).ID->getText());
						}
						else{
							int stack_index = symbolTable->getStackIndex(((StatementContext)_localctx).ID->getText());
							if(stack_index < 0) {
								int temp = stack_index + 2 + symbolTable->getParamNum();
								write("\tMOV AX, [BP+"+to_string(temp*2)+"]");
							}
							else{
								write("\tMOV AX, [BP"+to_string(-stack_index*2)+"]");
							}
						}
						write("\tCALL print_output\n\tCALL new_line     ; Line "+to_string(((StatementContext)_localctx).SEMICOLON->getLine()));
					
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				write("");
				setState(249);
				match(RETURN);
				setState(250);
				expression();
				setState(251);
				((StatementContext)_localctx).SEMICOLON = match(SEMICOLON);

						write("\tJMP L"+to_string(label_count)+"\t; Line "+to_string(((StatementContext)_localctx).SEMICOLON->getLine()));
					
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
		enterRule(_localctx, 30, RULE_expression_statement);
		try {
			setState(260);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SEMICOLON:
				enterOuterAlt(_localctx, 1);
				{
				setState(256);
				match(SEMICOLON);
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
				setState(257);
				expression();
				setState(258);
				match(SEMICOLON);
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
		public string name;
		public Token ID;
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(C8086Parser.LTHIRD, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RTHIRD() { return getToken(C8086Parser.RTHIRD, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_variable);
		try {
			setState(269);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(262);
				((VariableContext)_localctx).ID = match(ID);

						if(symbolTable->getVariableScope(((VariableContext)_localctx).ID->getText()) == "global"){
							((VariableContext)_localctx).name =  ((VariableContext)_localctx).ID->getText();
						}
						else{
							int stack_index = symbolTable->getStackIndex(((VariableContext)_localctx).ID->getText());
							if(stack_index < 0){
								// cout<<symbolTable->getParamNum()<<endl;
								int temp = stack_index + 2 + symbolTable->getParamNum();
								((VariableContext)_localctx).name =  "[BP+"+to_string(temp*2)+"]";
							}
							else{
								((VariableContext)_localctx).name =  "[BP"+to_string(-symbolTable->getStackIndex(((VariableContext)_localctx).ID->getText())*2)+"]";
							}
						}
					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(264);
				match(ID);
				setState(265);
				match(LTHIRD);
				setState(266);
				expression();
				setState(267);
				match(RTHIRD);
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
		public VariableContext v;
		public Logic_expressionContext le;
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
		enterRule(_localctx, 34, RULE_expression);
		try {
			setState(277);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(271);
				logic_expression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(272);
				((ExpressionContext)_localctx).v = variable();
				setState(273);
				match(ASSIGNOP);
				setState(274);
				((ExpressionContext)_localctx).le = logic_expression();

						write("\tMOV "+((ExpressionContext)_localctx).v.name+", AX");
					
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
		public Token LOGICOP;
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
		enterRule(_localctx, 36, RULE_logic_expression);
		try {
			setState(286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(279);
				rel_expression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(280);
				rel_expression();
				setState(281);
				((Logic_expressionContext)_localctx).LOGICOP = match(LOGICOP);

						write("\tCMP AX, 0");
						if(((Logic_expressionContext)_localctx).LOGICOP->getText() == "||"){
							write("\tJNE L"+to_string(label_count));
						}
						else{
							write("\tJE L"+to_string(label_count+1));
						}
					
				setState(283);
				rel_expression();

						write("\tCMP AX, 0");
						if(((Logic_expressionContext)_localctx).LOGICOP->getText() == "||"){
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
		public Token RELOP;
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
		enterRule(_localctx, 38, RULE_rel_expression);
		try {
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(288);
				simple_expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(289);
				simple_expression(0);
				setState(290);
				((Rel_expressionContext)_localctx).RELOP = match(RELOP);

						write("\tMOV DX, AX");
					
				setState(292);
				simple_expression(0);

						write("\tCMP DX, AX");
						string relop = ((Rel_expressionContext)_localctx).RELOP->getText();
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
		public Token ADDOP;
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public Simple_expressionContext simple_expression() {
			return getRuleContext(Simple_expressionContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(C8086Parser.ADDOP, 0); }
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
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_simple_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(298);
			term(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(308);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new Simple_expressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_simple_expression);
					setState(300);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");

					          		write("\tPUSH AX");
					          	
					setState(302);
					((Simple_expressionContext)_localctx).ADDOP = match(ADDOP);
					setState(303);
					term(0);

					          		if(((Simple_expressionContext)_localctx).ADDOP->getText() == "+"){
					          			write("\tPOP BX");
					          			write("\tADD AX,BX");
					          		}
					          		else{
					          			write("\tMOV BX, AX");
					          			write("\tPOP AX");
					          			write("\tSUB AX, BX");
					          		}
					          	
					}
					} 
				}
				setState(310);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
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
		public TermContext t;
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
		int _startState = 42;
		enterRecursionRule(_localctx, 42, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(312);
			unary_expression();
			}
			_ctx.stop = _input.LT(-1);
			setState(322);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TermContext(_parentctx, _parentState);
					_localctx.t = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_term);
					setState(314);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(315);
					((TermContext)_localctx).MULOP = match(MULOP);

					          		if(((TermContext)_localctx).MULOP->getText() == "%"){
					          			division = 1;	
					          		}
					          		else{
					          			write("\tPUSH AX");
					          		}
					          	
					setState(317);
					unary_expression();

					          		if(((TermContext)_localctx).MULOP->getText() == "%"){
					          			write("\tCWD\n\tDIV CX\n\tMOV AX,DX");
					          			division = 0;
					          		}
					          		else{
					          			write("\tPOP CX");
					          			write("\tCWD\n\tMUL CX");
					          		}
					          	
					}
					} 
				}
				setState(324);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
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
		enterRule(_localctx, 44, RULE_unary_expression);
		try {
			setState(332);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADDOP:
				enterOuterAlt(_localctx, 1);
				{
				setState(325);
				match(ADDOP);
				setState(326);
				unary_expression();

						write("\tNEG AX");
					
				}
				break;
			case NOT:
				enterOuterAlt(_localctx, 2);
				{
				setState(329);
				match(NOT);
				setState(330);
				unary_expression();
				}
				break;
			case LPAREN:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(331);
				factor();
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
		public VariableContext v;
		public Token ID;
		public Token CONST_INT;
		public Token CONST_FLOAT;
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ID() { return getToken(C8086Parser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(C8086Parser.LPAREN, 0); }
		public Argument_listContext argument_list() {
			return getRuleContext(Argument_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(C8086Parser.RPAREN, 0); }
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
		enterRule(_localctx, 46, RULE_factor);
		try {
			setState(359);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(334);
				((FactorContext)_localctx).v = variable();

						if(division == 1){
							write("\tMOV CX, "+((FactorContext)_localctx).v.name);
						}
						else{
							write("L"+to_string(label_count)+":");
							label_count++;
							write("\tMOV AX, "+((FactorContext)_localctx).v.name);
						}
					
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(337);
				((FactorContext)_localctx).ID = match(ID);
				setState(338);
				match(LPAREN);
				setState(339);
				argument_list();
				setState(340);
				match(RPAREN);

						write("\tCALL "+((FactorContext)_localctx).ID->getText());
					
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(343);
				match(LPAREN);
				setState(344);
				expression();
				setState(345);
				match(RPAREN);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(347);
				((FactorContext)_localctx).CONST_INT = match(CONST_INT);

						if(division == 1){
							write("\tMOV CX, " + ((FactorContext)_localctx).CONST_INT->getText());	
						}
						else{
							write("\tMOV AX, " + ((FactorContext)_localctx).CONST_INT->getText());
						}
					
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(349);
				((FactorContext)_localctx).CONST_FLOAT = match(CONST_FLOAT);

						if(division == 1){
							write("\tMOV CX, " + ((FactorContext)_localctx).CONST_FLOAT->getText());	
						}
						else{
							write("\tMOV AX, " + ((FactorContext)_localctx).CONST_FLOAT->getText());
						}
					
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(351);
				((FactorContext)_localctx).v = variable();
				setState(352);
				match(INCOP);

						write("L"+to_string(label_count)+":");
						label_count++;
						write("\tMOV AX, "+((FactorContext)_localctx).v.name);
						write("\tPUSH AX");
						write("\tINC AX");
						write("\tMOV "+((FactorContext)_localctx).v.name+", AX");
						write("\tPOP AX");
					
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(355);
				((FactorContext)_localctx).v = variable();
				setState(356);
				match(DECOP);

						write("L"+to_string(label_count)+":");
						label_count++;
						write("\tMOV AX, "+((FactorContext)_localctx).v.name);
						write("\tPUSH AX");
						write("\tDEC AX");
						write("\tMOV "+((FactorContext)_localctx).v.name+", AX");
						write("\tPOP AX");
					
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
		enterRule(_localctx, 48, RULE_argument_list);
		try {
			setState(363);
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
				setState(361);
				arguments(0);
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
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(C8086Parser.COMMA, 0); }
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
		int _startState = 50;
		enterRecursionRule(_localctx, 50, RULE_arguments, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(366);
			logic_expression();

					write("\tPUSH AX");
				
			}
			_ctx.stop = _input.LT(-1);
			setState(376);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ArgumentsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_arguments);
					setState(369);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(370);
					match(COMMA);
					setState(371);
					logic_expression();

					          		write("\tPUSH AX");
					          	
					}
					} 
				}
				setState(378);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 1:
			return program_sempred((ProgramContext)_localctx, predIndex);
		case 7:
			return parameter_list_sempred((Parameter_listContext)_localctx, predIndex);
		case 12:
			return declaration_list_sempred((Declaration_listContext)_localctx, predIndex);
		case 13:
			return statements_sempred((StatementsContext)_localctx, predIndex);
		case 20:
			return simple_expression_sempred((Simple_expressionContext)_localctx, predIndex);
		case 21:
			return term_sempred((TermContext)_localctx, predIndex);
		case 25:
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
		"\u0004\u0001!\u017c\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001"+
		">\b\u0001\n\u0001\f\u0001A\t\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0003\u0002F\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003U\b\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0003\u0004f\b\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0003\u0005k\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0003\u0006q\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007y\b\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0005\u0007\u0084\b\u0007\n\u0007\f\u0007\u0087"+
		"\t\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\b\u008f"+
		"\b\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u009d"+
		"\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003"+
		"\f\u00a6\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0005\f\u00b2\b\f\n\f\f\f\u00b5\t\f\u0001\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0005\r\u00bc\b\r\n\r\f\r\u00bf\t\r\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0003\u000e\u00ff\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0003\u000f\u0105\b\u000f\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u010e\b\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0003\u0011\u0116\b\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u011f\b\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0003\u0013\u0128\b\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0005\u0014"+
		"\u0133\b\u0014\n\u0014\f\u0014\u0136\t\u0014\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0005\u0015\u0141\b\u0015\n\u0015\f\u0015\u0144\t\u0015\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0003\u0016\u014d\b\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u0168\b\u0017\u0001\u0018"+
		"\u0001\u0018\u0003\u0018\u016c\b\u0018\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0005\u0019\u0177\b\u0019\n\u0019\f\u0019\u017a\t\u0019\u0001\u0019\u0000"+
		"\u0007\u0002\u000e\u0018\u001a(*2\u001a\u0000\u0002\u0004\u0006\b\n\f"+
		"\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.02\u0000"+
		"\u0001\u0001\u0000\u000b\r\u018b\u00004\u0001\u0000\u0000\u0000\u0002"+
		"8\u0001\u0000\u0000\u0000\u0004E\u0001\u0000\u0000\u0000\u0006T\u0001"+
		"\u0000\u0000\u0000\be\u0001\u0000\u0000\u0000\nj\u0001\u0000\u0000\u0000"+
		"\fp\u0001\u0000\u0000\u0000\u000ex\u0001\u0000\u0000\u0000\u0010\u008e"+
		"\u0001\u0000\u0000\u0000\u0012\u0090\u0001\u0000\u0000\u0000\u0014\u0094"+
		"\u0001\u0000\u0000\u0000\u0016\u009c\u0001\u0000\u0000\u0000\u0018\u00a5"+
		"\u0001\u0000\u0000\u0000\u001a\u00b6\u0001\u0000\u0000\u0000\u001c\u00fe"+
		"\u0001\u0000\u0000\u0000\u001e\u0104\u0001\u0000\u0000\u0000 \u010d\u0001"+
		"\u0000\u0000\u0000\"\u0115\u0001\u0000\u0000\u0000$\u011e\u0001\u0000"+
		"\u0000\u0000&\u0127\u0001\u0000\u0000\u0000(\u0129\u0001\u0000\u0000\u0000"+
		"*\u0137\u0001\u0000\u0000\u0000,\u014c\u0001\u0000\u0000\u0000.\u0167"+
		"\u0001\u0000\u0000\u00000\u016b\u0001\u0000\u0000\u00002\u016d\u0001\u0000"+
		"\u0000\u000045\u0006\u0000\uffff\uffff\u000056\u0003\u0002\u0001\u0000"+
		"67\u0006\u0000\uffff\uffff\u00007\u0001\u0001\u0000\u0000\u000089\u0006"+
		"\u0001\uffff\uffff\u00009:\u0003\u0004\u0002\u0000:?\u0001\u0000\u0000"+
		"\u0000;<\n\u0002\u0000\u0000<>\u0003\u0004\u0002\u0000=;\u0001\u0000\u0000"+
		"\u0000>A\u0001\u0000\u0000\u0000?=\u0001\u0000\u0000\u0000?@\u0001\u0000"+
		"\u0000\u0000@\u0003\u0001\u0000\u0000\u0000A?\u0001\u0000\u0000\u0000"+
		"BF\u0003\u0012\t\u0000CF\u0003\u0006\u0003\u0000DF\u0003\b\u0004\u0000"+
		"EB\u0001\u0000\u0000\u0000EC\u0001\u0000\u0000\u0000ED\u0001\u0000\u0000"+
		"\u0000F\u0005\u0001\u0000\u0000\u0000GH\u0003\u0014\n\u0000HI\u0005\u001f"+
		"\u0000\u0000IJ\u0005\u000e\u0000\u0000JK\u0003\u000e\u0007\u0000KL\u0005"+
		"\u000f\u0000\u0000LM\u0005\u0014\u0000\u0000MU\u0001\u0000\u0000\u0000"+
		"NO\u0003\u0014\n\u0000OP\u0005\u001f\u0000\u0000PQ\u0005\u000e\u0000\u0000"+
		"QR\u0005\u000f\u0000\u0000RS\u0005\u0014\u0000\u0000SU\u0001\u0000\u0000"+
		"\u0000TG\u0001\u0000\u0000\u0000TN\u0001\u0000\u0000\u0000U\u0007\u0001"+
		"\u0000\u0000\u0000VW\u0003\f\u0006\u0000WX\u0003\n\u0005\u0000XY\u0005"+
		"\u000e\u0000\u0000YZ\u0003\u000e\u0007\u0000Z[\u0005\u000f\u0000\u0000"+
		"[\\\u0003\u0010\b\u0000\\]\u0006\u0004\uffff\uffff\u0000]f\u0001\u0000"+
		"\u0000\u0000^_\u0003\f\u0006\u0000_`\u0003\n\u0005\u0000`a\u0005\u000e"+
		"\u0000\u0000ab\u0005\u000f\u0000\u0000bc\u0003\u0010\b\u0000cd\u0006\u0004"+
		"\uffff\uffff\u0000df\u0001\u0000\u0000\u0000eV\u0001\u0000\u0000\u0000"+
		"e^\u0001\u0000\u0000\u0000f\t\u0001\u0000\u0000\u0000gh\u0005\u001f\u0000"+
		"\u0000hk\u0006\u0005\uffff\uffff\u0000ik\u0001\u0000\u0000\u0000jg\u0001"+
		"\u0000\u0000\u0000ji\u0001\u0000\u0000\u0000k\u000b\u0001\u0000\u0000"+
		"\u0000lm\u0003\u0014\n\u0000mn\u0006\u0006\uffff\uffff\u0000nq\u0001\u0000"+
		"\u0000\u0000oq\u0001\u0000\u0000\u0000pl\u0001\u0000\u0000\u0000po\u0001"+
		"\u0000\u0000\u0000q\r\u0001\u0000\u0000\u0000rs\u0006\u0007\uffff\uffff"+
		"\u0000st\u0003\u0014\n\u0000tu\u0005\u001f\u0000\u0000uv\u0006\u0007\uffff"+
		"\uffff\u0000vy\u0001\u0000\u0000\u0000wy\u0003\u0014\n\u0000xr\u0001\u0000"+
		"\u0000\u0000xw\u0001\u0000\u0000\u0000y\u0085\u0001\u0000\u0000\u0000"+
		"z{\n\u0004\u0000\u0000{|\u0005\u0015\u0000\u0000|}\u0003\u0014\n\u0000"+
		"}~\u0005\u001f\u0000\u0000~\u007f\u0006\u0007\uffff\uffff\u0000\u007f"+
		"\u0084\u0001\u0000\u0000\u0000\u0080\u0081\n\u0003\u0000\u0000\u0081\u0082"+
		"\u0005\u0015\u0000\u0000\u0082\u0084\u0003\u0014\n\u0000\u0083z\u0001"+
		"\u0000\u0000\u0000\u0083\u0080\u0001\u0000\u0000\u0000\u0084\u0087\u0001"+
		"\u0000\u0000\u0000\u0085\u0083\u0001\u0000\u0000\u0000\u0085\u0086\u0001"+
		"\u0000\u0000\u0000\u0086\u000f\u0001\u0000\u0000\u0000\u0087\u0085\u0001"+
		"\u0000\u0000\u0000\u0088\u0089\u0005\u0010\u0000\u0000\u0089\u008a\u0003"+
		"\u001a\r\u0000\u008a\u008b\u0005\u0011\u0000\u0000\u008b\u008f\u0001\u0000"+
		"\u0000\u0000\u008c\u008d\u0005\u0010\u0000\u0000\u008d\u008f\u0005\u0011"+
		"\u0000\u0000\u008e\u0088\u0001\u0000\u0000\u0000\u008e\u008c\u0001\u0000"+
		"\u0000\u0000\u008f\u0011\u0001\u0000\u0000\u0000\u0090\u0091\u0003\u0016"+
		"\u000b\u0000\u0091\u0092\u0003\u0018\f\u0000\u0092\u0093\u0005\u0014\u0000"+
		"\u0000\u0093\u0013\u0001\u0000\u0000\u0000\u0094\u0095\u0007\u0000\u0000"+
		"\u0000\u0095\u0015\u0001\u0000\u0000\u0000\u0096\u0097\u0005\u000b\u0000"+
		"\u0000\u0097\u009d\u0006\u000b\uffff\uffff\u0000\u0098\u0099\u0005\f\u0000"+
		"\u0000\u0099\u009d\u0006\u000b\uffff\uffff\u0000\u009a\u009b\u0005\r\u0000"+
		"\u0000\u009b\u009d\u0006\u000b\uffff\uffff\u0000\u009c\u0096\u0001\u0000"+
		"\u0000\u0000\u009c\u0098\u0001\u0000\u0000\u0000\u009c\u009a\u0001\u0000"+
		"\u0000\u0000\u009d\u0017\u0001\u0000\u0000\u0000\u009e\u009f\u0006\f\uffff"+
		"\uffff\u0000\u009f\u00a0\u0005\u001f\u0000\u0000\u00a0\u00a6\u0006\f\uffff"+
		"\uffff\u0000\u00a1\u00a2\u0005\u001f\u0000\u0000\u00a2\u00a3\u0005\u0012"+
		"\u0000\u0000\u00a3\u00a4\u0005 \u0000\u0000\u00a4\u00a6\u0005\u0013\u0000"+
		"\u0000\u00a5\u009e\u0001\u0000\u0000\u0000\u00a5\u00a1\u0001\u0000\u0000"+
		"\u0000\u00a6\u00b3\u0001\u0000\u0000\u0000\u00a7\u00a8\n\u0004\u0000\u0000"+
		"\u00a8\u00a9\u0005\u0015\u0000\u0000\u00a9\u00aa\u0005\u001f\u0000\u0000"+
		"\u00aa\u00b2\u0006\f\uffff\uffff\u0000\u00ab\u00ac\n\u0003\u0000\u0000"+
		"\u00ac\u00ad\u0005\u0015\u0000\u0000\u00ad\u00ae\u0005\u001f\u0000\u0000"+
		"\u00ae\u00af\u0005\u0012\u0000\u0000\u00af\u00b0\u0005 \u0000\u0000\u00b0"+
		"\u00b2\u0005\u0013\u0000\u0000\u00b1\u00a7\u0001\u0000\u0000\u0000\u00b1"+
		"\u00ab\u0001\u0000\u0000\u0000\u00b2\u00b5\u0001\u0000\u0000\u0000\u00b3"+
		"\u00b1\u0001\u0000\u0000\u0000\u00b3\u00b4\u0001\u0000\u0000\u0000\u00b4"+
		"\u0019\u0001\u0000\u0000\u0000\u00b5\u00b3\u0001\u0000\u0000\u0000\u00b6"+
		"\u00b7\u0006\r\uffff\uffff\u0000\u00b7\u00b8\u0003\u001c\u000e\u0000\u00b8"+
		"\u00bd\u0001\u0000\u0000\u0000\u00b9\u00ba\n\u0001\u0000\u0000\u00ba\u00bc"+
		"\u0003\u001c\u000e\u0000\u00bb\u00b9\u0001\u0000\u0000\u0000\u00bc\u00bf"+
		"\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001\u0000\u0000\u0000\u00bd\u00be"+
		"\u0001\u0000\u0000\u0000\u00be\u001b\u0001\u0000\u0000\u0000\u00bf\u00bd"+
		"\u0001\u0000\u0000\u0000\u00c0\u00c1\u0003\u0012\t\u0000\u00c1\u00c2\u0006"+
		"\u000e\uffff\uffff\u0000\u00c2\u00ff\u0001\u0000\u0000\u0000\u00c3\u00c4"+
		"\u0003\u001e\u000f\u0000\u00c4\u00c5\u0006\u000e\uffff\uffff\u0000\u00c5"+
		"\u00ff\u0001\u0000\u0000\u0000\u00c6\u00c7\u0003\u0010\b\u0000\u00c7\u00c8"+
		"\u0006\u000e\uffff\uffff\u0000\u00c8\u00ff\u0001\u0000\u0000\u0000\u00c9"+
		"\u00ca\u0005\u0007\u0000\u0000\u00ca\u00cb\u0005\u000e\u0000\u0000\u00cb"+
		"\u00cc\u0003\u001e\u000f\u0000\u00cc\u00cd\u0006\u000e\uffff\uffff\u0000"+
		"\u00cd\u00ce\u0003\u001e\u000f\u0000\u00ce\u00cf\u0006\u000e\uffff\uffff"+
		"\u0000\u00cf\u00d0\u0003\"\u0011\u0000\u00d0\u00d1\u0006\u000e\uffff\uffff"+
		"\u0000\u00d1\u00d2\u0005\u000f\u0000\u0000\u00d2\u00d3\u0006\u000e\uffff"+
		"\uffff\u0000\u00d3\u00d4\u0003\u001c\u000e\u0000\u00d4\u00d5\u0006\u000e"+
		"\uffff\uffff\u0000\u00d5\u00ff\u0001\u0000\u0000\u0000\u00d6\u00d7\u0005"+
		"\u0005\u0000\u0000\u00d7\u00d8\u0005\u000e\u0000\u0000\u00d8\u00d9\u0003"+
		"\"\u0011\u0000\u00d9\u00da\u0005\u000f\u0000\u0000\u00da\u00db\u0006\u000e"+
		"\uffff\uffff\u0000\u00db\u00dc\u0003\u001c\u000e\u0000\u00dc\u00dd\u0006"+
		"\u000e\uffff\uffff\u0000\u00dd\u00ff\u0001\u0000\u0000\u0000\u00de\u00df"+
		"\u0005\u0005\u0000\u0000\u00df\u00e0\u0005\u000e\u0000\u0000\u00e0\u00e1"+
		"\u0003\"\u0011\u0000\u00e1\u00e2\u0005\u000f\u0000\u0000\u00e2\u00e3\u0006"+
		"\u000e\uffff\uffff\u0000\u00e3\u00e4\u0003\u001c\u000e\u0000\u00e4\u00e5"+
		"\u0005\u0006\u0000\u0000\u00e5\u00e6\u0006\u000e\uffff\uffff\u0000\u00e6"+
		"\u00e7\u0003\u001c\u000e\u0000\u00e7\u00e8\u0006\u000e\uffff\uffff\u0000"+
		"\u00e8\u00ff\u0001\u0000\u0000\u0000\u00e9\u00ea\u0005\b\u0000\u0000\u00ea"+
		"\u00eb\u0005\u000e\u0000\u0000\u00eb\u00ec\u0006\u000e\uffff\uffff\u0000"+
		"\u00ec\u00ed\u0003\"\u0011\u0000\u00ed\u00ee\u0005\u000f\u0000\u0000\u00ee"+
		"\u00ef\u0006\u000e\uffff\uffff\u0000\u00ef\u00f0\u0003\u001c\u000e\u0000"+
		"\u00f0\u00f1\u0006\u000e\uffff\uffff\u0000\u00f1\u00ff\u0001\u0000\u0000"+
		"\u0000\u00f2\u00f3\u0005\t\u0000\u0000\u00f3\u00f4\u0005\u000e\u0000\u0000"+
		"\u00f4\u00f5\u0005\u001f\u0000\u0000\u00f5\u00f6\u0005\u000f\u0000\u0000"+
		"\u00f6\u00f7\u0005\u0014\u0000\u0000\u00f7\u00ff\u0006\u000e\uffff\uffff"+
		"\u0000\u00f8\u00f9\u0006\u000e\uffff\uffff\u0000\u00f9\u00fa\u0005\n\u0000"+
		"\u0000\u00fa\u00fb\u0003\"\u0011\u0000\u00fb\u00fc\u0005\u0014\u0000\u0000"+
		"\u00fc\u00fd\u0006\u000e\uffff\uffff\u0000\u00fd\u00ff\u0001\u0000\u0000"+
		"\u0000\u00fe\u00c0\u0001\u0000\u0000\u0000\u00fe\u00c3\u0001\u0000\u0000"+
		"\u0000\u00fe\u00c6\u0001\u0000\u0000\u0000\u00fe\u00c9\u0001\u0000\u0000"+
		"\u0000\u00fe\u00d6\u0001\u0000\u0000\u0000\u00fe\u00de\u0001\u0000\u0000"+
		"\u0000\u00fe\u00e9\u0001\u0000\u0000\u0000\u00fe\u00f2\u0001\u0000\u0000"+
		"\u0000\u00fe\u00f8\u0001\u0000\u0000\u0000\u00ff\u001d\u0001\u0000\u0000"+
		"\u0000\u0100\u0105\u0005\u0014\u0000\u0000\u0101\u0102\u0003\"\u0011\u0000"+
		"\u0102\u0103\u0005\u0014\u0000\u0000\u0103\u0105\u0001\u0000\u0000\u0000"+
		"\u0104\u0100\u0001\u0000\u0000\u0000\u0104\u0101\u0001\u0000\u0000\u0000"+
		"\u0105\u001f\u0001\u0000\u0000\u0000\u0106\u0107\u0005\u001f\u0000\u0000"+
		"\u0107\u010e\u0006\u0010\uffff\uffff\u0000\u0108\u0109\u0005\u001f\u0000"+
		"\u0000\u0109\u010a\u0005\u0012\u0000\u0000\u010a\u010b\u0003\"\u0011\u0000"+
		"\u010b\u010c\u0005\u0013\u0000\u0000\u010c\u010e\u0001\u0000\u0000\u0000"+
		"\u010d\u0106\u0001\u0000\u0000\u0000\u010d\u0108\u0001\u0000\u0000\u0000"+
		"\u010e!\u0001\u0000\u0000\u0000\u010f\u0116\u0003$\u0012\u0000\u0110\u0111"+
		"\u0003 \u0010\u0000\u0111\u0112\u0005\u001e\u0000\u0000\u0112\u0113\u0003"+
		"$\u0012\u0000\u0113\u0114\u0006\u0011\uffff\uffff\u0000\u0114\u0116\u0001"+
		"\u0000\u0000\u0000\u0115\u010f\u0001\u0000\u0000\u0000\u0115\u0110\u0001"+
		"\u0000\u0000\u0000\u0116#\u0001\u0000\u0000\u0000\u0117\u011f\u0003&\u0013"+
		"\u0000\u0118\u0119\u0003&\u0013\u0000\u0119\u011a\u0005\u001d\u0000\u0000"+
		"\u011a\u011b\u0006\u0012\uffff\uffff\u0000\u011b\u011c\u0003&\u0013\u0000"+
		"\u011c\u011d\u0006\u0012\uffff\uffff\u0000\u011d\u011f\u0001\u0000\u0000"+
		"\u0000\u011e\u0117\u0001\u0000\u0000\u0000\u011e\u0118\u0001\u0000\u0000"+
		"\u0000\u011f%\u0001\u0000\u0000\u0000\u0120\u0128\u0003(\u0014\u0000\u0121"+
		"\u0122\u0003(\u0014\u0000\u0122\u0123\u0005\u001c\u0000\u0000\u0123\u0124"+
		"\u0006\u0013\uffff\uffff\u0000\u0124\u0125\u0003(\u0014\u0000\u0125\u0126"+
		"\u0006\u0013\uffff\uffff\u0000\u0126\u0128\u0001\u0000\u0000\u0000\u0127"+
		"\u0120\u0001\u0000\u0000\u0000\u0127\u0121\u0001\u0000\u0000\u0000\u0128"+
		"\'\u0001\u0000\u0000\u0000\u0129\u012a\u0006\u0014\uffff\uffff\u0000\u012a"+
		"\u012b\u0003*\u0015\u0000\u012b\u0134\u0001\u0000\u0000\u0000\u012c\u012d"+
		"\n\u0001\u0000\u0000\u012d\u012e\u0006\u0014\uffff\uffff\u0000\u012e\u012f"+
		"\u0005\u0016\u0000\u0000\u012f\u0130\u0003*\u0015\u0000\u0130\u0131\u0006"+
		"\u0014\uffff\uffff\u0000\u0131\u0133\u0001\u0000\u0000\u0000\u0132\u012c"+
		"\u0001\u0000\u0000\u0000\u0133\u0136\u0001\u0000\u0000\u0000\u0134\u0132"+
		"\u0001\u0000\u0000\u0000\u0134\u0135\u0001\u0000\u0000\u0000\u0135)\u0001"+
		"\u0000\u0000\u0000\u0136\u0134\u0001\u0000\u0000\u0000\u0137\u0138\u0006"+
		"\u0015\uffff\uffff\u0000\u0138\u0139\u0003,\u0016\u0000\u0139\u0142\u0001"+
		"\u0000\u0000\u0000\u013a\u013b\n\u0001\u0000\u0000\u013b\u013c\u0005\u0018"+
		"\u0000\u0000\u013c\u013d\u0006\u0015\uffff\uffff\u0000\u013d\u013e\u0003"+
		",\u0016\u0000\u013e\u013f\u0006\u0015\uffff\uffff\u0000\u013f\u0141\u0001"+
		"\u0000\u0000\u0000\u0140\u013a\u0001\u0000\u0000\u0000\u0141\u0144\u0001"+
		"\u0000\u0000\u0000\u0142\u0140\u0001\u0000\u0000\u0000\u0142\u0143\u0001"+
		"\u0000\u0000\u0000\u0143+\u0001\u0000\u0000\u0000\u0144\u0142\u0001\u0000"+
		"\u0000\u0000\u0145\u0146\u0005\u0016\u0000\u0000\u0146\u0147\u0003,\u0016"+
		"\u0000\u0147\u0148\u0006\u0016\uffff\uffff\u0000\u0148\u014d\u0001\u0000"+
		"\u0000\u0000\u0149\u014a\u0005\u001b\u0000\u0000\u014a\u014d\u0003,\u0016"+
		"\u0000\u014b\u014d\u0003.\u0017\u0000\u014c\u0145\u0001\u0000\u0000\u0000"+
		"\u014c\u0149\u0001\u0000\u0000\u0000\u014c\u014b\u0001\u0000\u0000\u0000"+
		"\u014d-\u0001\u0000\u0000\u0000\u014e\u014f\u0003 \u0010\u0000\u014f\u0150"+
		"\u0006\u0017\uffff\uffff\u0000\u0150\u0168\u0001\u0000\u0000\u0000\u0151"+
		"\u0152\u0005\u001f\u0000\u0000\u0152\u0153\u0005\u000e\u0000\u0000\u0153"+
		"\u0154\u00030\u0018\u0000\u0154\u0155\u0005\u000f\u0000\u0000\u0155\u0156"+
		"\u0006\u0017\uffff\uffff\u0000\u0156\u0168\u0001\u0000\u0000\u0000\u0157"+
		"\u0158\u0005\u000e\u0000\u0000\u0158\u0159\u0003\"\u0011\u0000\u0159\u015a"+
		"\u0005\u000f\u0000\u0000\u015a\u0168\u0001\u0000\u0000\u0000\u015b\u015c"+
		"\u0005 \u0000\u0000\u015c\u0168\u0006\u0017\uffff\uffff\u0000\u015d\u015e"+
		"\u0005!\u0000\u0000\u015e\u0168\u0006\u0017\uffff\uffff\u0000\u015f\u0160"+
		"\u0003 \u0010\u0000\u0160\u0161\u0005\u0019\u0000\u0000\u0161\u0162\u0006"+
		"\u0017\uffff\uffff\u0000\u0162\u0168\u0001\u0000\u0000\u0000\u0163\u0164"+
		"\u0003 \u0010\u0000\u0164\u0165\u0005\u001a\u0000\u0000\u0165\u0166\u0006"+
		"\u0017\uffff\uffff\u0000\u0166\u0168\u0001\u0000\u0000\u0000\u0167\u014e"+
		"\u0001\u0000\u0000\u0000\u0167\u0151\u0001\u0000\u0000\u0000\u0167\u0157"+
		"\u0001\u0000\u0000\u0000\u0167\u015b\u0001\u0000\u0000\u0000\u0167\u015d"+
		"\u0001\u0000\u0000\u0000\u0167\u015f\u0001\u0000\u0000\u0000\u0167\u0163"+
		"\u0001\u0000\u0000\u0000\u0168/\u0001\u0000\u0000\u0000\u0169\u016c\u0003"+
		"2\u0019\u0000\u016a\u016c\u0001\u0000\u0000\u0000\u016b\u0169\u0001\u0000"+
		"\u0000\u0000\u016b\u016a\u0001\u0000\u0000\u0000\u016c1\u0001\u0000\u0000"+
		"\u0000\u016d\u016e\u0006\u0019\uffff\uffff\u0000\u016e\u016f\u0003$\u0012"+
		"\u0000\u016f\u0170\u0006\u0019\uffff\uffff\u0000\u0170\u0178\u0001\u0000"+
		"\u0000\u0000\u0171\u0172\n\u0002\u0000\u0000\u0172\u0173\u0005\u0015\u0000"+
		"\u0000\u0173\u0174\u0003$\u0012\u0000\u0174\u0175\u0006\u0019\uffff\uffff"+
		"\u0000\u0175\u0177\u0001\u0000\u0000\u0000\u0176\u0171\u0001\u0000\u0000"+
		"\u0000\u0177\u017a\u0001\u0000\u0000\u0000\u0178\u0176\u0001\u0000\u0000"+
		"\u0000\u0178\u0179\u0001\u0000\u0000\u0000\u01793\u0001\u0000\u0000\u0000"+
		"\u017a\u0178\u0001\u0000\u0000\u0000\u001b?ETejpx\u0083\u0085\u008e\u009c"+
		"\u00a5\u00b1\u00b3\u00bd\u00fe\u0104\u010d\u0115\u011e\u0127\u0134\u0142"+
		"\u014c\u0167\u016b\u0178";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}