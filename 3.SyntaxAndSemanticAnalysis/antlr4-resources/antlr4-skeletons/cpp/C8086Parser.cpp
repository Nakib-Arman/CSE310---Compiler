
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <cstdlib>
    #include "C8086Lexer.h"

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
      "parameter_list", "compound_statement", "var_declaration", "declaration_list_err", 
      "type_specifier", "declaration_list", "statements", "statement", "expression_statement", 
      "variable", "expression", "logic_expression", "rel_expression", "simple_expression", 
      "term", "unary_expression", "factor", "argument_list", "arguments"
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
  	4,1,33,395,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,
  	1,60,8,1,10,1,12,1,63,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,74,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,91,
  	8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,108,
  	8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,118,8,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,5,5,129,8,5,10,5,12,5,132,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,3,6,141,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,153,8,7,1,8,
  	1,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,163,8,9,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,3,10,173,8,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,5,10,186,8,10,10,10,12,10,189,9,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,5,11,199,8,11,10,11,12,11,202,9,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,256,8,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,3,13,264,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,274,8,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,284,8,15,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,3,16,294,8,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,3,17,304,8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,5,18,315,8,18,10,18,12,18,318,9,18,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,5,19,329,8,19,10,19,12,19,332,9,19,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,345,8,20,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,373,8,21,1,22,1,22,1,22,1,
  	22,3,22,379,8,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,5,23,390,
  	8,23,10,23,12,23,393,9,23,1,23,0,7,2,10,20,22,36,38,46,24,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,0,0,411,0,48,1,
  	0,0,0,2,51,1,0,0,0,4,73,1,0,0,0,6,90,1,0,0,0,8,107,1,0,0,0,10,117,1,0,
  	0,0,12,140,1,0,0,0,14,152,1,0,0,0,16,154,1,0,0,0,18,162,1,0,0,0,20,172,
  	1,0,0,0,22,190,1,0,0,0,24,255,1,0,0,0,26,263,1,0,0,0,28,273,1,0,0,0,30,
  	283,1,0,0,0,32,293,1,0,0,0,34,303,1,0,0,0,36,305,1,0,0,0,38,319,1,0,0,
  	0,40,344,1,0,0,0,42,372,1,0,0,0,44,378,1,0,0,0,46,380,1,0,0,0,48,49,3,
  	2,1,0,49,50,6,0,-1,0,50,1,1,0,0,0,51,52,6,1,-1,0,52,53,3,4,2,0,53,54,
  	6,1,-1,0,54,61,1,0,0,0,55,56,10,2,0,0,56,57,3,4,2,0,57,58,6,1,-1,0,58,
  	60,1,0,0,0,59,55,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,
  	3,1,0,0,0,63,61,1,0,0,0,64,65,3,14,7,0,65,66,6,2,-1,0,66,74,1,0,0,0,67,
  	68,3,6,3,0,68,69,6,2,-1,0,69,74,1,0,0,0,70,71,3,8,4,0,71,72,6,2,-1,0,
  	72,74,1,0,0,0,73,64,1,0,0,0,73,67,1,0,0,0,73,70,1,0,0,0,74,5,1,0,0,0,
  	75,76,3,18,9,0,76,77,5,31,0,0,77,78,5,14,0,0,78,79,3,10,5,0,79,80,5,15,
  	0,0,80,81,5,20,0,0,81,82,6,3,-1,0,82,91,1,0,0,0,83,84,3,18,9,0,84,85,
  	5,31,0,0,85,86,5,14,0,0,86,87,5,15,0,0,87,88,5,20,0,0,88,89,6,3,-1,0,
  	89,91,1,0,0,0,90,75,1,0,0,0,90,83,1,0,0,0,91,7,1,0,0,0,92,93,3,18,9,0,
  	93,94,5,31,0,0,94,95,5,14,0,0,95,96,3,10,5,0,96,97,5,15,0,0,97,98,3,12,
  	6,0,98,99,6,4,-1,0,99,108,1,0,0,0,100,101,3,18,9,0,101,102,5,31,0,0,102,
  	103,5,14,0,0,103,104,5,15,0,0,104,105,3,12,6,0,105,106,6,4,-1,0,106,108,
  	1,0,0,0,107,92,1,0,0,0,107,100,1,0,0,0,108,9,1,0,0,0,109,110,6,5,-1,0,
  	110,111,3,18,9,0,111,112,5,31,0,0,112,113,6,5,-1,0,113,118,1,0,0,0,114,
  	115,3,18,9,0,115,116,6,5,-1,0,116,118,1,0,0,0,117,109,1,0,0,0,117,114,
  	1,0,0,0,118,130,1,0,0,0,119,120,10,4,0,0,120,121,5,21,0,0,121,122,3,18,
  	9,0,122,123,5,31,0,0,123,124,6,5,-1,0,124,129,1,0,0,0,125,126,10,3,0,
  	0,126,127,5,21,0,0,127,129,3,18,9,0,128,119,1,0,0,0,128,125,1,0,0,0,129,
  	132,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,11,1,0,0,0,132,130,1,
  	0,0,0,133,134,5,16,0,0,134,135,3,22,11,0,135,136,5,17,0,0,136,137,6,6,
  	-1,0,137,141,1,0,0,0,138,139,5,16,0,0,139,141,5,17,0,0,140,133,1,0,0,
  	0,140,138,1,0,0,0,141,13,1,0,0,0,142,143,3,18,9,0,143,144,3,20,10,0,144,
  	145,5,20,0,0,145,146,6,7,-1,0,146,153,1,0,0,0,147,148,3,18,9,0,148,149,
  	3,16,8,0,149,150,5,20,0,0,150,151,6,7,-1,0,151,153,1,0,0,0,152,142,1,
  	0,0,0,152,147,1,0,0,0,153,15,1,0,0,0,154,155,6,8,-1,0,155,17,1,0,0,0,
  	156,157,5,11,0,0,157,163,6,9,-1,0,158,159,5,12,0,0,159,163,6,9,-1,0,160,
  	161,5,13,0,0,161,163,6,9,-1,0,162,156,1,0,0,0,162,158,1,0,0,0,162,160,
  	1,0,0,0,163,19,1,0,0,0,164,165,6,10,-1,0,165,166,5,31,0,0,166,173,6,10,
  	-1,0,167,168,5,31,0,0,168,169,5,18,0,0,169,170,5,32,0,0,170,171,5,19,
  	0,0,171,173,6,10,-1,0,172,164,1,0,0,0,172,167,1,0,0,0,173,187,1,0,0,0,
  	174,175,10,4,0,0,175,176,5,21,0,0,176,177,5,31,0,0,177,186,6,10,-1,0,
  	178,179,10,3,0,0,179,180,5,21,0,0,180,181,5,31,0,0,181,182,5,18,0,0,182,
  	183,5,32,0,0,183,184,5,19,0,0,184,186,6,10,-1,0,185,174,1,0,0,0,185,178,
  	1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,21,1,0,0,
  	0,189,187,1,0,0,0,190,191,6,11,-1,0,191,192,3,24,12,0,192,193,6,11,-1,
  	0,193,200,1,0,0,0,194,195,10,1,0,0,195,196,3,24,12,0,196,197,6,11,-1,
  	0,197,199,1,0,0,0,198,194,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,
  	201,1,0,0,0,201,23,1,0,0,0,202,200,1,0,0,0,203,204,3,14,7,0,204,205,6,
  	12,-1,0,205,256,1,0,0,0,206,207,3,26,13,0,207,208,6,12,-1,0,208,256,1,
  	0,0,0,209,210,3,12,6,0,210,211,6,12,-1,0,211,256,1,0,0,0,212,213,5,7,
  	0,0,213,214,5,14,0,0,214,215,3,26,13,0,215,216,3,26,13,0,216,217,3,30,
  	15,0,217,218,5,15,0,0,218,219,3,24,12,0,219,220,6,12,-1,0,220,256,1,0,
  	0,0,221,222,5,5,0,0,222,223,5,14,0,0,223,224,3,30,15,0,224,225,5,15,0,
  	0,225,226,3,24,12,0,226,227,6,12,-1,0,227,256,1,0,0,0,228,229,5,5,0,0,
  	229,230,5,14,0,0,230,231,3,30,15,0,231,232,5,15,0,0,232,233,3,24,12,0,
  	233,234,5,6,0,0,234,235,3,24,12,0,235,236,6,12,-1,0,236,256,1,0,0,0,237,
  	238,5,8,0,0,238,239,5,14,0,0,239,240,3,30,15,0,240,241,5,15,0,0,241,242,
  	3,24,12,0,242,243,6,12,-1,0,243,256,1,0,0,0,244,245,5,9,0,0,245,246,5,
  	14,0,0,246,247,5,31,0,0,247,248,5,15,0,0,248,249,5,20,0,0,249,256,6,12,
  	-1,0,250,251,5,10,0,0,251,252,3,30,15,0,252,253,5,20,0,0,253,254,6,12,
  	-1,0,254,256,1,0,0,0,255,203,1,0,0,0,255,206,1,0,0,0,255,209,1,0,0,0,
  	255,212,1,0,0,0,255,221,1,0,0,0,255,228,1,0,0,0,255,237,1,0,0,0,255,244,
  	1,0,0,0,255,250,1,0,0,0,256,25,1,0,0,0,257,258,5,20,0,0,258,264,6,13,
  	-1,0,259,260,3,30,15,0,260,261,5,20,0,0,261,262,6,13,-1,0,262,264,1,0,
  	0,0,263,257,1,0,0,0,263,259,1,0,0,0,264,27,1,0,0,0,265,266,5,31,0,0,266,
  	274,6,14,-1,0,267,268,5,31,0,0,268,269,5,18,0,0,269,270,3,30,15,0,270,
  	271,5,19,0,0,271,272,6,14,-1,0,272,274,1,0,0,0,273,265,1,0,0,0,273,267,
  	1,0,0,0,274,29,1,0,0,0,275,276,3,32,16,0,276,277,6,15,-1,0,277,284,1,
  	0,0,0,278,279,3,28,14,0,279,280,5,30,0,0,280,281,3,32,16,0,281,282,6,
  	15,-1,0,282,284,1,0,0,0,283,275,1,0,0,0,283,278,1,0,0,0,284,31,1,0,0,
  	0,285,286,3,34,17,0,286,287,6,16,-1,0,287,294,1,0,0,0,288,289,3,34,17,
  	0,289,290,5,29,0,0,290,291,3,34,17,0,291,292,6,16,-1,0,292,294,1,0,0,
  	0,293,285,1,0,0,0,293,288,1,0,0,0,294,33,1,0,0,0,295,296,3,36,18,0,296,
  	297,6,17,-1,0,297,304,1,0,0,0,298,299,3,36,18,0,299,300,5,28,0,0,300,
  	301,3,36,18,0,301,302,6,17,-1,0,302,304,1,0,0,0,303,295,1,0,0,0,303,298,
  	1,0,0,0,304,35,1,0,0,0,305,306,6,18,-1,0,306,307,3,38,19,0,307,308,6,
  	18,-1,0,308,316,1,0,0,0,309,310,10,1,0,0,310,311,5,22,0,0,311,312,3,38,
  	19,0,312,313,6,18,-1,0,313,315,1,0,0,0,314,309,1,0,0,0,315,318,1,0,0,
  	0,316,314,1,0,0,0,316,317,1,0,0,0,317,37,1,0,0,0,318,316,1,0,0,0,319,
  	320,6,19,-1,0,320,321,3,40,20,0,321,322,6,19,-1,0,322,330,1,0,0,0,323,
  	324,10,1,0,0,324,325,5,24,0,0,325,326,3,40,20,0,326,327,6,19,-1,0,327,
  	329,1,0,0,0,328,323,1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,
  	0,0,0,331,39,1,0,0,0,332,330,1,0,0,0,333,334,5,22,0,0,334,335,3,40,20,
  	0,335,336,6,20,-1,0,336,345,1,0,0,0,337,338,5,27,0,0,338,339,3,40,20,
  	0,339,340,6,20,-1,0,340,345,1,0,0,0,341,342,3,42,21,0,342,343,6,20,-1,
  	0,343,345,1,0,0,0,344,333,1,0,0,0,344,337,1,0,0,0,344,341,1,0,0,0,345,
  	41,1,0,0,0,346,347,3,28,14,0,347,348,6,21,-1,0,348,373,1,0,0,0,349,350,
  	5,31,0,0,350,351,5,14,0,0,351,352,3,44,22,0,352,353,5,15,0,0,353,354,
  	6,21,-1,0,354,373,1,0,0,0,355,356,5,14,0,0,356,357,3,30,15,0,357,358,
  	5,15,0,0,358,359,6,21,-1,0,359,373,1,0,0,0,360,361,5,32,0,0,361,373,6,
  	21,-1,0,362,363,5,33,0,0,363,373,6,21,-1,0,364,365,3,28,14,0,365,366,
  	5,25,0,0,366,367,6,21,-1,0,367,373,1,0,0,0,368,369,3,28,14,0,369,370,
  	5,26,0,0,370,371,6,21,-1,0,371,373,1,0,0,0,372,346,1,0,0,0,372,349,1,
  	0,0,0,372,355,1,0,0,0,372,360,1,0,0,0,372,362,1,0,0,0,372,364,1,0,0,0,
  	372,368,1,0,0,0,373,43,1,0,0,0,374,375,3,46,23,0,375,376,6,22,-1,0,376,
  	379,1,0,0,0,377,379,1,0,0,0,378,374,1,0,0,0,378,377,1,0,0,0,379,45,1,
  	0,0,0,380,381,6,23,-1,0,381,382,3,32,16,0,382,383,6,23,-1,0,383,391,1,
  	0,0,0,384,385,10,2,0,0,385,386,5,21,0,0,386,387,3,32,16,0,387,388,6,23,
  	-1,0,388,390,1,0,0,0,389,384,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,
  	391,392,1,0,0,0,392,47,1,0,0,0,393,391,1,0,0,0,26,61,73,90,107,117,128,
  	130,140,152,162,172,185,187,200,255,263,273,283,293,303,316,330,344,372,
  	378,391
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
    setState(48);
    program(0);

            writeIntoparserLogFile("Parsing completed successfully with " + std::to_string(syntaxErrorCount) + " syntax errors.");
    	
   
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
    setState(52);
    antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

    		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text;
    		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : unit\n");
    		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->unit_text + "\n\n");
    	
    _ctx->stop = _input->LT(-1);
    setState(61);
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
        setState(55);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(56);
        antlrcpp::downCast<ProgramContext *>(_localctx)->un = antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext = unit();

                  		antlrcpp::downCast<ProgramContext *>(_localctx)->pg_text =  antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text;
                  		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext != nullptr ? (antlrcpp::downCast<ProgramContext *>(_localctx)->unitContext->stop) : nullptr)->getLine()) + ": program : program unit\n");
                  		writeIntoparserLogFile(antlrcpp::downCast<ProgramContext *>(_localctx)->pg->pg_text + "\n" + antlrcpp::downCast<ProgramContext *>(_localctx)->un->unit_text + "\n\n");
                  	 
      }
      setState(63);
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
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(64);
      antlrcpp::downCast<UnitContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": unit : var_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->vd->var_text + "\n");
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      antlrcpp::downCast<UnitContext *>(_localctx)->fd = func_declaration();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text;
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fd != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fd->stop) : nullptr)->getLine()) + ": unit : func_declaration\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fd->func_dec_text + "\n");
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(70);
      antlrcpp::downCast<UnitContext *>(_localctx)->fdef = func_definition();

      		antlrcpp::downCast<UnitContext *>(_localctx)->unit_text =  antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text;
      		writeIntoparserLogFile("\nLine " + to_string((antlrcpp::downCast<UnitContext *>(_localctx)->fdef != nullptr ? (antlrcpp::downCast<UnitContext *>(_localctx)->fdef->stop) : nullptr)->getLine()) + ": unit : func_definition\n");
      		writeIntoparserLogFile(antlrcpp::downCast<UnitContext *>(_localctx)->fdef->func_def_text + "\n");
      	 
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

