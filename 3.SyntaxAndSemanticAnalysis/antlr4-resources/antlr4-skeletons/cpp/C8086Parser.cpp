
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


#include "C8086ParserListener.h"

#include "C8086Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct C8086ParserStaticData final {
  C8086ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  C8086ParserStaticData(const C8086ParserStaticData&) = delete;
  C8086ParserStaticData(C8086ParserStaticData&&) = delete;
  C8086ParserStaticData& operator=(const C8086ParserStaticData&) = delete;
  C8086ParserStaticData& operator=(C8086ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag c8086parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<C8086ParserStaticData> c8086parserParserStaticData = nullptr;

void c8086parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (c8086parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(c8086parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<C8086ParserStaticData>(
    std::vector<std::string>{
      "start", "program", "unit", "func_declaration", "func_name_dec", "func_definition", 
      "func_name", "return_type", "r_paren", "parameter_list", "compound_statement", 
      "var_declaration", "declaration_list_err", "type_specifier", "declaration_list", 
      "statements", "statement", "expression_statement", "variable", "expression", 
      "logic_expression", "rel_expression", "simple_expression", "term", 
      "unary_expression", "factor", "argument_list", "arguments", "curlybrace"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'printf'", 
      "'return'", "'int'", "'float'", "'void'", "'in'", "'forin'", "'foreach'", 
      "'to'", "'when'", "'println'", "'->'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "';'", "','", "'\\u003F'", "':'", "", "", "", "'++'", 
      "'--'", "'!'", "", "", "'='", "'#'"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
      "FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "IN", 
      "FORIN", "FOREACH", "TO", "WHEN", "PRINT", "ARROW", "LPAREN", "RPAREN", 
      "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", "QMARK", 
      "COLON", "ADDOP", "SUBOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", 
      "LOGICOP", "ASSIGNOP", "HASH", "ID", "CONST_INT", "CONST_FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,431,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,70,8,1,10,1,12,1,73,
  	9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,84,8,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,101,8,3,1,4,1,4,1,4,3,4,
  	106,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,
  	5,123,8,5,1,6,1,6,1,6,3,6,128,8,6,1,7,1,7,1,7,1,7,3,7,134,8,7,1,8,1,8,
  	1,8,3,8,139,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,149,8,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,160,8,9,10,9,12,9,163,9,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,3,10,174,8,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,3,11,186,8,11,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,13,1,13,3,13,196,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,
  	206,8,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,
  	219,8,14,10,14,12,14,222,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	5,15,232,8,15,10,15,12,15,235,9,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,3,16,289,8,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,297,8,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,307,8,18,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,3,19,317,8,19,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,3,20,327,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,
  	21,337,8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,5,22,348,8,22,
  	10,22,12,22,351,9,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,5,23,
  	362,8,23,10,23,12,23,365,9,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,3,24,378,8,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,25,3,25,406,8,25,1,26,1,26,1,26,1,26,3,26,412,8,26,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,5,27,423,8,27,10,27,12,27,
  	426,9,27,1,28,1,28,1,28,1,28,0,7,2,18,28,30,44,46,54,29,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,
  	0,0,446,0,58,1,0,0,0,2,61,1,0,0,0,4,83,1,0,0,0,6,100,1,0,0,0,8,105,1,
  	0,0,0,10,122,1,0,0,0,12,127,1,0,0,0,14,133,1,0,0,0,16,138,1,0,0,0,18,
  	148,1,0,0,0,20,173,1,0,0,0,22,185,1,0,0,0,24,187,1,0,0,0,26,195,1,0,0,
  	0,28,205,1,0,0,0,30,223,1,0,0,0,32,288,1,0,0,0,34,296,1,0,0,0,36,306,
  	1,0,0,0,38,316,1,0,0,0,40,326,1,0,0,0,42,336,1,0,0,0,44,338,1,0,0,0,46,
  	352,1,0,0,0,48,377,1,0,0,0,50,405,1,0,0,0,52,411,1,0,0,0,54,413,1,0,0,
  	0,56,427,1,0,0,0,58,59,3,2,1,0,59,60,6,0,-1,0,60,1,1,0,0,0,61,62,6,1,
  	-1,0,62,63,3,4,2,0,63,64,6,1,-1,0,64,71,1,0,0,0,65,66,10,2,0,0,66,67,
  	3,4,2,0,67,68,6,1,-1,0,68,70,1,0,0,0,69,65,1,0,0,0,70,73,1,0,0,0,71,69,
  	1,0,0,0,71,72,1,0,0,0,72,3,1,0,0,0,73,71,1,0,0,0,74,75,3,22,11,0,75,76,
  	6,2,-1,0,76,84,1,0,0,0,77,78,3,6,3,0,78,79,6,2,-1,0,79,84,1,0,0,0,80,
  	81,3,10,5,0,81,82,6,2,-1,0,82,84,1,0,0,0,83,74,1,0,0,0,83,77,1,0,0,0,
  	83,80,1,0,0,0,84,5,1,0,0,0,85,86,3,26,13,0,86,87,3,8,4,0,87,88,5,21,0,
  	0,88,89,3,18,9,0,89,90,5,22,0,0,90,91,5,27,0,0,91,92,6,3,-1,0,92,101,
  	1,0,0,0,93,94,3,26,13,0,94,95,5,41,0,0,95,96,5,21,0,0,96,97,5,22,0,0,
  	97,98,5,27,0,0,98,99,6,3,-1,0,99,101,1,0,0,0,100,85,1,0,0,0,100,93,1,
  	0,0,0,101,7,1,0,0,0,102,103,5,41,0,0,103,106,6,4,-1,0,104,106,1,0,0,0,
  	105,102,1,0,0,0,105,104,1,0,0,0,106,9,1,0,0,0,107,108,3,14,7,0,108,109,
  	3,12,6,0,109,110,5,21,0,0,110,111,3,18,9,0,111,112,3,16,8,0,112,113,3,
  	20,10,0,113,114,6,5,-1,0,114,123,1,0,0,0,115,116,3,14,7,0,116,117,3,12,
  	6,0,117,118,5,21,0,0,118,119,3,16,8,0,119,120,3,20,10,0,120,121,6,5,-1,
  	0,121,123,1,0,0,0,122,107,1,0,0,0,122,115,1,0,0,0,123,11,1,0,0,0,124,
  	125,5,41,0,0,125,128,6,6,-1,0,126,128,1,0,0,0,127,124,1,0,0,0,127,126,
  	1,0,0,0,128,13,1,0,0,0,129,130,3,26,13,0,130,131,6,7,-1,0,131,134,1,0,
  	0,0,132,134,1,0,0,0,133,129,1,0,0,0,133,132,1,0,0,0,134,15,1,0,0,0,135,
  	136,5,22,0,0,136,139,6,8,-1,0,137,139,1,0,0,0,138,135,1,0,0,0,138,137,
  	1,0,0,0,139,17,1,0,0,0,140,141,6,9,-1,0,141,142,3,26,13,0,142,143,5,41,
  	0,0,143,144,6,9,-1,0,144,149,1,0,0,0,145,146,3,26,13,0,146,147,6,9,-1,
  	0,147,149,1,0,0,0,148,140,1,0,0,0,148,145,1,0,0,0,149,161,1,0,0,0,150,
  	151,10,4,0,0,151,152,5,28,0,0,152,153,3,26,13,0,153,154,5,41,0,0,154,
  	155,6,9,-1,0,155,160,1,0,0,0,156,157,10,3,0,0,157,158,5,28,0,0,158,160,
  	3,26,13,0,159,150,1,0,0,0,159,156,1,0,0,0,160,163,1,0,0,0,161,159,1,0,
  	0,0,161,162,1,0,0,0,162,19,1,0,0,0,163,161,1,0,0,0,164,165,3,56,28,0,
  	165,166,3,30,15,0,166,167,5,24,0,0,167,168,6,10,-1,0,168,174,1,0,0,0,
  	169,170,3,56,28,0,170,171,5,24,0,0,171,172,6,10,-1,0,172,174,1,0,0,0,
  	173,164,1,0,0,0,173,169,1,0,0,0,174,21,1,0,0,0,175,176,3,26,13,0,176,
  	177,3,28,14,0,177,178,5,27,0,0,178,179,6,11,-1,0,179,186,1,0,0,0,180,
  	181,3,26,13,0,181,182,3,24,12,0,182,183,5,27,0,0,183,184,6,11,-1,0,184,
  	186,1,0,0,0,185,175,1,0,0,0,185,180,1,0,0,0,186,23,1,0,0,0,187,188,6,
  	12,-1,0,188,25,1,0,0,0,189,190,5,11,0,0,190,196,6,13,-1,0,191,192,5,12,
  	0,0,192,196,6,13,-1,0,193,194,5,13,0,0,194,196,6,13,-1,0,195,189,1,0,
  	0,0,195,191,1,0,0,0,195,193,1,0,0,0,196,27,1,0,0,0,197,198,6,14,-1,0,
  	198,199,5,41,0,0,199,206,6,14,-1,0,200,201,5,41,0,0,201,202,5,25,0,0,
  	202,203,5,42,0,0,203,204,5,26,0,0,204,206,6,14,-1,0,205,197,1,0,0,0,205,
  	200,1,0,0,0,206,220,1,0,0,0,207,208,10,4,0,0,208,209,5,28,0,0,209,210,
  	5,41,0,0,210,219,6,14,-1,0,211,212,10,3,0,0,212,213,5,28,0,0,213,214,
  	5,41,0,0,214,215,5,25,0,0,215,216,5,42,0,0,216,217,5,26,0,0,217,219,6,
  	14,-1,0,218,207,1,0,0,0,218,211,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,
  	0,220,221,1,0,0,0,221,29,1,0,0,0,222,220,1,0,0,0,223,224,6,15,-1,0,224,
  	225,3,32,16,0,225,226,6,15,-1,0,226,233,1,0,0,0,227,228,10,1,0,0,228,
  	229,3,32,16,0,229,230,6,15,-1,0,230,232,1,0,0,0,231,227,1,0,0,0,232,235,
  	1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,31,1,0,0,0,235,233,1,0,0,
  	0,236,237,3,22,11,0,237,238,6,16,-1,0,238,289,1,0,0,0,239,240,3,34,17,
  	0,240,241,6,16,-1,0,241,289,1,0,0,0,242,243,3,20,10,0,243,244,6,16,-1,
  	0,244,289,1,0,0,0,245,246,5,7,0,0,246,247,5,21,0,0,247,248,3,34,17,0,
  	248,249,3,34,17,0,249,250,3,38,19,0,250,251,5,22,0,0,251,252,3,32,16,
  	0,252,253,6,16,-1,0,253,289,1,0,0,0,254,255,5,5,0,0,255,256,5,21,0,0,
  	256,257,3,38,19,0,257,258,5,22,0,0,258,259,3,32,16,0,259,260,6,16,-1,
  	0,260,289,1,0,0,0,261,262,5,5,0,0,262,263,5,21,0,0,263,264,3,38,19,0,
  	264,265,5,22,0,0,265,266,3,32,16,0,266,267,5,6,0,0,267,268,3,32,16,0,
  	268,269,6,16,-1,0,269,289,1,0,0,0,270,271,5,8,0,0,271,272,5,21,0,0,272,
  	273,3,38,19,0,273,274,5,22,0,0,274,275,3,32,16,0,275,276,6,16,-1,0,276,
  	289,1,0,0,0,277,278,5,9,0,0,278,279,5,21,0,0,279,280,5,41,0,0,280,281,
  	5,22,0,0,281,282,5,27,0,0,282,289,6,16,-1,0,283,284,5,10,0,0,284,285,
  	3,38,19,0,285,286,5,27,0,0,286,287,6,16,-1,0,287,289,1,0,0,0,288,236,
  	1,0,0,0,288,239,1,0,0,0,288,242,1,0,0,0,288,245,1,0,0,0,288,254,1,0,0,
  	0,288,261,1,0,0,0,288,270,1,0,0,0,288,277,1,0,0,0,288,283,1,0,0,0,289,
  	33,1,0,0,0,290,291,5,27,0,0,291,297,6,17,-1,0,292,293,3,38,19,0,293,294,
  	5,27,0,0,294,295,6,17,-1,0,295,297,1,0,0,0,296,290,1,0,0,0,296,292,1,
  	0,0,0,297,35,1,0,0,0,298,299,5,41,0,0,299,307,6,18,-1,0,300,301,5,41,
  	0,0,301,302,5,25,0,0,302,303,3,38,19,0,303,304,5,26,0,0,304,305,6,18,
  	-1,0,305,307,1,0,0,0,306,298,1,0,0,0,306,300,1,0,0,0,307,37,1,0,0,0,308,
  	309,3,40,20,0,309,310,6,19,-1,0,310,317,1,0,0,0,311,312,3,36,18,0,312,
  	313,5,39,0,0,313,314,3,40,20,0,314,315,6,19,-1,0,315,317,1,0,0,0,316,
  	308,1,0,0,0,316,311,1,0,0,0,317,39,1,0,0,0,318,319,3,42,21,0,319,320,
  	6,20,-1,0,320,327,1,0,0,0,321,322,3,42,21,0,322,323,5,38,0,0,323,324,
  	3,42,21,0,324,325,6,20,-1,0,325,327,1,0,0,0,326,318,1,0,0,0,326,321,1,
  	0,0,0,327,41,1,0,0,0,328,329,3,44,22,0,329,330,6,21,-1,0,330,337,1,0,
  	0,0,331,332,3,44,22,0,332,333,5,37,0,0,333,334,3,44,22,0,334,335,6,21,
  	-1,0,335,337,1,0,0,0,336,328,1,0,0,0,336,331,1,0,0,0,337,43,1,0,0,0,338,
  	339,6,22,-1,0,339,340,3,46,23,0,340,341,6,22,-1,0,341,349,1,0,0,0,342,
  	343,10,1,0,0,343,344,5,31,0,0,344,345,3,46,23,0,345,346,6,22,-1,0,346,
  	348,1,0,0,0,347,342,1,0,0,0,348,351,1,0,0,0,349,347,1,0,0,0,349,350,1,
  	0,0,0,350,45,1,0,0,0,351,349,1,0,0,0,352,353,6,23,-1,0,353,354,3,48,24,
  	0,354,355,6,23,-1,0,355,363,1,0,0,0,356,357,10,1,0,0,357,358,5,33,0,0,
  	358,359,3,48,24,0,359,360,6,23,-1,0,360,362,1,0,0,0,361,356,1,0,0,0,362,
  	365,1,0,0,0,363,361,1,0,0,0,363,364,1,0,0,0,364,47,1,0,0,0,365,363,1,
  	0,0,0,366,367,5,31,0,0,367,368,3,48,24,0,368,369,6,24,-1,0,369,378,1,
  	0,0,0,370,371,5,36,0,0,371,372,3,48,24,0,372,373,6,24,-1,0,373,378,1,
  	0,0,0,374,375,3,50,25,0,375,376,6,24,-1,0,376,378,1,0,0,0,377,366,1,0,
  	0,0,377,370,1,0,0,0,377,374,1,0,0,0,378,49,1,0,0,0,379,380,3,36,18,0,
  	380,381,6,25,-1,0,381,406,1,0,0,0,382,383,5,41,0,0,383,384,5,21,0,0,384,
  	385,3,52,26,0,385,386,5,22,0,0,386,387,6,25,-1,0,387,406,1,0,0,0,388,
  	389,5,21,0,0,389,390,3,38,19,0,390,391,5,22,0,0,391,392,6,25,-1,0,392,
  	406,1,0,0,0,393,394,5,42,0,0,394,406,6,25,-1,0,395,396,5,43,0,0,396,406,
  	6,25,-1,0,397,398,3,36,18,0,398,399,5,34,0,0,399,400,6,25,-1,0,400,406,
  	1,0,0,0,401,402,3,36,18,0,402,403,5,35,0,0,403,404,6,25,-1,0,404,406,
  	1,0,0,0,405,379,1,0,0,0,405,382,1,0,0,0,405,388,1,0,0,0,405,393,1,0,0,
  	0,405,395,1,0,0,0,405,397,1,0,0,0,405,401,1,0,0,0,406,51,1,0,0,0,407,
  	408,3,54,27,0,408,409,6,26,-1,0,409,412,1,0,0,0,410,412,1,0,0,0,411,407,
  	1,0,0,0,411,410,1,0,0,0,412,53,1,0,0,0,413,414,6,27,-1,0,414,415,3,40,
  	20,0,415,416,6,27,-1,0,416,424,1,0,0,0,417,418,10,2,0,0,418,419,5,28,
  	0,0,419,420,3,40,20,0,420,421,6,27,-1,0,421,423,1,0,0,0,422,417,1,0,0,
  	0,423,426,1,0,0,0,424,422,1,0,0,0,424,425,1,0,0,0,425,55,1,0,0,0,426,
  	424,1,0,0,0,427,428,5,23,0,0,428,429,6,28,-1,0,429,57,1,0,0,0,30,71,83,
  	100,105,122,127,133,138,148,159,161,173,185,195,205,218,220,233,288,296,
  	306,316,326,336,349,363,377,405,411,424
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  c8086parserParserStaticData = std::move(staticData);
}

}

C8086Parser::C8086Parser(TokenStream *input) : C8086Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

C8086Parser::C8086Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  C8086Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *c8086parserParserStaticData->atn, c8086parserParserStaticData->decisionToDFA, c8086parserParserStaticData->sharedContextCache, options);
}

C8086Parser::~C8086Parser() {
  delete _interpreter;
}

const atn::ATN& C8086Parser::getATN() const {
  return *c8086parserParserStaticData->atn;
}

std::string C8086Parser::getGrammarFileName() const {
  return "C8086Parser.g4";
}

const std::vector<std::string>& C8086Parser::getRuleNames() const {
  return c8086parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& C8086Parser::getVocabulary() const {
  return c8086parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView C8086Parser::getSerializedATN() const {
  return c8086parserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

C8086Parser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::ProgramContext* C8086Parser::StartContext::program() {
  return getRuleContext<C8086Parser::ProgramContext>(0);
}


size_t C8086Parser::StartContext::getRuleIndex() const {
  return C8086Parser::RuleStart;
}

void C8086Parser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void C8086Parser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

C8086Parser::StartContext* C8086Parser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, C8086Parser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    antlrcpp::downCast<StartContext *>(_localctx)->pg = program(0);

            writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StartContext *>(_localctx)->pg != nullptr ? (antlrcpp::downCast<StartContext *>(_localctx)->pg->stop) : nullptr)->getLine()) + ": start : program\n");
    		symbolTable->print_all_scope_nonempty_indices(parserLogFile);
    		writeIntoparserLogFile("Total number of lines: " + to_string((antlrcpp::downCast<StartContext *>(_localctx)->pg != nullptr ? (antlrcpp::downCast<StartContext *>(_localctx)->pg->stop) : nullptr)->getLine()));
    		writeIntoparserLogFile("Total number of errors: " + to_string(err_count));
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

C8086Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::UnitContext* C8086Parser::ProgramContext::unit() {
  return getRuleContext<C8086Parser::UnitContext>(0);
}

C8086Parser::ProgramContext* C8086Parser::ProgramContext::program() {
  return getRuleContext<C8086Parser::ProgramContext>(0);
}


size_t C8086Parser::ProgramContext::getRuleIndex() const {
  return C8086Parser::RuleProgram;
}

void C8086Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void C8086Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


C8086Parser::ProgramContext* C8086Parser::program() {
   return program(0);
}

C8086Parser::ProgramContext* C8086Parser::program(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, parentState);
  C8086Parser::ProgramContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, C8086Parser::RuleProgram, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(62);
    antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

    		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text;
    		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : unit\n");
    		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text + "\n");
    	
    _ctx->stop = _input->LT(-1);
    setState(71);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ProgramContext>(parentContext, parentState);
        _localctx->pg = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleProgram);
        setState(65);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(66);
        antlrcpp::downCast<ProgramContext *>(_localctx)->un = antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

                  		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text;
                  		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : program unit\n");
                  		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text + "\n");
                  	 
      }
      setState(73);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnitContext ------------------------------------------------------------------

