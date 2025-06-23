
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
      "start", "program", "unit", "func_declaration", "func_definition", 
      "func_name", "parameter_list", "compound_statement", "var_declaration", 
      "declaration_list_err", "type_specifier", "declaration_list", "statements", 
      "statement", "expression_statement", "variable", "expression", "logic_expression", 
      "rel_expression", "simple_expression", "term", "unary_expression", 
      "factor", "argument_list", "arguments", "curlybrace"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'printf'", 
      "'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "';'", "','", "", "", "", "'++'", "'--'", "'!'", "", 
      "", "'='"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
      "FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
      "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
      "ADDOP", "SUBOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", 
      "ASSIGNOP", "ID", "CONST_INT", "CONST_FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,409,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,5,1,64,8,1,10,1,12,1,67,9,1,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,3,2,78,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,3,3,95,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,3,4,112,8,4,1,5,1,5,1,5,3,5,117,8,5,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,3,6,127,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,138,
  	8,6,10,6,12,6,141,9,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,152,8,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,164,8,8,1,9,1,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,3,10,174,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,3,11,184,8,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,5,11,197,8,11,10,11,12,11,200,9,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,5,12,210,8,12,10,12,12,12,213,9,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,3,13,267,8,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	3,14,275,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,285,8,15,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,295,8,16,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,3,17,305,8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,3,18,315,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,
  	19,326,8,19,10,19,12,19,329,9,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,5,20,340,8,20,10,20,12,20,343,9,20,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,3,21,356,8,21,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,384,8,22,1,23,1,23,1,23,1,23,3,
  	23,390,8,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,5,24,401,8,24,
  	10,24,12,24,404,9,24,1,25,1,25,1,25,1,25,0,7,2,12,22,24,38,40,48,26,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	0,0,424,0,52,1,0,0,0,2,55,1,0,0,0,4,77,1,0,0,0,6,94,1,0,0,0,8,111,1,0,
  	0,0,10,116,1,0,0,0,12,126,1,0,0,0,14,151,1,0,0,0,16,163,1,0,0,0,18,165,
  	1,0,0,0,20,173,1,0,0,0,22,183,1,0,0,0,24,201,1,0,0,0,26,266,1,0,0,0,28,
  	274,1,0,0,0,30,284,1,0,0,0,32,294,1,0,0,0,34,304,1,0,0,0,36,314,1,0,0,
  	0,38,316,1,0,0,0,40,330,1,0,0,0,42,355,1,0,0,0,44,383,1,0,0,0,46,389,
  	1,0,0,0,48,391,1,0,0,0,50,405,1,0,0,0,52,53,3,2,1,0,53,54,6,0,-1,0,54,
  	1,1,0,0,0,55,56,6,1,-1,0,56,57,3,4,2,0,57,58,6,1,-1,0,58,65,1,0,0,0,59,
  	60,10,2,0,0,60,61,3,4,2,0,61,62,6,1,-1,0,62,64,1,0,0,0,63,59,1,0,0,0,
  	64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,3,1,0,0,0,67,65,1,0,0,0,
  	68,69,3,16,8,0,69,70,6,2,-1,0,70,78,1,0,0,0,71,72,3,6,3,0,72,73,6,2,-1,
  	0,73,78,1,0,0,0,74,75,3,8,4,0,75,76,6,2,-1,0,76,78,1,0,0,0,77,68,1,0,
  	0,0,77,71,1,0,0,0,77,74,1,0,0,0,78,5,1,0,0,0,79,80,3,20,10,0,80,81,3,
  	10,5,0,81,82,5,14,0,0,82,83,3,12,6,0,83,84,5,15,0,0,84,85,5,20,0,0,85,
  	86,6,3,-1,0,86,95,1,0,0,0,87,88,3,20,10,0,88,89,3,10,5,0,89,90,5,14,0,
  	0,90,91,5,15,0,0,91,92,5,20,0,0,92,93,6,3,-1,0,93,95,1,0,0,0,94,79,1,
  	0,0,0,94,87,1,0,0,0,95,7,1,0,0,0,96,97,3,20,10,0,97,98,3,10,5,0,98,99,
  	5,14,0,0,99,100,3,12,6,0,100,101,5,15,0,0,101,102,3,14,7,0,102,103,6,
  	4,-1,0,103,112,1,0,0,0,104,105,3,20,10,0,105,106,3,10,5,0,106,107,5,14,
  	0,0,107,108,5,15,0,0,108,109,3,14,7,0,109,110,6,4,-1,0,110,112,1,0,0,
  	0,111,96,1,0,0,0,111,104,1,0,0,0,112,9,1,0,0,0,113,114,5,31,0,0,114,117,
  	6,5,-1,0,115,117,1,0,0,0,116,113,1,0,0,0,116,115,1,0,0,0,117,11,1,0,0,
  	0,118,119,6,6,-1,0,119,120,3,20,10,0,120,121,5,31,0,0,121,122,6,6,-1,
  	0,122,127,1,0,0,0,123,124,3,20,10,0,124,125,6,6,-1,0,125,127,1,0,0,0,
  	126,118,1,0,0,0,126,123,1,0,0,0,127,139,1,0,0,0,128,129,10,4,0,0,129,
  	130,5,21,0,0,130,131,3,20,10,0,131,132,5,31,0,0,132,133,6,6,-1,0,133,
  	138,1,0,0,0,134,135,10,3,0,0,135,136,5,21,0,0,136,138,3,20,10,0,137,128,
  	1,0,0,0,137,134,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,
  	0,140,13,1,0,0,0,141,139,1,0,0,0,142,143,3,50,25,0,143,144,3,24,12,0,
  	144,145,5,17,0,0,145,146,6,7,-1,0,146,152,1,0,0,0,147,148,3,50,25,0,148,
  	149,5,17,0,0,149,150,6,7,-1,0,150,152,1,0,0,0,151,142,1,0,0,0,151,147,
  	1,0,0,0,152,15,1,0,0,0,153,154,3,20,10,0,154,155,3,22,11,0,155,156,5,
  	20,0,0,156,157,6,8,-1,0,157,164,1,0,0,0,158,159,3,20,10,0,159,160,3,18,
  	9,0,160,161,5,20,0,0,161,162,6,8,-1,0,162,164,1,0,0,0,163,153,1,0,0,0,
  	163,158,1,0,0,0,164,17,1,0,0,0,165,166,6,9,-1,0,166,19,1,0,0,0,167,168,
  	5,11,0,0,168,174,6,10,-1,0,169,170,5,12,0,0,170,174,6,10,-1,0,171,172,
  	5,13,0,0,172,174,6,10,-1,0,173,167,1,0,0,0,173,169,1,0,0,0,173,171,1,
  	0,0,0,174,21,1,0,0,0,175,176,6,11,-1,0,176,177,5,31,0,0,177,184,6,11,
  	-1,0,178,179,5,31,0,0,179,180,5,18,0,0,180,181,5,32,0,0,181,182,5,19,
  	0,0,182,184,6,11,-1,0,183,175,1,0,0,0,183,178,1,0,0,0,184,198,1,0,0,0,
  	185,186,10,4,0,0,186,187,5,21,0,0,187,188,5,31,0,0,188,197,6,11,-1,0,
  	189,190,10,3,0,0,190,191,5,21,0,0,191,192,5,31,0,0,192,193,5,18,0,0,193,
  	194,5,32,0,0,194,195,5,19,0,0,195,197,6,11,-1,0,196,185,1,0,0,0,196,189,
  	1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,0,199,23,1,0,0,
  	0,200,198,1,0,0,0,201,202,6,12,-1,0,202,203,3,26,13,0,203,204,6,12,-1,
  	0,204,211,1,0,0,0,205,206,10,1,0,0,206,207,3,26,13,0,207,208,6,12,-1,
  	0,208,210,1,0,0,0,209,205,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,
  	212,1,0,0,0,212,25,1,0,0,0,213,211,1,0,0,0,214,215,3,16,8,0,215,216,6,
  	13,-1,0,216,267,1,0,0,0,217,218,3,28,14,0,218,219,6,13,-1,0,219,267,1,
  	0,0,0,220,221,3,14,7,0,221,222,6,13,-1,0,222,267,1,0,0,0,223,224,5,7,
  	0,0,224,225,5,14,0,0,225,226,3,28,14,0,226,227,3,28,14,0,227,228,3,32,
  	16,0,228,229,5,15,0,0,229,230,3,26,13,0,230,231,6,13,-1,0,231,267,1,0,
  	0,0,232,233,5,5,0,0,233,234,5,14,0,0,234,235,3,32,16,0,235,236,5,15,0,
  	0,236,237,3,26,13,0,237,238,6,13,-1,0,238,267,1,0,0,0,239,240,5,5,0,0,
  	240,241,5,14,0,0,241,242,3,32,16,0,242,243,5,15,0,0,243,244,3,26,13,0,
  	244,245,5,6,0,0,245,246,3,26,13,0,246,247,6,13,-1,0,247,267,1,0,0,0,248,
  	249,5,8,0,0,249,250,5,14,0,0,250,251,3,32,16,0,251,252,5,15,0,0,252,253,
  	3,26,13,0,253,254,6,13,-1,0,254,267,1,0,0,0,255,256,5,9,0,0,256,257,5,
  	14,0,0,257,258,5,31,0,0,258,259,5,15,0,0,259,260,5,20,0,0,260,267,6,13,
  	-1,0,261,262,5,10,0,0,262,263,3,32,16,0,263,264,5,20,0,0,264,265,6,13,
  	-1,0,265,267,1,0,0,0,266,214,1,0,0,0,266,217,1,0,0,0,266,220,1,0,0,0,
  	266,223,1,0,0,0,266,232,1,0,0,0,266,239,1,0,0,0,266,248,1,0,0,0,266,255,
  	1,0,0,0,266,261,1,0,0,0,267,27,1,0,0,0,268,269,5,20,0,0,269,275,6,14,
  	-1,0,270,271,3,32,16,0,271,272,5,20,0,0,272,273,6,14,-1,0,273,275,1,0,
  	0,0,274,268,1,0,0,0,274,270,1,0,0,0,275,29,1,0,0,0,276,277,5,31,0,0,277,
  	285,6,15,-1,0,278,279,5,31,0,0,279,280,5,18,0,0,280,281,3,32,16,0,281,
  	282,5,19,0,0,282,283,6,15,-1,0,283,285,1,0,0,0,284,276,1,0,0,0,284,278,
  	1,0,0,0,285,31,1,0,0,0,286,287,3,34,17,0,287,288,6,16,-1,0,288,295,1,
  	0,0,0,289,290,3,30,15,0,290,291,5,30,0,0,291,292,3,34,17,0,292,293,6,
  	16,-1,0,293,295,1,0,0,0,294,286,1,0,0,0,294,289,1,0,0,0,295,33,1,0,0,
  	0,296,297,3,36,18,0,297,298,6,17,-1,0,298,305,1,0,0,0,299,300,3,36,18,
  	0,300,301,5,29,0,0,301,302,3,36,18,0,302,303,6,17,-1,0,303,305,1,0,0,
  	0,304,296,1,0,0,0,304,299,1,0,0,0,305,35,1,0,0,0,306,307,3,38,19,0,307,
  	308,6,18,-1,0,308,315,1,0,0,0,309,310,3,38,19,0,310,311,5,28,0,0,311,
  	312,3,38,19,0,312,313,6,18,-1,0,313,315,1,0,0,0,314,306,1,0,0,0,314,309,
  	1,0,0,0,315,37,1,0,0,0,316,317,6,19,-1,0,317,318,3,40,20,0,318,319,6,
  	19,-1,0,319,327,1,0,0,0,320,321,10,1,0,0,321,322,5,22,0,0,322,323,3,40,
  	20,0,323,324,6,19,-1,0,324,326,1,0,0,0,325,320,1,0,0,0,326,329,1,0,0,
  	0,327,325,1,0,0,0,327,328,1,0,0,0,328,39,1,0,0,0,329,327,1,0,0,0,330,
  	331,6,20,-1,0,331,332,3,42,21,0,332,333,6,20,-1,0,333,341,1,0,0,0,334,
  	335,10,1,0,0,335,336,5,24,0,0,336,337,3,42,21,0,337,338,6,20,-1,0,338,
  	340,1,0,0,0,339,334,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,341,342,1,
  	0,0,0,342,41,1,0,0,0,343,341,1,0,0,0,344,345,5,22,0,0,345,346,3,42,21,
  	0,346,347,6,21,-1,0,347,356,1,0,0,0,348,349,5,27,0,0,349,350,3,42,21,
  	0,350,351,6,21,-1,0,351,356,1,0,0,0,352,353,3,44,22,0,353,354,6,21,-1,
  	0,354,356,1,0,0,0,355,344,1,0,0,0,355,348,1,0,0,0,355,352,1,0,0,0,356,
  	43,1,0,0,0,357,358,3,30,15,0,358,359,6,22,-1,0,359,384,1,0,0,0,360,361,
  	5,31,0,0,361,362,5,14,0,0,362,363,3,46,23,0,363,364,5,15,0,0,364,365,
  	6,22,-1,0,365,384,1,0,0,0,366,367,5,14,0,0,367,368,3,32,16,0,368,369,
  	5,15,0,0,369,370,6,22,-1,0,370,384,1,0,0,0,371,372,5,32,0,0,372,384,6,
  	22,-1,0,373,374,5,33,0,0,374,384,6,22,-1,0,375,376,3,30,15,0,376,377,
  	5,25,0,0,377,378,6,22,-1,0,378,384,1,0,0,0,379,380,3,30,15,0,380,381,
  	5,26,0,0,381,382,6,22,-1,0,382,384,1,0,0,0,383,357,1,0,0,0,383,360,1,
  	0,0,0,383,366,1,0,0,0,383,371,1,0,0,0,383,373,1,0,0,0,383,375,1,0,0,0,
  	383,379,1,0,0,0,384,45,1,0,0,0,385,386,3,48,24,0,386,387,6,23,-1,0,387,
  	390,1,0,0,0,388,390,1,0,0,0,389,385,1,0,0,0,389,388,1,0,0,0,390,47,1,
  	0,0,0,391,392,6,24,-1,0,392,393,3,34,17,0,393,394,6,24,-1,0,394,402,1,
  	0,0,0,395,396,10,2,0,0,396,397,5,21,0,0,397,398,3,34,17,0,398,399,6,24,
  	-1,0,399,401,1,0,0,0,400,395,1,0,0,0,401,404,1,0,0,0,402,400,1,0,0,0,
  	402,403,1,0,0,0,403,49,1,0,0,0,404,402,1,0,0,0,405,406,5,16,0,0,406,407,
  	6,25,-1,0,407,51,1,0,0,0,27,65,77,94,111,116,126,137,139,151,163,173,
  	183,196,198,211,266,274,284,294,304,314,327,341,355,383,389,402
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
    setState(52);
    antlrcpp::downCast<StartContext *>(_localctx)->pg = program(0);

            writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StartContext *>(_localctx)->pg != nullptr ? (antlrcpp::downCast<StartContext *>(_localctx)->pg->stop) : nullptr)->getLine()) + ": start : program");
    		symbolTable->print_all_scope_nonempty_indices(parserLogFile);
    		writeIntoparserLogFile("Total lines: " + to_string((antlrcpp::downCast<StartContext *>(_localctx)->pg != nullptr ? (antlrcpp::downCast<StartContext *>(_localctx)->pg->stop) : nullptr)->getLine()));
    		writeIntoparserLogFile("Total errors: " + to_string(err_count) + "\n");
    	
   
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
    setState(56);
    antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

    		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text;
    		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : unit\n");
    		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text + "\n\n");
    	
    _ctx->stop = _input->LT(-1);
    setState(65);
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
        setState(59);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(60);
        antlrcpp::downCast<ProgramContext *>(_localctx)->un = antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

                  		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text;
                  		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : program unit\n");
                  		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text + "\n\n");
                  	 
      }
      setState(67);
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
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      antlrcpp::downCast<UnitContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": unit : var_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text + "\n");
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      antlrcpp::downCast<UnitContext *>(_localctx)->fd = func_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text;
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fd->stop) : nullptr)->getLine()) + ": unit : func_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text + "\n");
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      antlrcpp::downCast<UnitContext *>(_localctx)->fdef = func_definition();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text + "\n";
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fdef != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fdef->stop) : nullptr)->getLine()) + ": unit : func_definition\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text + "\n\n");
      	 
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

