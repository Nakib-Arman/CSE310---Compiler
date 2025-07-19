
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <cstdlib>
    #include "C8086Lexer.h"
	#include "SymbolTable/2105128_SymbolTable.cpp"

    extern std::ofstream parserLogFile;


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
      "func_name", "return_type", "parameter_list", "compound_statement", 
      "var_declaration", "type_specifier", "type_specifier_stack", "declaration_list", 
      "statements", "statement", "expression_statement", "variable", "expression", 
      "logic_expression", "rel_expression", "simple_expression", "term", 
      "unary_expression", "factor", "argument_list", "arguments"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'println'", 
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
  	4,1,33,390,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,0,1,1,1,1,1,
  	1,1,1,1,1,5,1,62,8,1,10,1,12,1,65,9,1,1,2,1,2,1,2,3,2,70,8,2,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,85,8,3,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,102,8,4,1,5,1,5,1,5,
  	3,5,107,8,5,1,6,1,6,1,6,1,6,3,6,113,8,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,121,
  	8,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,132,8,7,10,7,12,7,135,9,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,3,8,143,8,8,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,11,1,11,1,11,1,11,3,11,157,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,3,12,167,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,5,12,179,8,12,10,12,12,12,182,9,12,1,13,1,13,1,13,1,13,1,13,5,13,189,
  	8,13,10,13,12,13,192,9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,256,8,14,
  	1,15,1,15,1,15,1,15,3,15,262,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,3,16,272,8,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,280,8,17,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,291,8,18,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,3,19,302,8,19,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,5,20,314,8,20,10,20,12,20,317,9,20,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,329,8,21,10,21,12,21,332,9,
  	21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,343,8,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,370,8,23,1,24,1,
  	24,3,24,374,8,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,5,25,385,
  	8,25,10,25,12,25,388,9,25,1,25,0,7,2,14,24,26,40,42,50,26,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,1,1,0,11,
  	13,405,0,52,1,0,0,0,2,56,1,0,0,0,4,69,1,0,0,0,6,84,1,0,0,0,8,101,1,0,
  	0,0,10,106,1,0,0,0,12,112,1,0,0,0,14,120,1,0,0,0,16,142,1,0,0,0,18,144,
  	1,0,0,0,20,148,1,0,0,0,22,156,1,0,0,0,24,166,1,0,0,0,26,183,1,0,0,0,28,
  	255,1,0,0,0,30,261,1,0,0,0,32,271,1,0,0,0,34,279,1,0,0,0,36,290,1,0,0,
  	0,38,301,1,0,0,0,40,303,1,0,0,0,42,318,1,0,0,0,44,342,1,0,0,0,46,369,
  	1,0,0,0,48,373,1,0,0,0,50,375,1,0,0,0,52,53,6,0,-1,0,53,54,3,2,1,0,54,
  	55,6,0,-1,0,55,1,1,0,0,0,56,57,6,1,-1,0,57,58,3,4,2,0,58,63,1,0,0,0,59,
  	60,10,2,0,0,60,62,3,4,2,0,61,59,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,
  	64,1,0,0,0,64,3,1,0,0,0,65,63,1,0,0,0,66,70,3,18,9,0,67,70,3,6,3,0,68,
  	70,3,8,4,0,69,66,1,0,0,0,69,67,1,0,0,0,69,68,1,0,0,0,70,5,1,0,0,0,71,
  	72,3,20,10,0,72,73,5,31,0,0,73,74,5,14,0,0,74,75,3,14,7,0,75,76,5,15,
  	0,0,76,77,5,20,0,0,77,85,1,0,0,0,78,79,3,20,10,0,79,80,5,31,0,0,80,81,
  	5,14,0,0,81,82,5,15,0,0,82,83,5,20,0,0,83,85,1,0,0,0,84,71,1,0,0,0,84,
  	78,1,0,0,0,85,7,1,0,0,0,86,87,3,12,6,0,87,88,3,10,5,0,88,89,5,14,0,0,
  	89,90,3,14,7,0,90,91,5,15,0,0,91,92,3,16,8,0,92,93,6,4,-1,0,93,102,1,
  	0,0,0,94,95,3,12,6,0,95,96,3,10,5,0,96,97,5,14,0,0,97,98,5,15,0,0,98,
  	99,3,16,8,0,99,100,6,4,-1,0,100,102,1,0,0,0,101,86,1,0,0,0,101,94,1,0,
  	0,0,102,9,1,0,0,0,103,104,5,31,0,0,104,107,6,5,-1,0,105,107,1,0,0,0,106,
  	103,1,0,0,0,106,105,1,0,0,0,107,11,1,0,0,0,108,109,3,20,10,0,109,110,
  	6,6,-1,0,110,113,1,0,0,0,111,113,1,0,0,0,112,108,1,0,0,0,112,111,1,0,
  	0,0,113,13,1,0,0,0,114,115,6,7,-1,0,115,116,3,20,10,0,116,117,5,31,0,
  	0,117,118,6,7,-1,0,118,121,1,0,0,0,119,121,3,20,10,0,120,114,1,0,0,0,
  	120,119,1,0,0,0,121,133,1,0,0,0,122,123,10,4,0,0,123,124,5,21,0,0,124,
  	125,3,20,10,0,125,126,5,31,0,0,126,127,6,7,-1,0,127,132,1,0,0,0,128,129,
  	10,3,0,0,129,130,5,21,0,0,130,132,3,20,10,0,131,122,1,0,0,0,131,128,1,
  	0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,15,1,0,0,0,
  	135,133,1,0,0,0,136,137,5,16,0,0,137,138,3,26,13,0,138,139,5,17,0,0,139,
  	143,1,0,0,0,140,141,5,16,0,0,141,143,5,17,0,0,142,136,1,0,0,0,142,140,
  	1,0,0,0,143,17,1,0,0,0,144,145,3,22,11,0,145,146,3,24,12,0,146,147,5,
  	20,0,0,147,19,1,0,0,0,148,149,7,0,0,0,149,21,1,0,0,0,150,151,5,11,0,0,
  	151,157,6,11,-1,0,152,153,5,12,0,0,153,157,6,11,-1,0,154,155,5,13,0,0,
  	155,157,6,11,-1,0,156,150,1,0,0,0,156,152,1,0,0,0,156,154,1,0,0,0,157,
  	23,1,0,0,0,158,159,6,12,-1,0,159,160,5,31,0,0,160,167,6,12,-1,0,161,162,
  	5,31,0,0,162,163,5,18,0,0,163,164,5,32,0,0,164,165,5,19,0,0,165,167,6,
  	12,-1,0,166,158,1,0,0,0,166,161,1,0,0,0,167,180,1,0,0,0,168,169,10,4,
  	0,0,169,170,5,21,0,0,170,171,5,31,0,0,171,179,6,12,-1,0,172,173,10,3,
  	0,0,173,174,5,21,0,0,174,175,5,31,0,0,175,176,5,18,0,0,176,177,5,32,0,
  	0,177,179,5,19,0,0,178,168,1,0,0,0,178,172,1,0,0,0,179,182,1,0,0,0,180,
  	178,1,0,0,0,180,181,1,0,0,0,181,25,1,0,0,0,182,180,1,0,0,0,183,184,6,
  	13,-1,0,184,185,3,28,14,0,185,190,1,0,0,0,186,187,10,1,0,0,187,189,3,
  	28,14,0,188,186,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,
  	0,191,27,1,0,0,0,192,190,1,0,0,0,193,194,3,18,9,0,194,195,6,14,-1,0,195,
  	256,1,0,0,0,196,197,3,30,15,0,197,198,6,14,-1,0,198,256,1,0,0,0,199,200,
  	3,16,8,0,200,201,6,14,-1,0,201,256,1,0,0,0,202,203,5,7,0,0,203,204,5,
  	14,0,0,204,205,3,30,15,0,205,206,6,14,-1,0,206,207,3,30,15,0,207,208,
  	6,14,-1,0,208,209,3,34,17,0,209,210,6,14,-1,0,210,211,5,15,0,0,211,212,
  	6,14,-1,0,212,213,3,28,14,0,213,214,6,14,-1,0,214,256,1,0,0,0,215,216,
  	5,5,0,0,216,217,5,14,0,0,217,218,3,34,17,0,218,219,5,15,0,0,219,220,6,
  	14,-1,0,220,221,3,28,14,0,221,222,6,14,-1,0,222,256,1,0,0,0,223,224,5,
  	5,0,0,224,225,5,14,0,0,225,226,3,34,17,0,226,227,5,15,0,0,227,228,6,14,
  	-1,0,228,229,3,28,14,0,229,230,5,6,0,0,230,231,6,14,-1,0,231,232,3,28,
  	14,0,232,233,6,14,-1,0,233,256,1,0,0,0,234,235,5,8,0,0,235,236,5,14,0,
  	0,236,237,6,14,-1,0,237,238,3,34,17,0,238,239,5,15,0,0,239,240,6,14,-1,
  	0,240,241,3,28,14,0,241,242,6,14,-1,0,242,256,1,0,0,0,243,244,5,9,0,0,
  	244,245,5,14,0,0,245,246,5,31,0,0,246,247,5,15,0,0,247,248,5,20,0,0,248,
  	256,6,14,-1,0,249,250,6,14,-1,0,250,251,5,10,0,0,251,252,3,34,17,0,252,
  	253,5,20,0,0,253,254,6,14,-1,0,254,256,1,0,0,0,255,193,1,0,0,0,255,196,
  	1,0,0,0,255,199,1,0,0,0,255,202,1,0,0,0,255,215,1,0,0,0,255,223,1,0,0,
  	0,255,234,1,0,0,0,255,243,1,0,0,0,255,249,1,0,0,0,256,29,1,0,0,0,257,
  	262,5,20,0,0,258,259,3,34,17,0,259,260,5,20,0,0,260,262,1,0,0,0,261,257,
  	1,0,0,0,261,258,1,0,0,0,262,31,1,0,0,0,263,264,5,31,0,0,264,272,6,16,
  	-1,0,265,266,5,31,0,0,266,267,5,18,0,0,267,268,3,34,17,0,268,269,5,19,
  	0,0,269,270,6,16,-1,0,270,272,1,0,0,0,271,263,1,0,0,0,271,265,1,0,0,0,
  	272,33,1,0,0,0,273,280,3,36,18,0,274,275,3,32,16,0,275,276,5,30,0,0,276,
  	277,3,36,18,0,277,278,6,17,-1,0,278,280,1,0,0,0,279,273,1,0,0,0,279,274,
  	1,0,0,0,280,35,1,0,0,0,281,282,3,38,19,0,282,283,6,18,-1,0,283,291,1,
  	0,0,0,284,285,3,38,19,0,285,286,5,29,0,0,286,287,6,18,-1,0,287,288,3,
  	38,19,0,288,289,6,18,-1,0,289,291,1,0,0,0,290,281,1,0,0,0,290,284,1,0,
  	0,0,291,37,1,0,0,0,292,293,3,40,20,0,293,294,6,19,-1,0,294,302,1,0,0,
  	0,295,296,3,40,20,0,296,297,5,28,0,0,297,298,6,19,-1,0,298,299,3,40,20,
  	0,299,300,6,19,-1,0,300,302,1,0,0,0,301,292,1,0,0,0,301,295,1,0,0,0,302,
  	39,1,0,0,0,303,304,6,20,-1,0,304,305,3,42,21,0,305,306,6,20,-1,0,306,
  	315,1,0,0,0,307,308,10,1,0,0,308,309,6,20,-1,0,309,310,5,22,0,0,310,311,
  	3,42,21,0,311,312,6,20,-1,0,312,314,1,0,0,0,313,307,1,0,0,0,314,317,1,
  	0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,41,1,0,0,0,317,315,1,0,0,0,
  	318,319,6,21,-1,0,319,320,3,44,22,0,320,321,6,21,-1,0,321,330,1,0,0,0,
  	322,323,10,1,0,0,323,324,5,24,0,0,324,325,6,21,-1,0,325,326,3,44,22,0,
  	326,327,6,21,-1,0,327,329,1,0,0,0,328,322,1,0,0,0,329,332,1,0,0,0,330,
  	328,1,0,0,0,330,331,1,0,0,0,331,43,1,0,0,0,332,330,1,0,0,0,333,334,5,
  	22,0,0,334,335,3,44,22,0,335,336,6,22,-1,0,336,343,1,0,0,0,337,338,5,
  	27,0,0,338,343,3,44,22,0,339,340,3,46,23,0,340,341,6,22,-1,0,341,343,
  	1,0,0,0,342,333,1,0,0,0,342,337,1,0,0,0,342,339,1,0,0,0,343,45,1,0,0,
  	0,344,345,3,32,16,0,345,346,6,23,-1,0,346,370,1,0,0,0,347,348,5,31,0,
  	0,348,349,5,14,0,0,349,350,3,48,24,0,350,351,5,15,0,0,351,352,6,23,-1,
  	0,352,370,1,0,0,0,353,354,5,14,0,0,354,355,3,34,17,0,355,356,5,15,0,0,
  	356,370,1,0,0,0,357,358,5,32,0,0,358,370,6,23,-1,0,359,360,5,33,0,0,360,
  	370,6,23,-1,0,361,362,3,32,16,0,362,363,5,25,0,0,363,364,6,23,-1,0,364,
  	370,1,0,0,0,365,366,3,32,16,0,366,367,5,26,0,0,367,368,6,23,-1,0,368,
  	370,1,0,0,0,369,344,1,0,0,0,369,347,1,0,0,0,369,353,1,0,0,0,369,357,1,
  	0,0,0,369,359,1,0,0,0,369,361,1,0,0,0,369,365,1,0,0,0,370,47,1,0,0,0,
  	371,374,3,50,25,0,372,374,1,0,0,0,373,371,1,0,0,0,373,372,1,0,0,0,374,
  	49,1,0,0,0,375,376,6,25,-1,0,376,377,3,36,18,0,377,378,6,25,-1,0,378,
  	386,1,0,0,0,379,380,10,2,0,0,380,381,5,21,0,0,381,382,3,36,18,0,382,383,
  	6,25,-1,0,383,385,1,0,0,0,384,379,1,0,0,0,385,388,1,0,0,0,386,384,1,0,
  	0,0,386,387,1,0,0,0,387,51,1,0,0,0,388,386,1,0,0,0,27,63,69,84,101,106,
  	112,120,131,133,142,156,166,178,180,190,255,261,271,279,290,301,315,330,
  	342,369,373,386
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
    setState(57);
    unit();
    _ctx->stop = _input->LT(-1);
    setState(63);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ProgramContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleProgram);
        setState(59);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(60);
        unit(); 
      }
      setState(65);
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
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      var_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      func_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(68);
      func_definition();
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