C8086Parser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Var_declarationContext* C8086Parser::UnitContext::var_declaration() {
  return getRuleContext<C8086Parser::Var_declarationContext>(0);
}

C8086Parser::Func_declarationContext* C8086Parser::UnitContext::func_declaration() {
  return getRuleContext<C8086Parser::Func_declarationContext>(0);
}

C8086Parser::Func_definitionContext* C8086Parser::UnitContext::func_definition() {
  return getRuleContext<C8086Parser::Func_definitionContext>(0);
}


size_t C8086Parser::UnitContext::getRuleIndex() const {
  return C8086Parser::RuleUnit;
}

void C8086Parser::UnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnit(this);
}

void C8086Parser::UnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnit(this);
}

C8086Parser::UnitContext* C8086Parser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 4, C8086Parser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(74);
      antlrcpp::downCast<UnitContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": unit : var_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text);
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      antlrcpp::downCast<UnitContext *>(_localctx)->fd = func_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text;
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fd->stop) : nullptr)->getLine()) + ": unit : func_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text);
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(80);
      antlrcpp::downCast<UnitContext *>(_localctx)->fdef = func_definition();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text;
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fdef != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fdef->stop) : nullptr)->getLine()) + ": unit : func_definition\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text);
      	 
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declarationContext ------------------------------------------------------------------