C8086Parser::Func_nameContext* C8086Parser::Func_declarationContext::func_name() {
  return getRuleContext<C8086Parser::Func_nameContext>(0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_declarationContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
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
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(80);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn = func_name();
      setState(81);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(82);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm = parameter_list(0);
      setState(83);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(84);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text + "\n");

      			symbolTable->ExitScope();
      			SymbolInfo* temp = symbolTable->LookUp(antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text);
      			temp->setReturnType(antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line);
      			temp_func->clearParamList();
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(88);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn = func_name();
      setState(89);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(90);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(91);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text + "\n");

      			symbolTable->ExitScope();
      			SymbolInfo* temp = symbolTable->LookUp(antlrcpp::downCast<Func_declarationContext *>(_localctx)->fn->func_name_text);
      			temp->setReturnType(antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line);
      			temp_func->clearParamList();
      		
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

//----------------- Func_definitionContext ------------------------------------------------------------------

C8086Parser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Func_definitionContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

tree::TerminalNode* C8086Parser::Func_definitionContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}

C8086Parser::Type_specifierContext* C8086Parser::Func_definitionContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}

C8086Parser::Func_nameContext* C8086Parser::Func_definitionContext::func_name() {
  return getRuleContext<C8086Parser::Func_nameContext>(0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_definitionContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
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
  enterRule(_localctx, 8, C8086Parser::RuleFunc_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = type_specifier();
      setState(97);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn = func_name();
      setState(98);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(99);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm = parameter_list(0);
      setState(100);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(101);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n");
      			writeIntoparserLogFile(_localctx->func_def_text + "\n");
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = type_specifier();
      setState(105);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn = func_name();
      setState(106);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(107);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(108);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->fn->func_name_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n");
      			writeIntoparserLogFile(_localctx->func_def_text + "\n");
      		
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
  enterRule(_localctx, 10, C8086Parser::RuleFunc_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(113);
        antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken = match(C8086Parser::ID);

        			symbolTable->insert(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText(),"func",temp_func);
        			symbolTable->EnterScope();
        			has_param = 1;
        			antlrcpp::downCast<Func_nameContext *>(_localctx)->func_name_text =  antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText();
        			writeIntoparserLogFile("Hello\n");
        		
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, C8086Parser::RuleParameter_list, precedence);

    

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
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(119);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
      setState(120);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : type_specifier ID\n");
      			writeIntoparserLogFile(_localctx->param_text + "\n");
      			
      			bool inserted = symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
      			if (!inserted) {
      				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + "\n");
      				err_count++;
      			}
      			temp_func->addToParamList(antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
      		
      break;
    }

    case 2: {
      setState(123);
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
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(137);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          _localctx->pm = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(128);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(129);
          match(C8086Parser::COMMA);
          setState(130);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
          setState(131);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			bool inserted = symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);
                    			if (!inserted) {
                    				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText() + " in parameter\n");
                    				err_count++;
                    			}
                    			temp_func->addToParamList(antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line);

                    			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->pm->param_text + "," + antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n");
                    			writeIntoparserLogFile(_localctx->param_text + "\n");
                    		
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(134);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(135);
          match(C8086Parser::COMMA);
          setState(136);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(141);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
  enterRule(_localctx, 14, C8086Parser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->c = curlybrace();
      setState(143);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts = statements(0);
      setState(144);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken = match(C8086Parser::RCURL);

      				antlrcpp::downCast<Compound_statementContext *>(_localctx)->cmst_text =  antlrcpp::downCast<Compound_statementContext *>(_localctx)->c->curl_text + "\n" + antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts->stmts_text + antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getText();
      				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getLine()) + ": compound_statement : LCURL statements RCURL\n");
      				writeIntoparserLogFile(_localctx->cmst_text + "\n");

      				symbolTable->print_all_scope_nonempty_indices(parserLogFile);
      				symbolTable->ExitScope();
      			
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(147);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->c = curlybrace();
      setState(148);
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
  enterRule(_localctx, 16, C8086Parser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(154);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl = declaration_list(0);
      setState(155);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);

        		antlrcpp::downCast<Var_declarationContext *>(_localctx)->var_text =  antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";";
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n");
      		if (antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line == "void") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": Variable type cannot be void\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";\n");
            
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(158);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(159);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->de = declaration_list_err();
      setState(160);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);

              writeIntoErrorFile(
                  std::string("Line# ") + std::to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) +
                  " with error name: " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->de->error_name +
                  " - Syntax error at declaration list of variable declaration"
              );

              syntaxErrorCount++;
            
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
  enterRule(_localctx, 18, C8086Parser::RuleDeclaration_list_err);

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
  enterRule(_localctx, 20, C8086Parser::RuleType_specifier);

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
    switch (_input->LA(1)) {
      case C8086Parser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken = match(C8086Parser::INT);

        			data_type = "int";
        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getLine()) + ": type_specifier : INT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(169);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken = match(C8086Parser::FLOAT);

        			data_type = "float";
        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getLine()) + ": type_specifier : FLOAT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(171);
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
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, C8086Parser::RuleDeclaration_list, precedence);

    

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
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(176);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type);
      			if(!inserted) {
      				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
      				err_count++;
      			}
      			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": declaration_list : ID\n");
      			writeIntoparserLogFile(_localctx->dl_list + "\n");
       		  
      break;
    }

    case 2: {
      setState(178);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(179);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(180);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);
      setState(181);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type + " array");
      			if(!inserted) {
      				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
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
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(196);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          _localctx->dl = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(185);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(186);
          match(C8086Parser::COMMA);
          setState(187);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type);
                    			if(!inserted) {
                    				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
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
          setState(189);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(190);
          match(C8086Parser::COMMA);
          setState(191);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
          setState(192);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
          setState(193);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);
          setState(194);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

                    			bool inserted = symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),data_type + " array");
                    			if(!inserted) {
                    				writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": Multiple declaration of " + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + "\n");
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
      setState(200);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, C8086Parser::RuleStatements, precedence);

    

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
    setState(202);
    antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

    		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text + "\n";
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statement\n");
    		writeIntoparserLogFile(_localctx->stmts_text + "\n");
    	   
    _ctx->stop = _input->LT(-1);
    setState(211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementsContext>(parentContext, parentState);
        _localctx->stmts = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleStatements);
        setState(205);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(206);
        antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

                  		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->stmts->stmts_text + antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text + "\n";
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statements statement\n");
                  		writeIntoparserLogFile(_localctx->stmts_text + "\n");
                  	    
      }
      setState(213);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  enterRule(_localctx, 26, C8086Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(214);
      antlrcpp::downCast<StatementContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": statement : var_declaration\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(217);
      antlrcpp::downCast<StatementContext *>(_localctx)->exst = expression_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->exst->expr_stmt_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->exst != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->exst->stop) : nullptr)->getLine()) + ": statement : expression_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(220);
      antlrcpp::downCast<StatementContext *>(_localctx)->cs = compound_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->cs->cmst_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->cs != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->cs->stop) : nullptr)->getLine()) + ": statement : compound_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(223);
      antlrcpp::downCast<StatementContext *>(_localctx)->forToken = match(C8086Parser::FOR);
      setState(224);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(225);
      antlrcpp::downCast<StatementContext *>(_localctx)->es1 = expression_statement();
      setState(226);
      antlrcpp::downCast<StatementContext *>(_localctx)->es2 = expression_statement();
      setState(227);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(228);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(229);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->forToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->es1->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->es2->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(232);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(233);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(234);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(235);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(236);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(239);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(240);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(241);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(242);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(243);
      antlrcpp::downCast<StatementContext *>(_localctx)->st1 = statement();
      setState(244);
      antlrcpp::downCast<StatementContext *>(_localctx)->elseToken = match(C8086Parser::ELSE);
      setState(245);
      antlrcpp::downCast<StatementContext *>(_localctx)->st2 = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st1->st_text + "\n" + antlrcpp::downCast<StatementContext *>(_localctx)->elseToken->getText() + "\n" + antlrcpp::downCast<StatementContext *>(_localctx)->st2->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st2 != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st2->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(248);
      antlrcpp::downCast<StatementContext *>(_localctx)->whileToken = match(C8086Parser::WHILE);
      setState(249);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(250);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(251);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(252);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->whileToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(255);
      antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken = match(C8086Parser::PRINTLN);
      setState(256);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(257);
      antlrcpp::downCast<StatementContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(258);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(259);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n");
      		SymbolInfo* temp = symbolTable->LookUp(antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText());
      		if (temp == NULL) {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + "\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(261);
      antlrcpp::downCast<StatementContext *>(_localctx)->returnToken = match(C8086Parser::RETURN);
      setState(262);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression();
      setState(263);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->returnToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->expr->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": statement : RETURN expression SEMICOLON\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
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
  enterRule(_localctx, 28, C8086Parser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(268);
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
        setState(270);
        antlrcpp::downCast<Expression_statementContext *>(_localctx)->exp = expression();
        setState(271);
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
  enterRule(_localctx, 30, C8086Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		data_type = symbolTable->getType(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      		type2 = data_type;
      		string suffix="";
      		if(data_type.length() >= 5){
      			suffix = data_type.substr(data_type.length() - 5);
      		}
      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": variable : ID\n");
      		if(data_type == "") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Undeclared variable " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + "\n");
      			err_count++;
      		}
      		else if (suffix == "array") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": Type mismatch, " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " is an array\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->var_text + "\n");
      	 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(279);
      antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(280);
      antlrcpp::downCast<VariableContext *>(_localctx)->ex = expression();
      setState(281);
      antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      		data_type = symbolTable->getType(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getText();
      		string suffix="";
      		if(data_type.length() >= 5){
      			suffix = data_type.substr(data_type.length() - 5);
      		}
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n");
      		if (suffix != "array") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": " + antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + " not an array\n");
      			err_count++;
      		}
      		if (type2 != "int") {
      			writeIntoparserLogFile("Error at line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": Expression inside third brackets not an integer\n");
      			err_count++;
      		}
      		writeIntoparserLogFile(_localctx->var_text + "\n");
      	 
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
  enterRule(_localctx, 32, C8086Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(286);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : logic expression\n");
      		 writeIntoparserLogFile(_localctx->expr_text + "\n");
      	   
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(289);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->var = variable();
      setState(290);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken = match(C8086Parser::ASSIGNOP);
      setState(291);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->var->var_text + antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken->getText() + antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : variable ASSIGNOP logic_expression\n");
      		 string element_type = data_type.substr(0, data_type.find(' '));
      		 if (data_type != ""){
      			if (element_type != type2) {
      				if (data_type == "float" && type2 == "int") {
      				}
      				else{
      					writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": Type Mismatch\n");
      					err_count++;
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
  enterRule(_localctx, 34, C8086Parser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex = rel_expression();

      			antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logic_text =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->rel_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex != nullptr ? (antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->stop) : nullptr)->getLine()) + ": logic_expression : rel_expression\n");
      			writeIntoparserLogFile(_localctx->logic_text + "\n");
      		 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(299);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex1 = rel_expression();
      setState(300);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken = match(C8086Parser::LOGICOP);
      setState(301);
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
  enterRule(_localctx, 36, C8086Parser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(306);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex = simple_expression(0);

      		  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->rel_text =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->sim_text;
      		  writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex != nullptr ? (antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->stop) : nullptr)->getLine()) + ": rel_expression : simple_expression\n");
      		  writeIntoparserLogFile(_localctx->rel_text + "\n");
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(309);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex1 = simple_expression(0);
      setState(310);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken = match(C8086Parser::RELOP);
      setState(311);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, C8086Parser::RuleSimple_expression, precedence);

    

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
    setState(317);
    antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

    			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : term\n");
    			writeIntoparserLogFile(_localctx->sim_text + "\n");
    		  
    _ctx->stop = _input->LT(-1);
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        _localctx->smex = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(320);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(321);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(322);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

                  			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->smex->sim_text + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : simple_expression ADDOP term\n");
                  			writeIntoparserLogFile(_localctx->sim_text + "\n");
                  		   
      }
      setState(329);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, C8086Parser::RuleTerm, precedence);

    

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
    setState(331);
    antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

    		type1 = type2;
    		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : unary_expression\n");
    		writeIntoparserLogFile(_localctx->term_text + "\n");
    	 
    _ctx->stop = _input->LT(-1);
    setState(341);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        _localctx->t = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(334);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(335);
        antlrcpp::downCast<TermContext *>(_localctx)->mulopToken = match(C8086Parser::MULOP);
        setState(336);
        antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

                  		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->t->term_text + antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() + antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : term MULOP unary_expression\n");
                  		if (type1 != "int" || type2 != "int") {
                  			if (antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%") {
                  				writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Non-Integer operand on modulus operator\n");
                  				err_count++;
                  				type2 = "int";
                  			}
                  			else{
                  				type1 = "float";
                  				type2 = "float";
                  			}
                  		}
                  		if (antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%" && antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text == "0") {
                  			writeIntoparserLogFile("Error at line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": Modulus by Zero\n");
                  			err_count++;
                  		}
                  		writeIntoparserLogFile(_localctx->term_text + "\n");
                  	  
      }
      setState(343);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
  enterRule(_localctx, 42, C8086Parser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(355);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ADDOP: {
        enterOuterAlt(_localctx, 1);
        setState(344);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(345);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex = unary_expression();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->unex_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": unary_expression : ADDOP unary_expression\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

      case C8086Parser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(348);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->notToken = match(C8086Parser::NOT);
        setState(349);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex = unary_expression();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->notToken->getText() + antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->unex_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": unary_expression : NOT unary expression\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(352);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->factorContext = factor();

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
  enterRule(_localctx, 44, C8086Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(357);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<FactorContext *>(_localctx)->var != nullptr ? (antlrcpp::downCast<FactorContext *>(_localctx)->var->stop) : nullptr)->getLine()) + ": factor : variable\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(360);
      antlrcpp::downCast<FactorContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(361);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(362);
      antlrcpp::downCast<FactorContext *>(_localctx)->al = argument_list();
      setState(363);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->al->arglist_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(366);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(367);
      antlrcpp::downCast<FactorContext *>(_localctx)->ex = expression();
      setState(368);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : LPAREN expression RPAREN\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(371);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);

      		type2 = "int";
      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_INT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(373);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_FLOAT);

      		type2 = "float";
      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText() + "0";
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_FLOAT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(375);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(376);
      antlrcpp::downCast<FactorContext *>(_localctx)->incopToken = match(C8086Parser::INCOP);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text + antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getLine()) + ": factor : variable INCOP\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(379);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(380);
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
  enterRule(_localctx, 46, C8086Parser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(389);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(385);
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
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, C8086Parser::RuleArguments, precedence);

    

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
    setState(392);
    antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

    			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : logic_expression\n");
    			writeIntoparserLogFile(_localctx->arg_text + "\n");
    		  
    _ctx->stop = _input->LT(-1);
    setState(402);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentsContext>(parentContext, parentState);
        _localctx->args = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleArguments);
        setState(395);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(396);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken = match(C8086Parser::COMMA);
        setState(397);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

                  			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->args->arg_text + antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken->getText() + antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : arguments COMMA logic_expression\n");
                  			writeIntoparserLogFile(_localctx->arg_text + "\n");
                  		   
      }
      setState(404);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
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
  enterRule(_localctx, 50, C8086Parser::RuleCurlybrace);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
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
    case 6: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 11: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 12: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 19: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 20: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 24: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

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