C8086Parser::Type_specifierContext* C8086Parser::Func_declarationContext::type_specifier() {
  return getRuleContext<C8086Parser::Type_specifierContext>(0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::ID() {
  return getToken(C8086Parser::ID, 0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_declarationContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
}

tree::TerminalNode* C8086Parser::Func_declarationContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
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
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      type_specifier();
      setState(72);
      match(C8086Parser::ID);
      setState(73);
      match(C8086Parser::LPAREN);
      setState(74);
      parameter_list(0);
      setState(75);
      match(C8086Parser::RPAREN);
      setState(76);
      match(C8086Parser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      type_specifier();
      setState(79);
      match(C8086Parser::ID);
      setState(80);
      match(C8086Parser::LPAREN);
      setState(81);
      match(C8086Parser::RPAREN);
      setState(82);
      match(C8086Parser::SEMICOLON);
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

C8086Parser::Return_typeContext* C8086Parser::Func_definitionContext::return_type() {
  return getRuleContext<C8086Parser::Return_typeContext>(0);
}

C8086Parser::Func_nameContext* C8086Parser::Func_definitionContext::func_name() {
  return getRuleContext<C8086Parser::Func_nameContext>(0);
}

tree::TerminalNode* C8086Parser::Func_definitionContext::LPAREN() {
  return getToken(C8086Parser::LPAREN, 0);
}

C8086Parser::Parameter_listContext* C8086Parser::Func_definitionContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}

tree::TerminalNode* C8086Parser::Func_definitionContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
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
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      return_type();
      setState(87);
      func_name();
      setState(88);
      match(C8086Parser::LPAREN);
      setState(89);
      parameter_list(0);
      setState(90);
      match(C8086Parser::RPAREN);
      setState(91);
      compound_statement();

      		if(in_main == 1){
      			write("L"+to_string(end_label)+":");
      			write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
      			write("\tPOP BP\n\tMOV AX, 4CH\n\tINT 21H");
      			write(curr_func->getName()+" ENDP");
      		}
      		else{
      			write("L"+to_string(end_label)+":");
      			write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
      			write("\tPOP BP");
      			if(symbolTable->getParamNum() == 1){
      				write("\tRET");
      			}
      			else{
      				write("\tRET "+to_string((symbolTable->getParamNum()-1)*2));
      			}
      			write(curr_func->getName()+" ENDP");
      		}
      		symbolTable->ExitScope();
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      return_type();
      setState(95);
      func_name();
      setState(96);
      match(C8086Parser::LPAREN);
      setState(97);
      match(C8086Parser::RPAREN);
      setState(98);
      compound_statement();

      		// symbolTable->print_all_scope_nonempty_indices();
      		if(in_main == 1){
      			write("L"+to_string(end_label)+":");
      			write("\tADD SP, "+to_string(curr_func->getStackElements()*2));
      			write("\tPOP BP\n\tMOV AX, 4CH\n\tINT 21H");
      			write(curr_func->getName()+" ENDP");
      		}
      		else{
      			write("L"+to_string(end_label)+":");
      			write("\tPOP BP");
      			if(symbolTable->getParamNum() == 1){
      				write("\tRET");
      			}
      			else{
      				write("\tRET "+to_string((symbolTable->getParamNum()-1)*2));
      			}
      			write(curr_func->getName()+" ENDP");
      		}
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
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken = match(C8086Parser::ID);

        		curr_func = new Function();
        		curr_func->setName(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText());
        		Function* temp = new Function();
        		temp->setName(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText());
        		symbolTable->insert(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText(),"func","global",temp);
        		end_label = label_count++;
        		if (symbolTable->getCurrentScopeID() == "1" && in_code_segment == 0) {
        			write(".CODE");
        			in_code_segment = 1;
        			
        		}
        		write(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText() + " PROC");
        		symbolTable->EnterScope();
        		if(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText() == "main") {
        			write("\tMOV AX, @DATA\n\tMOV DS, AX");
        		}
        		write("\tPUSH BP\n\tMOV BP, SP");
        		if(antlrcpp::downCast<Func_nameContext *>(_localctx)->idToken->getText() == "main"){
        			in_main = 1;
        		}
        	
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
  enterRule(_localctx, 12, C8086Parser::RuleReturn_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::INT:
      case C8086Parser::FLOAT:
      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 1);
        setState(108);
        antlrcpp::downCast<Return_typeContext *>(_localctx)->ts = type_specifier();

        		curr_func->setReturnType(antlrcpp::downCast<Return_typeContext *>(_localctx)->ts->text);
        	
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

C8086Parser::Parameter_listContext* C8086Parser::Parameter_listContext::parameter_list() {
  return getRuleContext<C8086Parser::Parameter_listContext>(0);
}

tree::TerminalNode* C8086Parser::Parameter_listContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
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
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, C8086Parser::RuleParameter_list, precedence);

    

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
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(115);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->ts = type_specifier();
      setState(116);
      antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),datatype,"parameter",NULL);
      	
      break;
    }

    case 2: {
      setState(119);
      type_specifier();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(131);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(122);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(123);
          match(C8086Parser::COMMA);
          setState(124);
          type_specifier();
          setState(125);
          antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    		symbolTable->insert(antlrcpp::downCast<Parameter_listContext *>(_localctx)->idToken->getText(),datatype,"parameter",NULL);
                    	
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Parameter_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleParameter_list);
          setState(128);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(129);
          match(C8086Parser::COMMA);
          setState(130);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(135);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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