C8086Parser::Func_declarationContext::Func_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Func_declarationContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
}

C8086Parser::Type_specifierContext* C8086Parser::Func_declarationContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}

C8086Parser::Func_name_decContext* C8086Parser::Func_declarationContext::func_name_dec() {
  return getRuleContext<C8086Parser::Func_name_decContext>(0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_declarationContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::ID() {
  return getToken(C8086Parser::ID, 0);
}


size_t C8086Parser::Func_declarationContext::getRuleIndex() const {
  return C8086Parser::RuleFunc_declaration;
}

void C8086Parser::Func_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_declaration(this);
}

void C8086Parser::Func_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_declaration(this);
}

C8086Parser::Func_declarationContext* C8086Parser::func_declaration() {
  Func_declarationContext *_localctx = _tracker.createInstance<Func_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, C8086Parser::RuleFunc_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(86);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn = func_name_dec();
      setState(87);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(88);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm = parameter_list(0);
      setState(89);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(90);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text);

      			symbolTable->ExitScope();
      			Function* temp = new Function();
      			temp->setName(cur_func->getName());
      			temp->setReturnType(antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line);
      			temp->setParamList(cur_func->getParamList());
      			temp->declare();
      			symbolTable->insert(antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text,"func",temp);
      			in_declaration = 0;
      			cur_func->clearParamList();
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(93);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(94);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(95);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(96);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(97);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text);

      			Function *temp = new Function();
      			temp->setName(antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken->getText());
      			temp->setReturnType(antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line);
      			temp->declare();
      			symbolTable->insert(antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken->getText(),"func",temp);
      			in_declaration = 0;
      		
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_name_decContext ------------------------------------------------------------------

C8086Parser::Func_name_decContext::Func_name_decContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Func_name_decContext::ID() {
  return getToken(C8086Parser::ID, 0);
}


size_t C8086Parser::Func_name_decContext::getRuleIndex() const {
  return C8086Parser::RuleFunc_name_dec;
}

void C8086Parser::Func_name_decContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_name_dec(this);
}

void C8086Parser::Func_name_decContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_name_dec(this);
}

C8086Parser::Func_name_decContext* C8086Parser::func_name_dec() {
  Func_name_decContext *_localctx = _tracker.createInstance<Func_name_decContext>(_ctx, getState());
  enterRule(_localctx, 8, C8086Parser::RuleFunc_name_dec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(102);
        antlrcpp::downCast<Func_name_decContext *>(_localctx)->idToken = match(C8086Parser::ID);

        			cur_func->setName(antlrcpp::downCast<Func_name_decContext *>(_localctx)->idToken->getText());
        			has_param = 1;
        			in_declaration = 1;
        			antlrcpp::downCast<Func_name_decContext *>(_localctx)->func_name_text =  antlrcpp::downCast<Func_name_decContext *>(_localctx)->idToken->getText();
        		
        break;
      }

      case C8086Parser::LPAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_definitionContext ------------------------------------------------------------------

C8086Parser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Func_definitionContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

C8086Parser::Return_typeContext* C8086Parser::Func_definitionContext::return_type() {
  return getRuleContext<C8086Parser::Return_typeContext>(0);
}

C8086Parser::Func_nameContext* C8086Parser::Func_definitionContext::func_name() {
  return getRuleContext<C8086Parser::Func_nameContext>(0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_definitionContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}

C8086Parser::R_parenContext* C8086Parser::Func_definitionContext::r_paren() {
  return getRuleContext<C8086Parser::R_parenContext>(0);
}

C8086Parser::Compound_statementContext* C8086Parser::Func_definitionContext::compound_statement() {
  return getRuleContext<C8086Parser::Compound_statementContext>(0);
}


size_t C8086Parser::Func_definitionContext::getRuleIndex() const {
  return C8086Parser::RuleFunc_definition;
}

void C8086Parser::Func_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_definition(this);
}

void C8086Parser::Func_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_definition(this);
}

C8086Parser::Func_definitionContext* C8086Parser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 10, C8086Parser::RuleFunc_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = return_type();
      setState(108);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn = func_name();
      setState(109);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(110);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm = parameter_list(0);
      setState(111);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rp = r_paren();
      setState(112);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			if(antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->type == "return" && antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line == "void") {
      				writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": Cannot return value from function " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + " with void return type\n");
      				writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": Cannot return value from function " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + " with void return type\n");
      				err_count++;
      			}

      			cur_func->clearParamList();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rp->rparen_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n");
      			writeIntoparserLogFile(_localctx->func_def_text);

      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = return_type();
      setState(116);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn = func_name();
      setState(117);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(118);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rp = r_paren();
      setState(119);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rp->rparen_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n");
      			writeIntoparserLogFile(_localctx->func_def_text);
      		
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_nameContext ------------------------------------------------------------------

