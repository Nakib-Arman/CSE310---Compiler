
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


// Generated from C8086Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  C8086Parser : public antlr4::Parser {
public:
  enum {
    LINE_COMMENT = 1, BLOCK_COMMENT = 2, STRING = 3, WS = 4, IF = 5, ELSE = 6, 
    FOR = 7, WHILE = 8, PRINTLN = 9, RETURN = 10, INT = 11, FLOAT = 12, 
    VOID = 13, IN = 14, FORIN = 15, FOREACH = 16, TO = 17, WHEN = 18, PRINT = 19, 
    ARROW = 20, LPAREN = 21, RPAREN = 22, LCURL = 23, RCURL = 24, LTHIRD = 25, 
    RTHIRD = 26, SEMICOLON = 27, COMMA = 28, QMARK = 29, COLON = 30, ADDOP = 31, 
    SUBOP = 32, MULOP = 33, INCOP = 34, DECOP = 35, NOT = 36, RELOP = 37, 
    LOGICOP = 38, ASSIGNOP = 39, HASH = 40, ID = 41, CONST_INT = 42, CONST_FLOAT = 43
  };

  enum {
    RuleStart = 0, RuleProgram = 1, RuleUnit = 2, RuleFunc_declaration = 3, 
    RuleFunc_name_dec = 4, RuleFunc_definition = 5, RuleFunc_name = 6, RuleReturn_type = 7, 
    RuleR_paren = 8, RuleParameter_list = 9, RuleCompound_statement = 10, 
    RuleVar_declaration = 11, RuleDeclaration_list_err = 12, RuleType_specifier = 13, 
    RuleDeclaration_list = 14, RuleStatements = 15, RuleStatement = 16, 
    RuleExpression_statement = 17, RuleVariable = 18, RuleExpression = 19, 
    RuleLogic_expression = 20, RuleRel_expression = 21, RuleSimple_expression = 22, 
    RuleTerm = 23, RuleUnary_expression = 24, RuleFactor = 25, RuleArgument_list = 26, 
    RuleArguments = 27, RuleCurlybrace = 28
  };

  explicit C8086Parser(antlr4::TokenStream *input);

  C8086Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~C8086Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


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


  class StartContext;
  class ProgramContext;
  class UnitContext;
  class Func_declarationContext;
  class Func_name_decContext;
  class Func_definitionContext;
  class Func_nameContext;
  class Return_typeContext;
  class R_parenContext;
  class Parameter_listContext;
  class Compound_statementContext;
  class Var_declarationContext;
  class Declaration_list_errContext;
  class Type_specifierContext;
  class Declaration_listContext;
  class StatementsContext;
  class StatementContext;
  class Expression_statementContext;
  class VariableContext;
  class ExpressionContext;
  class Logic_expressionContext;
  class Rel_expressionContext;
  class Simple_expressionContext;
  class TermContext;
  class Unary_expressionContext;
  class FactorContext;
  class Argument_listContext;
  class ArgumentsContext;
  class CurlybraceContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    C8086Parser::ProgramContext *pg = nullptr;
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartContext* start();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    string pg_text;
    C8086Parser::ProgramContext *pg = nullptr;
    C8086Parser::UnitContext *unitContext = nullptr;
    C8086Parser::UnitContext *un = nullptr;
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitContext *unit();
    ProgramContext *program();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();
  ProgramContext* program(int precedence);
  class  UnitContext : public antlr4::ParserRuleContext {
  public:
    string unit_text;
    C8086Parser::Var_declarationContext *vd = nullptr;
    C8086Parser::Func_declarationContext *fd = nullptr;
    C8086Parser::Func_definitionContext *fdef = nullptr;
    UnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    Func_declarationContext *func_declaration();
    Func_definitionContext *func_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitContext* unit();

  class  Func_declarationContext : public antlr4::ParserRuleContext {
  public:
    string func_dec_text;
    C8086Parser::Type_specifierContext *ts = nullptr;
    C8086Parser::Func_name_decContext *fn = nullptr;
    antlr4::Token *lparenToken = nullptr;
    C8086Parser::Parameter_listContext *pm = nullptr;
    antlr4::Token *rparenToken = nullptr;
    antlr4::Token *semicolonToken = nullptr;
    antlr4::Token *idToken = nullptr;
    Func_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    Type_specifierContext *type_specifier();
    Func_name_decContext *func_name_dec();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_declarationContext* func_declaration();

  class  Func_name_decContext : public antlr4::ParserRuleContext {
  public:
    string func_name_text;
    antlr4::Token *idToken = nullptr;
    Func_name_decContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_name_decContext* func_name_dec();

  class  Func_definitionContext : public antlr4::ParserRuleContext {
  public:
    string func_def_text;
    C8086Parser::Return_typeContext *ts = nullptr;
    C8086Parser::Func_nameContext *fn = nullptr;
    antlr4::Token *lparenToken = nullptr;
    C8086Parser::Parameter_listContext *pm = nullptr;
    C8086Parser::R_parenContext *rp = nullptr;
    C8086Parser::Compound_statementContext *cmst = nullptr;
    Func_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Return_typeContext *return_type();
    Func_nameContext *func_name();
    Parameter_listContext *parameter_list();
    R_parenContext *r_paren();
    Compound_statementContext *compound_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_definitionContext* func_definition();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    string func_name_text;
    antlr4::Token *idToken = nullptr;
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_nameContext* func_name();

  class  Return_typeContext : public antlr4::ParserRuleContext {
  public:
    string name_line;
    C8086Parser::Type_specifierContext *ts = nullptr;
    Return_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_typeContext* return_type();

  class  R_parenContext : public antlr4::ParserRuleContext {
  public:
    string rparen_text;
    antlr4::Token *rparenToken = nullptr;
    R_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  R_parenContext* r_paren();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    string param_text;
    C8086Parser::Parameter_listContext *pm = nullptr;
    C8086Parser::Type_specifierContext *ts = nullptr;
    antlr4::Token *idToken = nullptr;
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *COMMA();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_listContext* parameter_list();
  Parameter_listContext* parameter_list(int precedence);
  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    string cmst_text;
    string type;
    C8086Parser::CurlybraceContext *c = nullptr;
    C8086Parser::StatementsContext *stmts = nullptr;
    antlr4::Token *rcurlToken = nullptr;
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RCURL();
    CurlybraceContext *curlybrace();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    string var_text;
    C8086Parser::Type_specifierContext *t = nullptr;
    C8086Parser::Declaration_listContext *dl = nullptr;
    antlr4::Token *sm = nullptr;
    C8086Parser::Declaration_list_errContext *de = nullptr;
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    Declaration_listContext *declaration_list();
    antlr4::tree::TerminalNode *SEMICOLON();
    Declaration_list_errContext *declaration_list_err();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_declarationContext* var_declaration();

  class  Declaration_list_errContext : public antlr4::ParserRuleContext {
  public:
    std::string error_name;
    Declaration_list_errContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declaration_list_errContext* declaration_list_err();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    std::string name_line;
    antlr4::Token *intToken = nullptr;
    antlr4::Token *floatToken = nullptr;
    antlr4::Token *voidToken = nullptr;
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_specifierContext* type_specifier();

  class  Declaration_listContext : public antlr4::ParserRuleContext {
  public:
    string dl_list;
    C8086Parser::Declaration_listContext *dl = nullptr;
    antlr4::Token *idToken = nullptr;
    antlr4::Token *lthirdToken = nullptr;
    antlr4::Token *const_intToken = nullptr;
    antlr4::Token *rthirdToken = nullptr;
    antlr4::Token *cn = nullptr;
    Declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LTHIRD();
    antlr4::tree::TerminalNode *CONST_INT();
    antlr4::tree::TerminalNode *RTHIRD();
    antlr4::tree::TerminalNode *COMMA();
    Declaration_listContext *declaration_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Declaration_listContext* declaration_list();
  Declaration_listContext* declaration_list(int precedence);
  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    string stmts_text;
    string type;
    C8086Parser::StatementsContext *stmts = nullptr;
    C8086Parser::StatementContext *st = nullptr;
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementsContext *statements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementsContext* statements();
  StatementsContext* statements(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    string st_text;
    string type;
    C8086Parser::Var_declarationContext *vd = nullptr;
    C8086Parser::Expression_statementContext *exst = nullptr;
    C8086Parser::Compound_statementContext *cs = nullptr;
    antlr4::Token *forToken = nullptr;
    antlr4::Token *lparenToken = nullptr;
    C8086Parser::Expression_statementContext *es1 = nullptr;
    C8086Parser::Expression_statementContext *es2 = nullptr;
    C8086Parser::ExpressionContext *ex = nullptr;
    antlr4::Token *rparenToken = nullptr;
    C8086Parser::StatementContext *st = nullptr;
    antlr4::Token *ifToken = nullptr;
    C8086Parser::StatementContext *st1 = nullptr;
    antlr4::Token *elseToken = nullptr;
    C8086Parser::StatementContext *st2 = nullptr;
    antlr4::Token *whileToken = nullptr;
    antlr4::Token *printlnToken = nullptr;
    antlr4::Token *idToken = nullptr;
    antlr4::Token *semicolonToken = nullptr;
    antlr4::Token *returnToken = nullptr;
    C8086Parser::ExpressionContext *expr = nullptr;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    std::vector<Expression_statementContext *> expression_statement();
    Expression_statementContext* expression_statement(size_t i);
    Compound_statementContext *compound_statement();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *PRINTLN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Expression_statementContext : public antlr4::ParserRuleContext {
  public:
    string expr_stmt_text;
    antlr4::Token *semicolonToken = nullptr;
    C8086Parser::ExpressionContext *exp = nullptr;
    Expression_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_statementContext* expression_statement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    string var_text;
    string type;
    antlr4::Token *idToken = nullptr;
    antlr4::Token *lthirdToken = nullptr;
    C8086Parser::ExpressionContext *ex = nullptr;
    antlr4::Token *rthirdToken = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LTHIRD();
    antlr4::tree::TerminalNode *RTHIRD();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    string expr_text;
    string type;
    C8086Parser::Logic_expressionContext *logex = nullptr;
    C8086Parser::VariableContext *var = nullptr;
    antlr4::Token *assignopToken = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logic_expressionContext *logic_expression();
    antlr4::tree::TerminalNode *ASSIGNOP();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Logic_expressionContext : public antlr4::ParserRuleContext {
  public:
    string logic_text;
    string type;
    C8086Parser::Rel_expressionContext *relex = nullptr;
    C8086Parser::Rel_expressionContext *relex1 = nullptr;
    antlr4::Token *logicopToken = nullptr;
    C8086Parser::Rel_expressionContext *relex2 = nullptr;
    Logic_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rel_expressionContext *> rel_expression();
    Rel_expressionContext* rel_expression(size_t i);
    antlr4::tree::TerminalNode *LOGICOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logic_expressionContext* logic_expression();

  class  Rel_expressionContext : public antlr4::ParserRuleContext {
  public:
    string rel_text;
    string type;
    C8086Parser::Simple_expressionContext *smex = nullptr;
    C8086Parser::Simple_expressionContext *smex1 = nullptr;
    antlr4::Token *relopToken = nullptr;
    C8086Parser::Simple_expressionContext *smex2 = nullptr;
    Rel_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *RELOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rel_expressionContext* rel_expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    string sim_text;
    string type;
    C8086Parser::Simple_expressionContext *smex = nullptr;
    C8086Parser::TermContext *termContext = nullptr;
    antlr4::Token *addopToken = nullptr;
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    antlr4::tree::TerminalNode *ADDOP();
    Simple_expressionContext *simple_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_expressionContext* simple_expression();
  Simple_expressionContext* simple_expression(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    string term_text;
    string type;
    C8086Parser::TermContext *t = nullptr;
    C8086Parser::Unary_expressionContext *unex = nullptr;
    antlr4::Token *mulopToken = nullptr;
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *MULOP();
    TermContext *term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    string unex_text;
    string type;
    antlr4::Token *addopToken = nullptr;
    C8086Parser::Unary_expressionContext *unex = nullptr;
    antlr4::Token *notToken = nullptr;
    C8086Parser::FactorContext *factorContext = nullptr;
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDOP();
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    string fact_text;
    string type;
    C8086Parser::VariableContext *var = nullptr;
    antlr4::Token *idToken = nullptr;
    antlr4::Token *lparenToken = nullptr;
    C8086Parser::Argument_listContext *al = nullptr;
    antlr4::Token *rparenToken = nullptr;
    C8086Parser::ExpressionContext *ex = nullptr;
    antlr4::Token *cn = nullptr;
    antlr4::Token *incopToken = nullptr;
    antlr4::Token *decopToken = nullptr;
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Argument_listContext *argument_list();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CONST_INT();
    antlr4::tree::TerminalNode *CONST_FLOAT();
    antlr4::tree::TerminalNode *INCOP();
    antlr4::tree::TerminalNode *DECOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactorContext* factor();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    string arglist_text;
    C8086Parser::ArgumentsContext *args = nullptr;
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_listContext* argument_list();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    string arg_text;
    C8086Parser::ArgumentsContext *args = nullptr;
    C8086Parser::Logic_expressionContext *logex = nullptr;
    antlr4::Token *commaToken = nullptr;
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logic_expressionContext *logic_expression();
    antlr4::tree::TerminalNode *COMMA();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();
  ArgumentsContext* arguments(int precedence);
  class  CurlybraceContext : public antlr4::ParserRuleContext {
  public:
    string curl_text;
    antlr4::Token *lcurlToken = nullptr;
    CurlybraceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CurlybraceContext* curlybrace();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool programSempred(ProgramContext *_localctx, size_t predicateIndex);
  bool parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex);
  bool declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex);
  bool statementsSempred(StatementsContext *_localctx, size_t predicateIndex);
  bool simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);
  bool argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