C8086Parser::StatementsContext* C8086Parser::Compound_statementContext::statements() {
  return getRuleContext<C8086Parser::StatementsContext>(0);
}

tree::TerminalNode* C8086Parser::Compound_statementContext::RCURL() {
  return getToken(C8086Parser::RCURL, 0);
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
  enterRule(_localctx, 16, C8086Parser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      match(C8086Parser::LCURL);
      setState(137);
      statements(0);
      setState(138);
      match(C8086Parser::RCURL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(140);
      match(C8086Parser::LCURL);
      setState(141);
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

C8086Parser::Type_specifier_stackContext* C8086Parser::Var_declarationContext::type_specifier_stack() {
  return getRuleContext<C8086Parser::Type_specifier_stackContext>(0);
}

C8086Parser::Declaration_listContext* C8086Parser::Var_declarationContext::declaration_list() {
  return getRuleContext<C8086Parser::Declaration_listContext>(0);
}

tree::TerminalNode* C8086Parser::Var_declarationContext::SEMICOLON() {
  return getToken(C8086Parser::SEMICOLON, 0);
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
  enterRule(_localctx, 18, C8086Parser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    antlrcpp::downCast<Var_declarationContext *>(_localctx)->ts = type_specifier_stack();
    setState(145);
    antlrcpp::downCast<Var_declarationContext *>(_localctx)->dl = declaration_list(0);
    setState(146);
    antlrcpp::downCast<Var_declarationContext *>(_localctx)->sm = match(C8086Parser::SEMICOLON);
   
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14336) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifier_stackContext ------------------------------------------------------------------

C8086Parser::Type_specifier_stackContext::Type_specifier_stackContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C8086Parser::Type_specifier_stackContext::INT() {
  return getToken(C8086Parser::INT, 0);
}

tree::TerminalNode* C8086Parser::Type_specifier_stackContext::FLOAT() {
  return getToken(C8086Parser::FLOAT, 0);
}

tree::TerminalNode* C8086Parser::Type_specifier_stackContext::VOID() {
  return getToken(C8086Parser::VOID, 0);
}


size_t C8086Parser::Type_specifier_stackContext::getRuleIndex() const {
  return C8086Parser::RuleType_specifier_stack;
}

void C8086Parser::Type_specifier_stackContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_specifier_stack(this);
}

void C8086Parser::Type_specifier_stackContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C8086ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_specifier_stack(this);
}

C8086Parser::Type_specifier_stackContext* C8086Parser::type_specifier_stack() {
  Type_specifier_stackContext *_localctx = _tracker.createInstance<Type_specifier_stackContext>(_ctx, getState());
  enterRule(_localctx, 22, C8086Parser::RuleType_specifier_stack);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(150);
        antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->intToken = match(C8086Parser::INT);

        		datatype = antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->intToken->getText();
        		// write("\tPUSH BP\n\tMOV BP, SP");
        	
        break;
      }

      case C8086Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->floatToken = match(C8086Parser::FLOAT);

        		datatype = antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->floatToken->getText();
        		write("\tPUSH BP\n\tMOV BP, SP");
        	
        break;
      }

      case C8086Parser::VOID: {
        enterOuterAlt(_localctx, 3);
        setState(154);
        antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->voidToken = match(C8086Parser::VOID);

        		datatype = antlrcpp::downCast<Type_specifier_stackContext *>(_localctx)->voidToken->getText();
        		write("\tPUSH BP\n\tMOV BP, SP");
        	
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

C8086Parser::Declaration_listContext* C8086Parser::Declaration_listContext::declaration_list() {
  return getRuleContext<C8086Parser::Declaration_listContext>(0);
}

tree::TerminalNode* C8086Parser::Declaration_listContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, C8086Parser::RuleDeclaration_list, precedence);

    

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
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(159);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		if(symbolTable->getCurrentScopeID() == "1"){
      			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"global",NULL);
      			write("\t"+antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText()+" DW 1 DUP (0000H)");
      		}
      		else {
      			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"local",NULL);
      			curr_func->incStackElements();
      			write("\tSUB SP, 2");
      		}
      	
      break;
    }

    case 2: {
      setState(161);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(162);
      match(C8086Parser::LTHIRD);
      setState(163);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);
      setState(164);
      match(C8086Parser::RTHIRD);

      		if(symbolTable->getCurrentScopeID() == "1"){
      			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"global",NULL,true,stoi(antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText()));
      			write("\t"+antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText()+" DW "+antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText()+" DUP (0000H)");
      		}
      		else {
      			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"local",NULL,true,stoi(antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText()));
      			curr_func->incStackElements();
      			write("\tSUB SP, "+to_string(stoi(antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken->getText())*2)+"\t; Line "+to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()));
      		}
      	
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(178);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(168);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(169);
          match(C8086Parser::COMMA);
          setState(170);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    		if(symbolTable->getCurrentScopeID() == "1"){
                    			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"global",NULL);
                    			write("\t"+antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText()+" DW 1 DUP (0000H)");
                    		}
                    		else {
                    			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"local",NULL);
                    			curr_func->incStackElements();
                    			write("\tSUB SP, 2\t; Line "+to_string(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getLine()));
                    		}
                    	
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(172);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(173);
          match(C8086Parser::COMMA);
          setState(174);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
          setState(175);
          match(C8086Parser::LTHIRD);
          setState(176);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);
          setState(177);
          match(C8086Parser::RTHIRD);
          break;
        }

        default:
          break;
        } 
      }
      setState(182);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, C8086Parser::RuleStatements, precedence);

    

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
    setState(184);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatements);
        setState(186);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(187);
        statement(); 
      }
      setState(192);
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