C8086Parser::Func_nameContext::Func_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Func_nameContext::ID() {
  return getToken(C8086Parser::ID, 0);
}


size_t C8086Parser::Func_nameContext::getRuleIndex() const {
  return C8086Parser::RuleFunc_name;
}

void C8086Parser::Func_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_name(this);
}

void C8086Parser::Func_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_name(this);
}

C8086Parser::Func_nameContext* C8086Parser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 12, C8086Parser::RuleFunc_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(124);
        antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken = match(C8086Parser::ID);

        			cur_func->setName(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText());
        			Function* temp = new Function();
        			temp->setName(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText());
        			symbolTable->insert(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText(),"func",temp);
        			symbolTable->EnterScope();
        			has_param = 1;
        			antlrcpp::downCast<Func_nameContext *>(_localctx)->func_name_text =  antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText();
        		
        break;
      }

      case C8086Parser::LPAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_typeContext ------------------------------------------------------------------

C8086Parser::Return_typeContext::Return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Type_specifierContext* C8086Parser::Return_typeContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}


size_t C8086Parser::Return_typeContext::getRuleIndex() const {
  return C8086Parser::RuleReturn_type;
}

void C8086Parser::Return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_type(this);
}

void C8086Parser::Return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_type(this);
}

C8086Parser::Return_typeContext* C8086Parser::return_type() {
  Return_typeContext *_localctx = _tracker.createInstance<Return_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, C8086Parser::RuleReturn_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::INT:
      case C8086Parser::FLOAT:
      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 1);
        setState(129);
        antlrcpp::downCast<Return_typeContext *>(_localctx)->ts = type_specifier();

        			antlrcpp::downCast<Return_typeContext *>(_localctx)->name_line =  antlrcpp::downCast<Return_typeContext *>(_localctx)->ts->name_line;
        			cur_func->setReturnType(antlrcpp::downCast<Return_typeContext *>(_localctx)->ts->name_line);
        		
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ID: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- R_parenContext ------------------------------------------------------------------

C8086Parser::R_parenContext::R_parenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::R_parenContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}


size_t C8086Parser::R_parenContext::getRuleIndex() const {
  return C8086Parser::RuleR_paren;
}

void C8086Parser::R_parenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterR_paren(this);
}

void C8086Parser::R_parenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitR_paren(this);
}

C8086Parser::R_parenContext* C8086Parser::r_paren() {
  R_parenContext *_localctx = _tracker.createInstance<R_parenContext>(_ctx, getState());
  enterRule(_localctx, 16, C8086Parser::RuleR_paren);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::RPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

        			Function* temp = symbolTable->getFunc(cur_func->getName());
        			if(temp!=NULL){
        				if (!temp->declarationType()){
        					temp->setReturnType(cur_func->getReturnType());
        					temp->setParamList(cur_func->getParamList());
        				}
        				else{
        					if(temp->getReturnType() != cur_func->getReturnType()){
        						writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
        						writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Return type mismatch of " + cur_func->getName() + "\n");
        						err_count++;
        					}
        					else if(temp->getParamNum() != cur_func->getParamNum()){
        						writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
        						writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Total number of arguments mismatch with declaration in function " + cur_func->getName() + "\n");
        						err_count++;
        					}
        				}
        			}
        			else{
        				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
        				writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getLine()) + ": Multiple declaration of " + cur_func->getName() + "\n");
        				err_count++;
        			}
        			antlrcpp::downCast<R_parenContext *>(_localctx)->rparen_text =  antlrcpp::downCast<R_parenContext *>(_localctx)->rparenToken->getText();
        		
        break;
      }

      case C8086Parser::LCURL: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

C8086Parser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Parameter_listContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

C8086Parser::Type_specifierContext* C8086Parser::Parameter_listContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}

tree::TerminalNode* C8086Parser::Parameter_listContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
}

C8086Parser::Parameter_listContext* C8086Parser::Parameter_listContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}


size_t C8086Parser::Parameter_listContext::getRuleIndex() const {
  return C8086Parser::RuleParameter_list;
}

void C8086Parser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void C8086Parser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


C8086Parser::Parameter_listContext* C8086Parser::parameter_list() {
   return parameter_list(0);
}

C8086Parser::Parameter_listContext* C8086Parser::parameter_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, parentState);
  C8086Parser::Parameter_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, C8086Parser::RuleParameter_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(141);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
      setState(142);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : type_specifier ID\n");
      			writeIntoparserLogFile(_localctx->param_text + "\n");
      			
      			if(!in_declaration){
      				bool inserted = symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
      				if (!inserted) {
      					writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + "\n");
      					writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + "\n");
      					err_count++;
      				}
      			}
      			cur_func->addToParamList(antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
      		
      break;
    }

    case 2: {
      setState(145);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();

      			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts != nullptr ? (antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->stop) : nullptr)->getLine()) + ": parameter_list : type_specifier\n");
      			writeIntoparserLogFile(_localctx->param_text + "\n");
      		
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(161);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(159);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          _localctx->pm = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(150);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(151);
          match(C8086Parser::COMMA);
          setState(152);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
          setState(153);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			if(!in_declaration){
                    				bool inserted = symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
                    				if (!inserted) {
                    					writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + " in parameter\n");
                    					writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + " in parameter\n");
                    					err_count++;
                    				}
                    			}
                    			cur_func->addToParamList(antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);

                    			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->pm->param_text + "," + antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n");
                    			writeIntoparserLogFile(_localctx->param_text + "\n");
                    		
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(156);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(157);
          match(C8086Parser::COMMA);
          setState(158);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(163);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

C8086Parser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Compound_statementContext::RCURL() {
  return getToken(C8086Parser::RCURL, 0);
}

C8086Parser::CurlybraceContext* C8086Parser::Compound_statementContext::curlybrace() {
  return getRuleContext<C8086Parser::CurlybraceContext>(0);
}

C8086Parser::StatementsContext* C8086Parser::Compound_statementContext::statements() {
  return getRuleContext<C8086Parser::StatementsContext>(0);
}


size_t C8086Parser::Compound_statementContext::getRuleIndex() const {
  return C8086Parser::RuleCompound_statement;
}

void C8086Parser::Compound_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_statement(this);
}

void C8086Parser::Compound_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_statement(this);
}

C8086Parser::Compound_statementContext* C8086Parser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, C8086Parser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(164);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->c = curlybrace();
      setState(165);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts = statements(0);
      setState(166);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken = match(C8086Parser::RCURL);

      				antlrcpp::downCast<Compound_statementContext *>(_localctx)->type =  antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts->type;
      				antlrcpp::downCast<Compound_statementContext *>(_localctx)->cmst_text =  antlrcpp::downCast<Compound_statementContext *>(_localctx)->c->curl_text + "\n" + antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts->stmts_text + antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getText();
      				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getLine()) + ": compound_statement : LCURL statements RCURL\n");
      				writeIntoparserLogFile(_localctx->cmst_text + "\n");

      				symbolTable->print_all_scope_nonempty_indices(parserLogFile);
      				symbolTable->ExitScope();
      			
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->c = curlybrace();
      setState(170);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken = match(C8086Parser::RCURL);

      				antlrcpp::downCast<Compound_statementContext *>(_localctx)->cmst_text =  antlrcpp::downCast<Compound_statementContext *>(_localctx)->c->curl_text + antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getText();
      				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getLine()) + ": compound_statement : LCURL RCURL\n");
      				writeIntoparserLogFile(_localctx->cmst_text + "\n");

      				symbolTable->print_all_scope_nonempty_indices(parserLogFile);
      				symbolTable->ExitScope();
      			
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

C8086Parser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Type_specifierContext* C8086Parser::Var_declarationContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}

C8086Parser::Declaration_listContext* C8086Parser::Var_declarationContext::declaration_list() {
  return getRuleContext<C8086Parser::Declaration_listContext>(0);
}

tree::TerminalNode* C8086Parser::Var_declarationContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
}

C8086Parser::Declaration_list_errContext* C8086Parser::Var_declarationContext::declaration_list_err() {
  return getRuleContext<C8086Parser::Declaration_list_errContext>(0);
}