tree::TerminalNode* C8086Parser::Func_declarationContext::ID() {
  return getToken(C8086Parser::ID, 0);
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
    setState(90);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(76);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(77);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(78);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm = parameter_list(0);
      setState(79);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(80);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text + "\n");
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts = type_specifier();
      setState(84);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(85);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(86);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(87);
      antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      			antlrcpp::downCast<Func_declarationContext *>(_localctx)->func_dec_text =  antlrcpp::downCast<Func_declarationContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_declarationContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Func_declarationContext *>(_localctx)->semicolonToken->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n");
      			writeIntoparserLogFile(_localctx->func_dec_text + "\n");
      		
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

tree::TerminalNode* C8086Parser::Func_definitionContext::ID() {
  return getToken(C8086Parser::ID, 0);
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
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = type_specifier();
      setState(93);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(94);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(95);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm = parameter_list(0);
      setState(96);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(97);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->pm->param_text + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst != nullptr ? (antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->stop) : nullptr)->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n");
      			writeIntoparserLogFile(_localctx->func_def_text);
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts = type_specifier();
      setState(101);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(102);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(103);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(104);
      antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst = compound_statement();

      			antlrcpp::downCast<Func_definitionContext *>(_localctx)->func_def_text =  antlrcpp::downCast<Func_definitionContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Func_definitionContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<Func_definitionContext *>(_localctx)->cmst->cmst_text;
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, C8086Parser::RuleParameter_list, precedence);

    

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
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(110);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
      setState(111);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : type_specifier ID\n");
      			writeIntoparserLogFile(_localctx->param_text + "\n");
      		
      break;
    }

    case 2: {
      setState(114);
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
    setState(130);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(128);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          _localctx->pm = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(119);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(120);
          match(C8086Parser::COMMA);
          setState(121);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
          setState(122);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			antlrcpp::downCast<Parameter_listContext *>(_localctx)->param_text =  antlrcpp::downCast<Parameter_listContext *>(_localctx)->pm->param_text + "," + antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts->name_line + " " + antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n");
                    			writeIntoparserLogFile(_localctx->param_text + "\n");
                    		
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(125);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(126);
          match(C8086Parser::COMMA);
          setState(127);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(132);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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

tree::TerminalNode* C8086Parser::Compound_statementContext::LCURL() {
  return getToken(C8086Parser::LCURL, 0);
}

tree::TerminalNode* C8086Parser::Compound_statementContext::RCURL() {
  return getToken(C8086Parser::RCURL, 0);
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
  enterRule(_localctx, 12, C8086Parser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(133);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->lcurlToken = match(C8086Parser::LCURL);
      setState(134);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts = statements(0);
      setState(135);
      antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken = match(C8086Parser::RCURL);

      				antlrcpp::downCast<Compound_statementContext *>(_localctx)->cmst_text =  antlrcpp::downCast<Compound_statementContext *>(_localctx)->lcurlToken->getText() + "\n" + antlrcpp::downCast<Compound_statementContext *>(_localctx)->stmts->stmts_text + "\n" + antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getText() + "\n";
      				writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Compound_statementContext *>(_localctx)->rcurlToken->getLine()) + ": compound_statement : LCURL statements RCURL\n");
      				writeIntoparserLogFile(_localctx->cmst_text + "\n");
      			
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(C8086Parser::LCURL);
      setState(139);
      match(C8086Parser::RCURL);
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
  enterRule(_localctx, 14, C8086Parser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(143);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl = declaration_list(0);
      setState(144);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);

        		antlrcpp::downCast<Var_declarationContext *>(_localctx)->var_text =  antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";";
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n");
      		writeIntoparserLogFile(antlrcpp::downCast<Var_declarationContext *>(_localctx)->t->name_line + " " + antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl->dl_list + ";\n");
            
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(147);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->t = type_specifier();
      setState(148);
      antlrcpp::downCast<Var_declarationContext *>(_localctx)->de = declaration_list_err();
      setState(149);
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
  enterRule(_localctx, 16, C8086Parser::RuleDeclaration_list_err);

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
  enterRule(_localctx, 18, C8086Parser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken = match(C8086Parser::INT);

        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getLine()) + ": type_specifier : INT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->intToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(158);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken = match(C8086Parser::FLOAT);

        			antlrcpp::downCast<Type_specifierContext *>(_localctx)->name_line =  antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText();
        			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getLine()) + ": type_specifier : FLOAT\n");
        			writeIntoparserLogFile(antlrcpp::downCast<Type_specifierContext *>(_localctx)->floatToken->getText() + "\n");
                
        break;
      }

      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(160);
        antlrcpp::downCast<Type_specifierContext *>(_localctx)->voidToken = match(C8086Parser::VOID);

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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, C8086Parser::RuleDeclaration_list, precedence);

    

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
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(165);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": declaration_list : ID\n");
      			writeIntoparserLogFile(_localctx->dl_list + "\n");
       		  
      break;
    }

    case 2: {
      setState(167);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(168);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(169);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);
      setState(170);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getText();
      			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n");
      			writeIntoparserLogFile(_localctx->dl_list + "\n");
      		  
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(185);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          _localctx->dl = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(174);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(175);
          match(C8086Parser::COMMA);
          setState(176);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl->dl_list + "," + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()) + ": declaration_list : declaration_list COMMA ID\n");
                    			writeIntoparserLogFile(_localctx->dl_list + "\n");
                    		  
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          _localctx->dl = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(178);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(179);
          match(C8086Parser::COMMA);
          setState(180);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
          setState(181);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
          setState(182);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);
          setState(183);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

                    			antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl_list =  antlrcpp::downCast<Declaration_listContext *>(_localctx)->dl->dl_list + "," + antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->cn->getText() + antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getText();
                    			writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->rthirdToken->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");
                    			writeIntoparserLogFile(_localctx->dl_list + "\n");
                    		  
          break;
        }

        default:
          break;
        } 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, C8086Parser::RuleStatements, precedence);

    

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
    setState(191);
    antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

    		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text;
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statement\n");
    		writeIntoparserLogFile(_localctx->stmts_text + "\n\n");
    	   
    _ctx->stop = _input->LT(-1);
    setState(200);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementsContext>(parentContext, parentState);
        _localctx->stmts = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleStatements);
        setState(194);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(195);
        antlrcpp::downCast<StatementsContext *>(_localctx)->st = statement();

                  		antlrcpp::downCast<StatementsContext *>(_localctx)->stmts_text =  antlrcpp::downCast<StatementsContext *>(_localctx)->stmts->stmts_text + "\n" + antlrcpp::downCast<StatementsContext *>(_localctx)->st->st_text;
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementsContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementsContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statements : statements statement\n");
                  		writeIntoparserLogFile(_localctx->stmts_text + "\n\n");
                  	    
      }
      setState(202);
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
  enterRule(_localctx, 24, C8086Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(203);
      antlrcpp::downCast<StatementContext *>(_localctx)->vd = var_declaration();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->vd->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->vd != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->vd->stop) : nullptr)->getLine()) + ": statement : var_declaration\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(206);
      antlrcpp::downCast<StatementContext *>(_localctx)->exst = expression_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->exst->expr_stmt_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->exst != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->exst->stop) : nullptr)->getLine()) + ": statement : expression_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(209);
      antlrcpp::downCast<StatementContext *>(_localctx)->cs = compound_statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->cs->cmst_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->cs != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->cs->stop) : nullptr)->getLine()) + ": statement : compound_statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(212);
      antlrcpp::downCast<StatementContext *>(_localctx)->forToken = match(C8086Parser::FOR);
      setState(213);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(214);
      antlrcpp::downCast<StatementContext *>(_localctx)->es1 = expression_statement();
      setState(215);
      antlrcpp::downCast<StatementContext *>(_localctx)->es2 = expression_statement();
      setState(216);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(217);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(218);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->forToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->es1->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->es2->expr_stmt_text + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(222);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(223);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(224);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(225);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n\n");
      	  
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(228);
      antlrcpp::downCast<StatementContext *>(_localctx)->ifToken = match(C8086Parser::IF);
      setState(229);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(230);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(231);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(232);
      antlrcpp::downCast<StatementContext *>(_localctx)->st1 = statement();
      setState(233);
      antlrcpp::downCast<StatementContext *>(_localctx)->elseToken = match(C8086Parser::ELSE);
      setState(234);
      antlrcpp::downCast<StatementContext *>(_localctx)->st2 = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->ifToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st1->st_text + antlrcpp::downCast<StatementContext *>(_localctx)->elseToken->getText() + "\n" + antlrcpp::downCast<StatementContext *>(_localctx)->st2->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st2 != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st2->stop) : nullptr)->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(237);
      antlrcpp::downCast<StatementContext *>(_localctx)->whileToken = match(C8086Parser::WHILE);
      setState(238);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(239);
      antlrcpp::downCast<StatementContext *>(_localctx)->ex = expression();
      setState(240);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(241);
      antlrcpp::downCast<StatementContext *>(_localctx)->st = statement();

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->whileToken->getText() + " " + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->st->st_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<StatementContext *>(_localctx)->st != nullptr ? (antlrcpp::downCast<StatementContext *>(_localctx)->st->stop) : nullptr)->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(244);
      antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken = match(C8086Parser::PRINTLN);
      setState(245);
      antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(246);
      antlrcpp::downCast<StatementContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(247);
      antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);
      setState(248);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		antlrcpp::downCast<StatementContext *>(_localctx)->st_text =  antlrcpp::downCast<StatementContext *>(_localctx)->printlnToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->rparenToken->getText() + antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n");
      		writeIntoparserLogFile(_localctx->st_text + "\n");
      	  
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(250);
      antlrcpp::downCast<StatementContext *>(_localctx)->returnToken = match(C8086Parser::RETURN);
      setState(251);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression();
      setState(252);
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
  enterRule(_localctx, 26, C8086Parser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(257);
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
        setState(259);
        antlrcpp::downCast<Expression_statementContext *>(_localctx)->exp = expression();
        setState(260);
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
  enterRule(_localctx, 28, C8086Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(265);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getLine()) + ": variable : ID\n");
      		writeIntoparserLogFile(_localctx->var_text + "\n");
      	 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(267);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(268);
      antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken = match(C8086Parser::LTHIRD);
      setState(269);
      antlrcpp::downCast<VariableContext *>(_localctx)->ex = expression();
      setState(270);
      antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken = match(C8086Parser::RTHIRD);

      		antlrcpp::downCast<VariableContext *>(_localctx)->var_text =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->lthirdToken->getText() + antlrcpp::downCast<VariableContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<VariableContext *>(_localctx)->rthirdToken->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n");
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
  enterRule(_localctx, 30, C8086Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(275);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : logic expression\n");
      		 writeIntoparserLogFile(_localctx->expr_text + "\n");
      	   
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->var = variable();
      setState(279);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken = match(C8086Parser::ASSIGNOP);
      setState(280);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->logex = logic_expression();

      		 antlrcpp::downCast<ExpressionContext *>(_localctx)->expr_text =  antlrcpp::downCast<ExpressionContext *>(_localctx)->var->var_text + antlrcpp::downCast<ExpressionContext *>(_localctx)->assignopToken->getText() + antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->logic_text;
      		 writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ExpressionContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ExpressionContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": expression : variable ASSIGNOP logic_expression\n");
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
  enterRule(_localctx, 32, C8086Parser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex = rel_expression();

      			antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logic_text =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->rel_text;
      			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex != nullptr ? (antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex->stop) : nullptr)->getLine()) + ": logic_expression : rel_expression\n");
      			writeIntoparserLogFile(_localctx->logic_text + "\n");
      		 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(288);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->relex1 = rel_expression();
      setState(289);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken = match(C8086Parser::LOGICOP);
      setState(290);
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
  enterRule(_localctx, 34, C8086Parser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(295);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex = simple_expression(0);

      		  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->rel_text =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->sim_text;
      		  writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex != nullptr ? (antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex->stop) : nullptr)->getLine()) + ": rel_expression : simple_expression\n");
      		  writeIntoparserLogFile(_localctx->rel_text + "\n");
      		
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(298);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->smex1 = simple_expression(0);
      setState(299);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken = match(C8086Parser::RELOP);
      setState(300);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, C8086Parser::RuleSimple_expression, precedence);

    

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
    setState(306);
    antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

    			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : term\n");
    			writeIntoparserLogFile(_localctx->sim_text + "\n");
    		  
    _ctx->stop = _input->LT(-1);
    setState(316);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        _localctx->smex = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(309);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(310);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(311);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext = term(0);

                  			antlrcpp::downCast<Simple_expressionContext *>(_localctx)->sim_text =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->smex->sim_text + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->term_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext != nullptr ? (antlrcpp::downCast<Simple_expressionContext *>(_localctx)->termContext->stop) : nullptr)->getLine()) + ": simple_expression : simple_expression ADDOP term\n");
                  			writeIntoparserLogFile(_localctx->sim_text + "\n");
                  		   
      }
      setState(318);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, C8086Parser::RuleTerm, precedence);

    

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
    setState(320);
    antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

    		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
    		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : unary_expression\n");
    		writeIntoparserLogFile(_localctx->term_text + "\n");
    	 
    _ctx->stop = _input->LT(-1);
    setState(330);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        _localctx->t = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(323);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(324);
        antlrcpp::downCast<TermContext *>(_localctx)->mulopToken = match(C8086Parser::MULOP);
        setState(325);
        antlrcpp::downCast<TermContext *>(_localctx)->unex = unary_expression();

                  		antlrcpp::downCast<TermContext *>(_localctx)->term_text =  antlrcpp::downCast<TermContext *>(_localctx)->t->term_text + antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() + antlrcpp::downCast<TermContext *>(_localctx)->unex->unex_text;
                  		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<TermContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<TermContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": term : term MULOP unary_expression\n");
                  		writeIntoparserLogFile(_localctx->term_text + "\n");
                  	  
      }
      setState(332);
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
  enterRule(_localctx, 40, C8086Parser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ADDOP: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(334);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex = unary_expression();

        			antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex_text =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->addopToken->getText() + antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->unex_text;
        			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex != nullptr ? (antlrcpp::downCast<Unary_expressionContext *>(_localctx)->unex->stop) : nullptr)->getLine()) + ": unary_expression : ADDOP unary_expression\n");
        			writeIntoparserLogFile(_localctx->unex_text + "\n");
        		 
        break;
      }

      case C8086Parser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->notToken = match(C8086Parser::NOT);
        setState(338);
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
        setState(341);
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
  enterRule(_localctx, 42, C8086Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(346);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text;
      		writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<FactorContext *>(_localctx)->var != nullptr ? (antlrcpp::downCast<FactorContext *>(_localctx)->var->stop) : nullptr)->getLine()) + ": factor : variable\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(349);
      antlrcpp::downCast<FactorContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(350);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(351);
      antlrcpp::downCast<FactorContext *>(_localctx)->al = argument_list();
      setState(352);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->al->arglist_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(355);
      antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken = match(C8086Parser::LPAREN);
      setState(356);
      antlrcpp::downCast<FactorContext *>(_localctx)->ex = expression();
      setState(357);
      antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken = match(C8086Parser::RPAREN);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->lparenToken->getText() + antlrcpp::downCast<FactorContext *>(_localctx)->ex->expr_text + antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->rparenToken->getLine()) + ": factor : LPAREN expression RPAREN\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(360);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_INT);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_INT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(362);
      antlrcpp::downCast<FactorContext *>(_localctx)->cn = match(C8086Parser::CONST_FLOAT);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->cn->getText() + "0";
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->cn->getLine()) + ": factor : CONST_FLOAT\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(364);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(365);
      antlrcpp::downCast<FactorContext *>(_localctx)->incopToken = match(C8086Parser::INCOP);

      		antlrcpp::downCast<FactorContext *>(_localctx)->fact_text =  antlrcpp::downCast<FactorContext *>(_localctx)->var->var_text + antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getText();
      		writeIntoparserLogFile("Line " + to_string(antlrcpp::downCast<FactorContext *>(_localctx)->incopToken->getLine()) + ": factor : variable INCOP\n");
      		writeIntoparserLogFile(_localctx->fact_text + "\n");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(368);
      antlrcpp::downCast<FactorContext *>(_localctx)->var = variable();
      setState(369);
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
  enterRule(_localctx, 44, C8086Parser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(374);
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
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, C8086Parser::RuleArguments, precedence);

    

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
    setState(381);
    antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

    			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
    			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : logic_expression\n");
    			writeIntoparserLogFile(_localctx->arg_text + "\n");
    		  
    _ctx->stop = _input->LT(-1);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentsContext>(parentContext, parentState);
        _localctx->args = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleArguments);
        setState(384);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(385);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken = match(C8086Parser::COMMA);
        setState(386);
        antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex = logic_expression();

                  			antlrcpp::downCast<ArgumentsContext *>(_localctx)->arg_text =  antlrcpp::downCast<ArgumentsContext *>(_localctx)->args->arg_text + antlrcpp::downCast<ArgumentsContext *>(_localctx)->commaToken->getText() + antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->logic_text;
                  			writeIntoparserLogFile("Line " + to_string((antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex != nullptr ? (antlrcpp::downCast<ArgumentsContext *>(_localctx)->logex->stop) : nullptr)->getLine()) + ": arguments : arguments COMMA logic_expression\n");
                  			writeIntoparserLogFile(_localctx->arg_text + "\n");
                  		   
      }
      setState(393);
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

bool C8086Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return programSempred(antlrcpp::downCast<ProgramContext *>(context), predicateIndex);
    case 5: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 10: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 11: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 18: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 19: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 23: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

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