C8086Parser::ExpressionContext* C8086Parser::StatementContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}

tree::TerminalNode* C8086Parser::StatementContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
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
  enterRule(_localctx, 28, C8086Parser::RuleStatement);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(193);
      var_declaration();

      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
      expression_statement();

      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(199);
      compound_statement();

      	
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      match(C8086Parser::FOR);
      setState(203);
      match(C8086Parser::LPAREN);
      setState(204);
      expression_statement();

      		int begin_label = label_count;
      	
      setState(206);
      antlrcpp::downCast<StatementContext *>(_localctx)->es = expression_statement();

      		write("\tCMP AX, 0");
      		write("\tJNE L"+to_string(label_count));
      		int true_label = label_count++;
      		int inc_label = label_count++;
      		int end_label = label_count++;
      		write("\tJMP L"+to_string(end_label));
      		write("L"+to_string(inc_label)+":");
      	
      setState(208);
      expression();

      		write("\tJMP L"+to_string(begin_label));
      	
      setState(210);
      match(C8086Parser::RPAREN);

      		write("L"+to_string(true_label)+":");
      	
      setState(212);
      statement();

      		write("\tJMP L"+to_string(inc_label));
      		write("L"+to_string(end_label)+":");
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(215);
      match(C8086Parser::IF);
      setState(216);
      match(C8086Parser::LPAREN);
      setState(217);
      expression();
      setState(218);
      match(C8086Parser::RPAREN);

      		write("\tCMP AX, 0");
      		write("\tJNE L"+to_string(label_count));
      		write("\tJMP L"+to_string(label_count+1));
      		write("L"+to_string(label_count)+":");
      		label_count++;
      	
      setState(220);
      statement();

      		write("L"+to_string(label_count)+":");
      		label_count++;
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(223);
      match(C8086Parser::IF);
      setState(224);
      match(C8086Parser::LPAREN);
      setState(225);
      expression();
      setState(226);
      match(C8086Parser::RPAREN);

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
      	
      setState(228);
      statement();
      setState(229);
      match(C8086Parser::ELSE);

      		write("\tJMP L"+to_string(end_label));
      		write("L"+to_string(else_label)+":");
      	
      setState(231);
      statement();

      		write("L"+to_string(end_label)+":");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(234);
      match(C8086Parser::WHILE);
      setState(235);
      match(C8086Parser::LPAREN);

      		int begin_label = label_count;
      	
      setState(237);
      expression();
      setState(238);
      match(C8086Parser::RPAREN);

      		write("\tCMP AX, 0");
      		write("\tJNE L"+to_string(label_count));
      		int true_label = label_count++;
      		int end_label = label_count++;
      		write("\tJMP L"+to_string(end_label));
      		write("L"+to_string(true_label)+":");
      	
      setState(240);
      statement();

      		write("\tJMP L"+to_string(begin_label));
      		write("L"+to_string(end_label)+":");
      	
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(243);
      match(C8086Parser::PRINTLN);
      setState(244);
      match(C8086Parser::LPAREN);
      setState(245);
      antlrcpp::downCast<StatementContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(246);
      match(C8086Parser::RPAREN);
      setState(247);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		if(symbolTable->getVariableScope(antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText()) == "global"){
      			write("\tMOV AX, "+antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText());
      		}
      		else{
      			int stack_index = symbolTable->getStackIndex(antlrcpp::downCast<StatementContext *>(_localctx)->idToken->getText());
      			if(stack_index < 0) {
      				int temp = stack_index + 2 + symbolTable->getParamNum();
      				write("\tMOV AX, [BP+"+to_string(temp*2)+"]");
      			}
      			else{
      				write("\tMOV AX, [BP"+to_string(-stack_index*2)+"]");
      			}
      		}
      		write("\tCALL print_output\n\tCALL new_line     ; Line "+to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()));
      	
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      write("");
      setState(250);
      match(C8086Parser::RETURN);
      setState(251);
      expression();
      setState(252);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		write("\tJMP L"+to_string(end_label)+"\t; Line "+to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()));
      	
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
  enterRule(_localctx, 30, C8086Parser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(257);
        match(C8086Parser::SEMICOLON);
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(258);
        expression();
        setState(259);
        match(C8086Parser::SEMICOLON);
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

C8086Parser::ExpressionContext* C8086Parser::VariableContext::expression() {
  return getRuleContext<C8086Parser::ExpressionContext>(0);
}

tree::TerminalNode* C8086Parser::VariableContext::RTHIRD() {
  return getToken(C8086Parser::RTHIRD, 0);
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
  enterRule(_localctx, 32, C8086Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(263);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		if(symbolTable->getVariableScope(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText()) == "global"){
      			antlrcpp::downCast<VariableContext *>(_localctx)->name =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText();
      		}
      		else{
      			int stack_index = symbolTable->getStackIndex(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      			if(stack_index < 0){
      				// cout<<symbolTable->getParamNum()<<endl;
      				int temp = stack_index + 2 + symbolTable->getParamNum();
      				antlrcpp::downCast<VariableContext *>(_localctx)->name =  "[BP+"+to_string(temp*2)+"]";
      			}
      			else{
      				antlrcpp::downCast<VariableContext *>(_localctx)->name =  "[BP"+to_string(-symbolTable->getStackIndex(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText())*2)+"]";
      			}
      		}
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      antlrcpp::downCast<VariableContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(266);
      match(C8086Parser::LTHIRD);
      setState(267);
      expression();
      setState(268);
      match(C8086Parser::RTHIRD);

      		if(symbolTable->getVariableScope(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText()) == "global"){
      			antlrcpp::downCast<VariableContext *>(_localctx)->name =  antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText()+"[BX]";
      		}
      		else {
      			antlrcpp::downCast<VariableContext *>(_localctx)->name =  "[BP+SI]";
      		}
      		antlrcpp::downCast<VariableContext *>(_localctx)->type =  "array";
      		antlrcpp::downCast<VariableContext *>(_localctx)->stack_index =  symbolTable->getStackIndex(antlrcpp::downCast<VariableContext *>(_localctx)->idToken->getText());
      		write("\tPUSH AX");
      	
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
  enterRule(_localctx, 34, C8086Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(273);
      logic_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(274);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->v = variable();
      setState(275);
      match(C8086Parser::ASSIGNOP);
      setState(276);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->le = logic_expression();

      		if(antlrcpp::downCast<ExpressionContext *>(_localctx)->v->type == "array" && antlrcpp::downCast<ExpressionContext *>(_localctx)->v->name != "[BP+SI]") {
      			write("\tPOP BX");
      			write("\tPUSH AX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      			write("\tPOP AX");
      		}
      		else if(antlrcpp::downCast<ExpressionContext *>(_localctx)->v->type == "array"){
      			write("\tPOP BX");
      			write("\tPUSH AX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      			write("\tMOV AX, "+to_string(antlrcpp::downCast<ExpressionContext *>(_localctx)->v->stack_index*2));
      			write("\tSUB AX, BX");
      			write("\tMOV BX, AX");
      			write("\tPOP AX");
      			write("\tMOV SI, BX");
      			write("\tNEG SI");
      		}
      		write("\tMOV "+antlrcpp::downCast<ExpressionContext *>(_localctx)->v->name+", AX");
      	
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
  enterRule(_localctx, 36, C8086Parser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(281);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->re = rel_expression();

      		antlrcpp::downCast<Logic_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Logic_expressionContext *>(_localctx)->re->type;
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(284);
      rel_expression();
      setState(285);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken = match(C8086Parser::LOGICOP);

      		int true_label, false_label,end_label;
      		true_label = label_count++;
      		false_label = label_count++;
      		end_label = label_count++;
      		write("\tCMP AX, 0");
      		if(antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken->getText() == "||"){
      			write("\tJNE L"+to_string(true_label));
      		}
      		else{
      			write("\tJE L"+to_string(false_label));
      		}
      	
      setState(287);
      rel_expression();

      			write("\tCMP AX, 0");
      		if(antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken->getText() == "||"){
      			write("\tJNE L"+to_string(true_label));
      			write("\tJMP L"+to_string(false_label));
      		}
      		else{
      			write("\tJE L"+to_string(false_label));
      			write("\tJMP L"+to_string(true_label));
      		}
      		write("L"+to_string(true_label)+":");
      		write("MOV AX, 1\n\tJMP L"+to_string(end_label));
      		write("L"+to_string(false_label)+":");
      		write("MOV AX, 0");
      		write("L"+to_string(end_label)+":");
      	
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
  enterRule(_localctx, 38, C8086Parser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(292);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->se = simple_expression(0);

      		antlrcpp::downCast<Rel_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Rel_expressionContext *>(_localctx)->se->type;
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(295);
      simple_expression(0);
      setState(296);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken = match(C8086Parser::RELOP);

      		write("\tMOV DX, AX");
      	
      setState(298);
      simple_expression(0);

      		write("\tCMP DX, AX");
      		string relop = antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken->getText();
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

C8086Parser::Simple_expressionContext* C8086Parser::Simple_expressionContext::simple_expression() {
  return getRuleContext<C8086Parser::Simple_expressionContext>(0);
}

tree::TerminalNode* C8086Parser::Simple_expressionContext::ADDOP() {
  return getToken(C8086Parser::ADDOP, 0);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, C8086Parser::RuleSimple_expression, precedence);

    

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
    setState(304);
    antlrcpp::downCast<Simple_expressionContext *>(_localctx)->t = term(0);

    		antlrcpp::downCast<Simple_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Simple_expressionContext *>(_localctx)->t->type;
    	
    _ctx->stop = _input->LT(-1);
    setState(315);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(307);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");

                  		write("\tPUSH AX");
                  	
        setState(309);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(310);
        term(0);

                  		if(antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken->getText() == "+"){
                  			write("\tPOP BX");
                  			write("\tADD AX,BX");
                  		}
                  		else{
                  			write("\tMOV BX, AX");
                  			write("\tPOP AX");
                  			write("\tSUB AX, BX");
                  		}
                  	 
      }
      setState(317);
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, C8086Parser::RuleTerm, precedence);

    

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
    setState(319);
    antlrcpp::downCast<TermContext *>(_localctx)->ue = unary_expression();

    		antlrcpp::downCast<TermContext *>(_localctx)->type =  antlrcpp::downCast<TermContext *>(_localctx)->ue->type;
    	
    _ctx->stop = _input->LT(-1);
    setState(330);
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
        setState(322);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(323);
        antlrcpp::downCast<TermContext *>(_localctx)->mulopToken = match(C8086Parser::MULOP);

                  		if(antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%"){
                  			division = 1;	
                  		}
                  		else{
                  			write("\tPUSH AX");
                  		}
                  	
        setState(325);
        unary_expression();

                  		if(antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%"){
                  			write("\tCWD\n\tDIV CX\n\tMOV AX,DX");
                  			division = 0;
                  		}
                  		else{
                  			write("\tPOP CX");
                  			write("\tCWD\n\tMUL CX");
                  		}
                  	 
      }
      setState(332);
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
  enterRule(_localctx, 44, C8086Parser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(342);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ADDOP: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        match(C8086Parser::ADDOP);
        setState(334);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->ue = unary_expression();

        		antlrcpp::downCast<Unary_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->ue->type;
        		write("\tNEG AX");
        	
        break;
      }

      case C8086Parser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        match(C8086Parser::NOT);
        setState(338);
        unary_expression();
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(339);
        antlrcpp::downCast<Unary_expressionContext *>(_localctx)->f = factor();

        		antlrcpp::downCast<Unary_expressionContext *>(_localctx)->type =  antlrcpp::downCast<Unary_expressionContext *>(_localctx)->f->type;
        	
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

C8086Parser::Argument_listContext* C8086Parser::FactorContext::argument_list() {
  return getRuleContext<C8086Parser::Argument_listContext>(0);
}

tree::TerminalNode* C8086Parser::FactorContext::RPAREN() {
  return getToken(C8086Parser::RPAREN, 0);
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
  enterRule(_localctx, 46, C8086Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(344);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();

      		antlrcpp::downCast<FactorContext *>(_localctx)->type =  antlrcpp::downCast<FactorContext *>(_localctx)->v->type;
      		if(division == 1){
      			write("\tMOV CX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		}
      		else{
      			write("L"+to_string(label_count)+":");
      			label_count++;
      			if(_localctx->type == "array" && antlrcpp::downCast<FactorContext *>(_localctx)->v->name != "[BP+SI]"){
      				write("\tPOP BX");
      				write("\tMOV AX, 2");
      				write("\tMUL BX");
      				write("\tMOV BX, AX");
      			}
      			else if(_localctx->type == "array"){
      				write("\tPOP BX");
      				write("\tPUSH AX");
      				write("\tMOV AX, 2");
      				write("\tMUL BX");
      				write("\tMOV BX, AX");
      				write("\tMOV AX, "+to_string(antlrcpp::downCast<FactorContext *>(_localctx)->v->stack_index*2));
      				write("\tSUB AX, BX");
      				write("\tMOV SI, AX");
      				write("\tPOP AX");
      				write("\tNEG SI");
      			}
      			write("\tMOV AX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		}
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(347);
      antlrcpp::downCast<FactorContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(348);
      match(C8086Parser::LPAREN);
      setState(349);
      argument_list();
      setState(350);
      match(C8086Parser::RPAREN);

      		write("\tCALL "+antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText());
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(353);
      match(C8086Parser::LPAREN);
      setState(354);
      expression();
      setState(355);
      match(C8086Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(357);
      antlrcpp::downCast<FactorContext *>(_localctx)->const_intToken = match(C8086Parser::CONST_INT);

      		if(division == 1){
      			write("\tMOV CX, " + antlrcpp::downCast<FactorContext *>(_localctx)->const_intToken->getText());	
      		}
      		else{
      			write("\tMOV AX, " + antlrcpp::downCast<FactorContext *>(_localctx)->const_intToken->getText());
      		}
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(359);
      antlrcpp::downCast<FactorContext *>(_localctx)->const_floatToken = match(C8086Parser::CONST_FLOAT);

      		if(division == 1){
      			write("\tMOV CX, " + antlrcpp::downCast<FactorContext *>(_localctx)->const_floatToken->getText());	
      		}
      		else{
      			write("\tMOV AX, " + antlrcpp::downCast<FactorContext *>(_localctx)->const_floatToken->getText());
      		}
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(361);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();
      setState(362);
      match(C8086Parser::INCOP);

      		if(antlrcpp::downCast<FactorContext *>(_localctx)->v->type == "array" && antlrcpp::downCast<FactorContext *>(_localctx)->v->name != "[BP+SI]"){
      			write("\tPOP BX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      		}
      		else if(antlrcpp::downCast<FactorContext *>(_localctx)->v->type == "array"){
      			write("\tPOP BX");
      			write("\tPUSH AX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      			write("\tMOV AX, "+to_string(antlrcpp::downCast<FactorContext *>(_localctx)->v->stack_index*2));
      			write("\tSUB AX, BX");
      			write("\tMOV SI, AX");
      			write("\tPOP AX");
      			write("\tNEG SI");
      		}
      		write("L"+to_string(label_count)+":");
      		label_count++;
      		write("\tMOV AX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		write("\tPUSH AX");
      		write("\tINC AX");
      		write("\tMOV "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name+", AX");
      		write("\tPOP AX");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(365);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();
      setState(366);
      match(C8086Parser::DECOP);

      		if(antlrcpp::downCast<FactorContext *>(_localctx)->v->type == "array" && antlrcpp::downCast<FactorContext *>(_localctx)->v->name != "[BP+SI]"){
      			write("\tPOP BX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      		}
      		else if(antlrcpp::downCast<FactorContext *>(_localctx)->v->type == "array"){
      			write("\tPOP BX");
      			write("\tPUSH AX");
      			write("\tMOV AX, 2");
      			write("\tMUL BX");
      			write("\tMOV BX, AX");
      			write("\tMOV AX, "+to_string(antlrcpp::downCast<FactorContext *>(_localctx)->v->stack_index*2));
      			write("\tSUB AX, BX");
      			write("\tMOV SI, AX");
      			write("\tPOP AX");
      			write("\tNEG SI");
      		}
      		write("L"+to_string(label_count)+":");
      		label_count++;
      		write("\tMOV AX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		write("\tPUSH AX");
      		write("\tDEC AX");
      		write("\tMOV "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name+", AX");
      		write("\tPOP AX");
      	
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
  enterRule(_localctx, 48, C8086Parser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(373);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(371);
        arguments(0);
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

C8086Parser::ArgumentsContext* C8086Parser::ArgumentsContext::arguments() {
  return getRuleContext<C8086Parser::ArgumentsContext>(0);
}

tree::TerminalNode* C8086Parser::ArgumentsContext::COMMA() {
  return getToken(C8086Parser::COMMA, 0);
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
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, C8086Parser::RuleArguments, precedence);

    

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
    setState(376);
    logic_expression();

    		write("\tPUSH AX");
    	
    _ctx->stop = _input->LT(-1);
    setState(386);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArguments);
        setState(379);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(380);
        match(C8086Parser::COMMA);
        setState(381);
        logic_expression();

                  		write("\tPUSH AX");
                  	 
      }
      setState(388);
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

bool C8086Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return programSempred(antlrcpp::downCast<ProgramContext *>(context), predicateIndex);
    case 7: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 12: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 13: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 20: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 21: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 25: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

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