size_t C8086Parser::Var_declarationContext::getRuleIndex() const {
  return C8086Parser::RuleVar_declaration;
}

void C8086Parser::Var_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declaration(this);
}

void C8086Parser::Var_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declaration(this);
}

C8086Parser::Var_declarationContext* C8086Parser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 22, C8086Parser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(176);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl = declaration_list(0);
      setState(177);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);

        		antlrcpp::downCast<Var_declarationContext *>(_localctx)->var_text =  antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";";
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n");
      		if (antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line == "void") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": Variable type cannot be void\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": Variable type cannot be void\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";\n");
            
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(180);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(181);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->de = declaration_list_err();
      setState(182);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);

            
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_list_errContext ------------------------------------------------------------------

C8086Parser::Declaration_list_errContext::Declaration_list_errContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C8086Parser::Declaration_list_errContext::getRuleIndex() const {
  return C8086Parser::RuleDeclaration_list_err;
}

void C8086Parser::Declaration_list_errContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_list_err(this);
}

void C8086Parser::Declaration_list_errContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_list_err(this);
}

C8086Parser::Declaration_list_errContext* C8086Parser::declaration_list_err() {
  Declaration_list_errContext *_localctx = _tracker.createInstance<Declaration_list_errContext>(_ctx, getState());
  enterRule(_localctx, 24, C8086Parser::RuleDeclaration_list_err);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

            antlrcpp::downCast<Declaration_list_errContext *>(_localctx)->error_name =  "Error in declaration list";
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

C8086Parser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Type_specifierContext::INT() {
  return getToken(C8086Parser::INT, 0);
}

tree::TerminalNode* C8086Parser::Type_specifierContext::FLOAT() {
  return getToken(C8086Parser::FLOAT, 0);
}

tree::TerminalNode* C8086Parser::Type_specifierContext::VOID() {
  return getToken(C8086Parser::VOID, 0);
}


size_t C8086Parser::Type_specifierContext::getRuleIndex() const {
  return C8086Parser::RuleType_specifier;
}

void C8086Parser::Type_specifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_specifier(this);
}

void C8086Parser::Type_specifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_specifier(this);
}

C8086Parser::Type_specifierContext* C8086Parser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 26, C8086Parser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(195);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(189);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken = match(C8086Parser::INT);

        			data_type = "int";
        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getLine()) + ": type_specifier : INT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(191);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken = match(C8086Parser::FLOAT);

        			data_type = "float";
        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getLine()) + ": type_specifier : FLOAT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(193);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->voidToken = match(C8086Parser::VOID);

        			data_type = "void";
        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->voidToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->voidToken->getLine()) + ": type_specifier : VOID\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->voidToken->getText() + "\n");
                
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_listContext ------------------------------------------------------------------

C8086Parser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Declaration_listContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

tree::TerminalNode* C8086Parser::Declaration_listContext::LTHIRD() {
  return getToken(C8086Parser::LTHIRD, 0);
}

tree::TerminalNode* C8086Parser::Declaration_listContext::CONST_INT() {
  return getToken(C8086Parser::CONST_INT, 0);
}

tree::TerminalNode* C8086Parser::Declaration_listContext::RTHIRD() {
  return getToken(C8086Parser::RTHIRD, 0);
}

tree::TerminalNode* C8086Parser::Declaration_listContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
}

C8086Parser::Declaration_listContext* C8086Parser::Declaration_listContext::declaration_list() {
  return getRuleContext<C8086Parser::Declaration_listContext>(0);
}


size_t C8086Parser::Declaration_listContext::getRuleIndex() const {
  return C8086Parser::RuleDeclaration_list;
}

void C8086Parser::Declaration_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_list(this);
}

void C8086Parser::Declaration_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_list(this);
}


C8086Parser::Declaration_listContext* C8086Parser::declaration_list() {
   return declaration_list(0);
}

C8086Parser::Declaration_listContext* C8086Parser::declaration_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, parentState);
  C8086Parser::Declaration_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, C8086Parser::RuleDeclaration_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(198);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type);
      			if(!inserted) {
      				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
      				writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
      				err_count++;
      			}
      			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": declaration_list : ID\n");
      			writeIntoparserLogFile(_localctx->dl_list + "\n");
       		  
      break;
    }

    case 2: {
      setState(200);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(201);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(202);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);
      setState(203);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type + " array");
      			if(!inserted) {
      				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
      				writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
      				err_count++;
      			}
      			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n");
      			writeIntoparserLogFile(_localctx->dl_list + "\n");
      		  
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(218);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          _localctx->dl = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(207);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(208);
          match(C8086Parser::COMMA);
          setState(209);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type);
                    			if(!inserted) {
                    				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
                    				writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
                    				err_count++;
                    			}
                    			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl->dl_list + "," + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": declaration_list : declaration_list COMMA ID\n");
                    			writeIntoparserLogFile(_localctx->dl_list + "\n");
                    		  
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          _localctx->dl = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(211);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(212);
          match(C8086Parser::COMMA);
          setState(213);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
          setState(214);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
          setState(215);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);
          setState(216);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

                    			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type + " array");
                    			if(!inserted) {
                    				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
                    				writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
                    				err_count++;
                    			}
                    			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl->dl_list + "," + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->cn->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
                    			writeIntoparserLogFile(_localctx->dl_list + "\n");
                    		  
          break;
        }

        default:
          break;
        } 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

C8086Parser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::StatementContext* C8086Parser::StatementsContext::statement() {
  return getRuleContext<C8086Parser::StatementContext>(0);
}

C8086Parser::StatementsContext* C8086Parser::StatementsContext::statements() {
  return getRuleContext<C8086Parser::StatementsContext>(0);
}


size_t C8086Parser::StatementsContext::getRuleIndex() const {
  return C8086Parser::RuleStatements;
}

void C8086Parser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void C8086Parser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


C8086Parser::StatementsContext* C8086Parser::statements() {
   return statements(0);
}

C8086Parser::StatementsContext* C8086Parser::statements(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, parentState);
  C8086Parser::StatementsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, C8086Parser::RuleStatements, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(224);
    antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

    		antlrcpp::downCast<StatementsContext *>(_localctx)->type =  antlrcpp::downCast<StatementsContext *>(_localctx)->st->type;
    		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text + "\n";
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statement\n");
    		writeIntoparserLogFile(_localctx->stmts_text);
    	   
    _ctx->stop = _input->LT(-1);
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementsContext>(parentContext, parentState);
        _localctx->stmts = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleStatements);
        setState(227);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(228);
        antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

                  		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->stmts->stmts_text + antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text + "\n";
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statements statement\n");
                  		writeIntoparserLogFile(_localctx->stmts_text);
                  	    
      }
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

C8086Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Var_declarationContext* C8086Parser::StatementContext::var_declaration() {
  return getRuleContext<C8086Parser::Var_declarationContext>(0);
}

std::vector<C8086Parser::Expression_statementContext *> C8086Parser::StatementContext::expression_statement() {
  return getRuleContexts<C8086Parser::Expression_statementContext>();
}

C8086Parser::Expression_statementContext* C8086Parser::StatementContext::expression_statement(size_t i) {
  return getRuleContext<C8086Parser::Expression_statementContext>(i);
}

C8086Parser::Compound_statementContext* C8086Parser::StatementContext::compound_statement() {
  return getRuleContext<C8086Parser::Compound_statementContext>(0);
}

tree::TerminalNode* C8086Parser::StatementContext::FOR() {
  return getToken(C8086Parser::FOR, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}

C8086Parser::ExpressionContext* C8086Parser::StatementContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}

std::vector<C8086Parser::StatementContext *> C8086Parser::StatementContext::statement() {
  return getRuleContexts<C8086Parser::StatementContext>();
}

C8086Parser::StatementContext* C8086Parser::StatementContext::statement(size_t i) {
  return getRuleContext<C8086Parser::StatementContext>(i);
}

tree::TerminalNode* C8086Parser::StatementContext::IF() {
  return getToken(C8086Parser::IF, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::ELSE() {
  return getToken(C8086Parser::ELSE, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::WHILE() {
  return getToken(C8086Parser::WHILE, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::PRINTLN() {
  return getToken(C8086Parser::PRINTLN, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
}

tree::TerminalNode* C8086Parser::StatementContext::RETURN() {
  return getToken(C8086Parser::RETURN, 0);
}


size_t C8086Parser::StatementContext::getRuleIndex() const {
  return C8086Parser::RuleStatement;
}

void C8086Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void C8086Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

C8086Parser::StatementContext* C8086Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 32, C8086Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(236);
      antlrcpp::downCast<StatementContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": statement : var_declaration\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(239);
      antlrcpp::downCast<StatementContext *>(_localctx)->exst = expression_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->exst->expr_stmt_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->exst != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->exst->stop) : nullptr)->getLine()) + ": statement : expression_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(242);
      antlrcpp::downCast<StatementContext *>(_localctx)->cs = compound_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->cs->cmst_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->cs != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->cs->stop) : nullptr)->getLine()) + ": statement : compound_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(245);
      antlrcpp::downCast<StatementContext *>(_localctx)->forToken = match(C8086Parser::FOR);
      setState(246);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(247);
      antlrcpp::downCast<StatementContext *>(_localctx)->es1 = expression_statement();
      setState(248);
      antlrcpp::downCast<StatementContext *>(_localctx)->es2 = expression_statement();
      setState(249);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(250);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(251);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->forToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->es1->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->es2->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(254);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(255);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(256);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(257);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(258);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(261);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(262);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(263);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(264);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(265);
      antlrcpp::downCast<StatementContext *>(_localctx)->st1 = statement();
      setState(266);
      antlrcpp::downCast<StatementContext *>(_localctx)->elseToken = match(C8086Parser::ELSE);
      setState(267);
      antlrcpp::downCast<StatementContext *>(_localctx)->st2 = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st1->st_text + antlrcpp::downCast<StatementContext *>(_localctx)->elseToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->st2->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st2 != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st2->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(270);
      antlrcpp::downCast<StatementContext *>(_localctx)->whileToken = match(C8086Parser::WHILE);
      setState(271);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(272);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(273);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(274);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->whileToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(277);
      antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken = match(C8086Parser::PRINTLN);
      setState(278);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(279);
      antlrcpp::downCast<StatementContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(280);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(281);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n");
      		SymbolInfo* temp = symbolTable->LookUp(antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText());
      		if (temp == NULL) {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + "\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + "\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(283);
      antlrcpp::downCast<StatementContext *>(_localctx)->returnToken = match(C8086Parser::RETURN);
      setState(284);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression();
      setState(285);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->returnToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->expr->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": statement : RETURN expression SEMICOLON\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      		antlrcpp::downCast<StatementContext *>(_localctx)->type =  "return";
      	  
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

C8086Parser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Expression_statementContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
}

C8086Parser::ExpressionContext* C8086Parser::Expression_statementContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}


size_t C8086Parser::Expression_statementContext::getRuleIndex() const {
  return C8086Parser::RuleExpression_statement;
}

void C8086Parser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void C8086Parser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}

C8086Parser::Expression_statementContext* C8086Parser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, C8086Parser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(290);
        antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

        				antlrcpp::downCast<Expression_statementContext *>(_localctx)->expr_stmt_text =  antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken->getText();
        				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken->getLine()) + ": expression_statement : SEMICOLON\n");
        				writeIntoparserLogFile(_localctx->expr_stmt_text + "\n");
        			
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(292);
        antlrcpp::downCast<Expression_statementContext *>(_localctx)->exp = expression();
        setState(293);
        antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

        				antlrcpp::downCast<Expression_statementContext *>(_localctx)->expr_stmt_text =  antlrcpp::downCast<Expression_statementContext *>(_localctx)->exp->expr_text + antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken->getText();
        				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Expression_statementContext *>(_localctx)->semicolonToken->getLine()) + ": expression_statement : expression SEMICOLON\n");
        				writeIntoparserLogFile(_localctx->expr_stmt_text + "\n");
        			
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

C8086Parser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::VariableContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

tree::TerminalNode* C8086Parser::VariableContext::LTHIRD() {
  return getToken(C8086Parser::LTHIRD, 0);
}

tree::TerminalNode* C8086Parser::VariableContext::RTHIRD() {
  return getToken(C8086Parser::RTHIRD, 0);
}

C8086Parser::ExpressionContext* C8086Parser::VariableContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}


size_t C8086Parser::VariableContext::getRuleIndex() const {
  return C8086Parser::RuleVariable;
}

void C8086Parser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void C8086Parser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

C8086Parser::VariableContext* C8086Parser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 36, C8086Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(298);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		data_type = symbolTable->getType(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      		antlrcpp::downCast<VariableContext *>(_localctx)->type =  data_type;
      		string suffix="";
      		if(data_type.length() >= 6){
      			suffix = data_type.substr(data_type.length() - 6);
      		}
      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": variable : ID\n");
      		if(data_type == "") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + "\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + "\n");
      			err_count++;
      		}
      		else if (suffix == " array") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Type mismatch, " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " is an array\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Type mismatch, " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " is an array\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->var_text + "\n");
      	 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(300);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(301);
      antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(302);
      antlrcpp::downCast<VariableContext *>(_localctx)->ex = expression();
      setState(303);
      antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      		data_type = symbolTable->getType(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getText();
      		string suffix="";
      		if(data_type.length() >= 6){
      			suffix = data_type.substr(data_type.length() - 6);
      		}
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n");
      		if (suffix != " array") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " not an array\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " not an array\n");
      			err_count++;
      		}
      		if (antlrcpp::downCast<VariableContext *>(_localctx)->ex->type != "int") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": Expression inside third brackets not an integer\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": Expression inside third brackets not an integer\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->var_text + "\n");
      		string element_type = data_type.substr(0, data_type.find(' '));
      		antlrcpp::downCast<VariableContext *>(_localctx)->type =  element_type;
      	 
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

C8086Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Logic_expressionContext* C8086Parser::ExpressionContext::logic_expression() {
  return getRuleContext<C8086Parser::Logic_expressionContext>(0);
}

tree::TerminalNode* C8086Parser::ExpressionContext::ASSIGNOP() {
  return getToken(C8086Parser::ASSIGNOP, 0);
}

C8086Parser::VariableContext* C8086Parser::ExpressionContext::variable() {
  return getRuleContext<C8086Parser::VariableContext>(0);
}


size_t C8086Parser::ExpressionContext::getRuleIndex() const {
  return C8086Parser::RuleExpression;
}

void C8086Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void C8086Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

C8086Parser::ExpressionContext* C8086Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, C8086Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(316);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(308);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->type =  antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type;
      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : logic_expression\n");
      		 writeIntoparserLogFile(_localctx->expr_text + "\n");
      	   
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(311);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->var = variable();
      setState(312);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken = match(C8086Parser::ASSIGNOP);
      setState(313);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->var->var_text + antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken->getText() + antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : variable ASSIGNOP logic_expression\n");
      		 data_type = antlrcpp::downCast<ExpressionContext *>(_localctx)->var->type;
      		 string element_type = data_type.substr(0, data_type.find(' '));
      		 if (data_type != "" && antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type != "Undefined"){
      			if (element_type != antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type) {
      				if (data_type == "void" || antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type == "void") {
      					writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": Void function used in expression\n");
      					writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": Void function used in expression\n");
      					err_count++;
      					if (data_type != "void") antlrcpp::downCast<ExpressionContext *>(_localctx)->type =  data_type;
      					else if (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type != "void") antlrcpp::downCast<ExpressionContext *>(_localctx)->type =  antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type;
      					else antlrcpp::downCast<ExpressionContext *>(_localctx)->type =  "void";
      				}
      				else{
      					if (data_type == "float" && antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->type == "int") {
      					}
      					else{
      						writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": Type Mismatch\n");
      						writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": Type Mismatch\n");
      						err_count++;
      					}
      				}
      			}
      		 }
      		 writeIntoparserLogFile(_localctx->expr_text + "\n");
      	   
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logic_expressionContext ------------------------------------------------------------------

C8086Parser::Logic_expressionContext::Logic_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C8086Parser::Rel_expressionContext *> C8086Parser::Logic_expressionContext::rel_expression() {
  return getRuleContexts<C8086Parser::Rel_expressionContext>();
}

C8086Parser::Rel_expressionContext* C8086Parser::Logic_expressionContext::rel_expression(size_t i) {
  return getRuleContext<C8086Parser::Rel_expressionContext>(i);
}

tree::TerminalNode* C8086Parser::Logic_expressionContext::LOGICOP() {
  return getToken(C8086Parser::LOGICOP, 0);
}


size_t C8086Parser::Logic_expressionContext::getRuleIndex() const {
  return C8086Parser::RuleLogic_expression;
}

void C8086Parser::Logic_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_expression(this);
}

void C8086Parser::Logic_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_expression(this);
}

C8086Parser::Logic_expressionContext* C8086Parser::logic_expression() {
  Logic_expressionContext *_localctx = _tracker.createInstance<Logic_expressionContext>(_ctx, getState());
  enterRule(_localctx, 40, C8086Parser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(326);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(318);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex = rel_expression();

      			antlrcpp::downCast<Logic_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->type;
      			antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logic_text =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->rel_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex != nullptr ? (antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->stop) : nullptr)->getLine()) + ": logic_expression : rel_expression\n");
      			writeIntoparserLogFile(_localctx->logic_text + "\n");
      		 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(321);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex1 = rel_expression();
      setState(322);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken = match(C8086Parser::LOGICOP);
      setState(323);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex2 = rel_expression();

      			antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logic_text =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex1->rel_text + antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken->getText() + antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex2->rel_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex2 != nullptr ? (antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex2->stop) : nullptr)->getLine()) + ": logic_expression : rel_expression LOGICOP rel_expression\n");
      			writeIntoparserLogFile(_localctx->logic_text + "\n");
      		 
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_expressionContext ------------------------------------------------------------------

C8086Parser::Rel_expressionContext::Rel_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C8086Parser::Simple_expressionContext *> C8086Parser::Rel_expressionContext::simple_expression() {
  return getRuleContexts<C8086Parser::Simple_expressionContext>();
}

C8086Parser::Simple_expressionContext* C8086Parser::Rel_expressionContext::simple_expression(size_t i) {
  return getRuleContext<C8086Parser::Simple_expressionContext>(i);
}

tree::TerminalNode* C8086Parser::Rel_expressionContext::RELOP() {
  return getToken(C8086Parser::RELOP, 0);
}


size_t C8086Parser::Rel_expressionContext::getRuleIndex() const {
  return C8086Parser::RuleRel_expression;
}

void C8086Parser::Rel_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_expression(this);
}

void C8086Parser::Rel_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_expression(this);
}

C8086Parser::Rel_expressionContext* C8086Parser::rel_expression() {
  Rel_expressionContext *_localctx = _tracker.createInstance<Rel_expressionContext>(_ctx, getState());
  enterRule(_localctx, 42, C8086Parser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex = simple_expression(0);

      		  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->type;
      		  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->rel_text =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->sim_text;
      		  writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex != nullptr ? (antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->stop) : nullptr)->getLine()) + ": rel_expression : simple_expression\n");
      		  writeIntoparserLogFile(_localctx->rel_text + "\n");
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(331);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex1 = simple_expression(0);
      setState(332);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken = match(C8086Parser::RELOP);
      setState(333);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex2 = simple_expression(0);

      		  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->rel_text =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex1->sim_text + antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken->getText() + antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex2->sim_text;
      		  writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex2 != nullptr ? (antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex2->stop) : nullptr)->getLine()) + ": rel_expression : simple_expression RELOP simple_expression\n");
      		  writeIntoparserLogFile(_localctx->rel_text + "\n");
      		
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_expressionContext ------------------------------------------------------------------

C8086Parser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::TermContext* C8086Parser::Simple_expressionContext::term() {
  return getRuleContext<C8086Parser::TermContext>(0);
}

tree::TerminalNode* C8086Parser::Simple_expressionContext::ADDOP() {
  return getToken(C8086Parser::ADDOP, 0);
}

C8086Parser::Simple_expressionContext* C8086Parser::Simple_expressionContext::simple_expression() {
  return getRuleContext<C8086Parser::Simple_expressionContext>(0);
}


size_t C8086Parser::Simple_expressionContext::getRuleIndex() const {
  return C8086Parser::RuleSimple_expression;
}

void C8086Parser::Simple_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimple_expression(this);
}

void C8086Parser::Simple_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimple_expression(this);
}


C8086Parser::Simple_expressionContext* C8086Parser::simple_expression() {
   return simple_expression(0);
}

C8086Parser::Simple_expressionContext* C8086Parser::simple_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, parentState);
  C8086Parser::Simple_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, C8086Parser::RuleSimple_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(339);
    antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

    			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->type;
    			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : term\n");
    			writeIntoparserLogFile(_localctx->sim_text + "\n");
    		  
    _ctx->stop = _input->LT(-1);
    setState(349);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        _localctx->smex = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(342);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(343);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(344);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

                  			if(antlrcpp::downCast<Simple_expressionContext *>(_localctx)->smex->type == "float" || antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->type == "float") antlrcpp::downCast<Simple_expressionContext *>(_localctx)->type = "float";
                  			else antlrcpp::downCast<Simple_expressionContext *>(_localctx)->type =  "int";
                  			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->smex->sim_text + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : simple_expression ADDOP term\n");
                  			writeIntoparserLogFile(_localctx->sim_text + "\n");
                  		   
      }
      setState(351);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

C8086Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Unary_expressionContext* C8086Parser::TermContext::unary_expression() {
  return getRuleContext<C8086Parser::Unary_expressionContext>(0);
}

tree::TerminalNode* C8086Parser::TermContext::MULOP() {
  return getToken(C8086Parser::MULOP, 0);
}

C8086Parser::TermContext* C8086Parser::TermContext::term() {
  return getRuleContext<C8086Parser::TermContext>(0);
}


size_t C8086Parser::TermContext::getRuleIndex() const {
  return C8086Parser::RuleTerm;
}

void C8086Parser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void C8086Parser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


C8086Parser::TermContext* C8086Parser::term() {
   return term(0);
}

C8086Parser::TermContext* C8086Parser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  C8086Parser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, C8086Parser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(353);
    antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

    		antlrcpp::downCast<TermContext *>(_localctx)->type =  antlrcpp::downCast<TermContext *>(_localctx)->unex->type;
    		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : unary_expression\n");
    		writeIntoparserLogFile(_localctx->term_text + "\n");
    	 
    _ctx->stop = _input->LT(-1);
    setState(363);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        _localctx->t = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(356);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(357);
        antlrcpp::downCast<TermContext *>(_localctx)->mulopToken = match(C8086Parser::MULOP);
        setState(358);
        antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

                  		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->t->term_text + antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() + antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : term MULOP unary_expression\n");
                  		if (antlrcpp::downCast<TermContext *>(_localctx)->t->type != "int" || antlrcpp::downCast<TermContext *>(_localctx)->unex->type != "int") {
                  			if (antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%") {
                  				writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Non-Integer operand on modulus operator\n");
                  				writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Non-Integer operand on modulus operator\n");
                  				err_count++;
                  				antlrcpp::downCast<TermContext *>(_localctx)->type =  "int";
                  			}
                  			else{
                  				if(antlrcpp::downCast<TermContext *>(_localctx)->t->type == "void" || antlrcpp::downCast<TermContext *>(_localctx)->unex->type == "void") {
                  					writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Void function used in expression\n");
                  					writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Void function used in expression\n");
                  					err_count++;
                  					if(antlrcpp::downCast<TermContext *>(_localctx)->t->type != "void") antlrcpp::downCast<TermContext *>(_localctx)->type =  antlrcpp::downCast<TermContext *>(_localctx)->t->type;
                  					else if (antlrcpp::downCast<TermContext *>(_localctx)->unex->type != "void") antlrcpp::downCast<TermContext *>(_localctx)->type =  antlrcpp::downCast<TermContext *>(_localctx)->unex->type;
                  					else{
                  						antlrcpp::downCast<TermContext *>(_localctx)->type =  "void";
                  					}
                  				}
                  				else antlrcpp::downCast<TermContext *>(_localctx)->type =  "float";
                  			}
                  		}
                  		if (antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%" && antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text == "0") {
                  			writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Modulus by Zero\n");
                  			writeIntoparserErrorFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Modulus by Zero\n");
                  			err_count++;
                  			antlrcpp::downCast<TermContext *>(_localctx)->type =  antlrcpp::downCast<TermContext *>(_localctx)->t->type;
                  		}
                  		writeIntoparserLogFile(_localctx->term_text + "\n");
                  	  
      }
      setState(365);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

C8086Parser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Unary_expressionContext::ADDOP() {
  return getToken(C8086Parser::ADDOP, 0);
}

C8086Parser::Unary_expressionContext* C8086Parser::Unary_expressionContext::unary_expression() {
  return getRuleContext<C8086Parser::Unary_expressionContext>(0);
}

tree::TerminalNode* C8086Parser::Unary_expressionContext::NOT() {
  return getToken(C8086Parser::NOT, 0);
}

C8086Parser::FactorContext* C8086Parser::Unary_expressionContext::factor() {
  return getRuleContext<C8086Parser::FactorContext>(0);
}


size_t C8086Parser::Unary_expressionContext::getRuleIndex() const {
  return C8086Parser::RuleUnary_expression;
}

void C8086Parser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void C8086Parser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}

C8086Parser::Unary_expressionContext* C8086Parser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 48, C8086Parser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(377);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ADDOP: {
        enterOuterAlt(_localctx, 1);
        setState(366);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(367);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex = unary_expression();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->unex_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": unary_expression : ADDOP unary_expression\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

      case C8086Parser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(370);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->notToken = match(C8086Parser::NOT);
        setState(371);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex = unary_expression();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->notToken->getText() + antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->unex_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": unary_expression : NOT unary_expression\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(374);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext = factor();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext->type;
        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext->fact_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext->stop) : nullptr)->getLine()) + ": unary_expression : factor\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

C8086Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::VariableContext* C8086Parser::FactorContext::variable() {
  return getRuleContext<C8086Parser::VariableContext>(0);
}

tree::TerminalNode* C8086Parser::FactorContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

tree::TerminalNode* C8086Parser::FactorContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

tree::TerminalNode* C8086Parser::FactorContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}

C8086Parser::Argument_listContext* C8086Parser::FactorContext::argument_list() {
  return getRuleContext<C8086Parser::Argument_listContext>(0);
}

C8086Parser::ExpressionContext* C8086Parser::FactorContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}

tree::TerminalNode* C8086Parser::FactorContext::CONST_INT() {
  return getToken(C8086Parser::CONST_INT, 0);
}

tree::TerminalNode* C8086Parser::FactorContext::CONST_FLOAT() {
  return getToken(C8086Parser::CONST_FLOAT, 0);
}

tree::TerminalNode* C8086Parser::FactorContext::INCOP() {
  return getToken(C8086Parser::INCOP, 0);
}

tree::TerminalNode* C8086Parser::FactorContext::DECOP() {
  return getToken(C8086Parser::DECOP, 0);
}


size_t C8086Parser::FactorContext::getRuleIndex() const {
  return C8086Parser::RuleFactor;
}

void C8086Parser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void C8086Parser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

C8086Parser::FactorContext* C8086Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 50, C8086Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(379);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<FactorContext *>(_localctx)->var != nullptr ? (antlrcpp::downCast<FactorContext *>(_localctx)->var->stop) : nullptr)->getLine()) + ": factor : variable\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(382);
      antlrcpp::downCast<FactorContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(383);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(384);
      antlrcpp::downCast<FactorContext *>(_localctx)->al = argument_list();
      setState(385);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->al->arglist_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n");
      		
      		Function* temp = symbolTable->getFunc(antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText());
      		if(temp == NULL) {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": Undefined function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      			writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": Undefined function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      			err_count++;
      			antlrcpp::downCast<FactorContext *>(_localctx)->type =  "Undefined";
      		}
      		else{
      			string suffix="";
      			if(data_type.length() >= 6){
      				suffix = data_type.substr(data_type.length() - 6);
      			}
      			if (suffix != " array") {
      				vector <string> param_list = temp->getParamList();
      				if (argument_types.size() != param_list.size()){
      					writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": Total number of arguments mismatch with declaration in function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      					writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": Total number of arguments mismatch with declaration in function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      					err_count++;
      				}
      				else{
      					for(int i=0;i<param_list.size();i++) {
      						if(argument_types[i] != param_list[i]) {
      							writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": " + to_string(i+1) + "th argument mismatch in function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      							writeIntoparserErrorFile("Error at line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": " + to_string(i+1) + "th argument mismatch in function " + antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + "\n");
      							err_count++;
      							break;
      						}
      					}
      				}
      			}
      			antlrcpp::downCast<FactorContext *>(_localctx)->type =  temp->getReturnType();
      		}

      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      		argument_types.clear();
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(388);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(389);
      antlrcpp::downCast<FactorContext *>(_localctx)->ex = expression();
      setState(390);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : LPAREN expression RPAREN\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(393);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);

      		antlrcpp::downCast<FactorContext *>(_localctx)->type =  "int";
      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_INT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(395);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_FLOAT);

      		antlrcpp::downCast<FactorContext *>(_localctx)->type =  "float";
      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_FLOAT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(397);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(398);
      antlrcpp::downCast<FactorContext *>(_localctx)->incopToken = match(C8086Parser::INCOP);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text + antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getLine()) + ": factor : variable INCOP\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(401);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(402);
      antlrcpp::downCast<FactorContext *>(_localctx)->decopToken = match(C8086Parser::DECOP);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text + antlrcpp::downCast<FactorContext *>(_localctx)->decopToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->decopToken->getLine()) + ": factor : variable DECOP\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

C8086Parser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::ArgumentsContext* C8086Parser::Argument_listContext::arguments() {
  return getRuleContext<C8086Parser::ArgumentsContext>(0);
}


size_t C8086Parser::Argument_listContext::getRuleIndex() const {
  return C8086Parser::RuleArgument_list;
}

void C8086Parser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void C8086Parser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}

C8086Parser::Argument_listContext* C8086Parser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 52, C8086Parser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(407);
        antlrcpp::downCast<Argument_listContext *>(_localctx)->args = arguments(0);

        				antlrcpp::downCast<Argument_listContext *>(_localctx)->arglist_text =  antlrcpp::downCast<Argument_listContext *>(_localctx)->args->arg_text;
        				writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Argument_listContext *>(_localctx)->args != nullptr ? (antlrcpp::downCast<Argument_listContext *>(_localctx)->args->stop) : nullptr)->getLine()) + ": argument_list : arguments\n");
        				writeIntoparserLogFile(_localctx->arglist_text + "\n");
        			  
        break;
      }

      case C8086Parser::RPAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

C8086Parser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C8086Parser::Logic_expressionContext* C8086Parser::ArgumentsContext::logic_expression() {
  return getRuleContext<C8086Parser::Logic_expressionContext>(0);
}

tree::TerminalNode* C8086Parser::ArgumentsContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
}

C8086Parser::ArgumentsContext* C8086Parser::ArgumentsContext::arguments() {
  return getRuleContext<C8086Parser::ArgumentsContext>(0);
}


size_t C8086Parser::ArgumentsContext::getRuleIndex() const {
  return C8086Parser::RuleArguments;
}

void C8086Parser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void C8086Parser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


C8086Parser::ArgumentsContext* C8086Parser::arguments() {
   return arguments(0);
}

C8086Parser::ArgumentsContext* C8086Parser::arguments(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C8086Parser::ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, parentState);
  C8086Parser::ArgumentsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, C8086Parser::RuleArguments, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(414);
    antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

    			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : logic_expression\n");
    			writeIntoparserLogFile(_localctx->arg_text + "\n");

    			argument_types.push_back(antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->type);
    		  
    _ctx->stop = _input->LT(-1);
    setState(424);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentsContext>(parentContext, parentState);
        _localctx->args = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleArguments);
        setState(417);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(418);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken = match(C8086Parser::COMMA);
        setState(419);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

                  			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->args->arg_text + antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken->getText() + antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : arguments COMMA logic_expression\n");
                  			writeIntoparserLogFile(_localctx->arg_text + "\n");

                  			argument_types.push_back(antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->type);
                  		   
      }
      setState(426);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CurlybraceContext ------------------------------------------------------------------

C8086Parser::CurlybraceContext::CurlybraceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::CurlybraceContext::LCURL() {
  return getToken(C8086Parser::LCURL, 0);
}


size_t C8086Parser::CurlybraceContext::getRuleIndex() const {
  return C8086Parser::RuleCurlybrace;
}

void C8086Parser::CurlybraceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCurlybrace(this);
}

void C8086Parser::CurlybraceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCurlybrace(this);
}

C8086Parser::CurlybraceContext* C8086Parser::curlybrace() {
  CurlybraceContext *_localctx = _tracker.createInstance<CurlybraceContext>(_ctx, getState());
  enterRule(_localctx, 56, C8086Parser::RuleCurlybrace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    antlrcpp::downCast<CurlybraceContext *>(_localctx)->lcurlToken = match(C8086Parser::LCURL);

    			antlrcpp::downCast<CurlybraceContext *>(_localctx)->curl_text =  antlrcpp::downCast<CurlybraceContext *>(_localctx)->lcurlToken->getText();
    			if (has_param == 0) {
    				symbolTable->EnterScope();
    			}
    			else {
    				has_param = 0;
    			}
    		
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool C8086Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return programSempred(antlrcpp::downCast<ProgramContext *>(context), predicateIndex);
    case 9: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 14: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 15: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 22: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 23: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 27: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C8086Parser::programSempred(ProgramContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool C8086Parser::parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool C8086Parser::declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool C8086Parser::statementsSempred(StatementsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool C8086Parser::simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool C8086Parser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool C8086Parser::argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void C8086Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c8086parserParserInitialize();
#else
  ::antlr4::internal::call_once(c8086parserParserOnceFlag, c8086parserParserInitialize);
#endif
}
