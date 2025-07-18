
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
  	4,1,33,380,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	12,3,12,166,8,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,
  	12,178,8,12,10,12,12,12,181,9,12,1,13,1,13,1,13,1,13,1,13,5,13,188,8,
  	13,10,13,12,13,191,9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,255,8,14,
  	1,15,1,15,1,15,1,15,3,15,261,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	3,16,270,8,16,1,17,1,17,1,17,1,17,1,17,1,17,3,17,278,8,17,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,3,18,287,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,3,19,296,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,307,
  	8,20,10,20,12,20,310,9,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	5,21,321,8,21,10,21,12,21,324,9,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	3,22,333,8,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	3,23,360,8,23,1,24,1,24,3,24,364,8,24,1,25,1,25,1,25,1,25,1,25,1,25,1,
  	25,1,25,1,25,5,25,375,8,25,10,25,12,25,378,9,25,1,25,0,7,2,14,24,26,40,
  	42,50,26,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,0,1,1,0,11,13,395,0,52,1,0,0,0,2,56,1,0,0,0,4,69,1,0,0,0,
  	6,84,1,0,0,0,8,101,1,0,0,0,10,106,1,0,0,0,12,112,1,0,0,0,14,120,1,0,0,
  	0,16,142,1,0,0,0,18,144,1,0,0,0,20,148,1,0,0,0,22,156,1,0,0,0,24,165,
  	1,0,0,0,26,182,1,0,0,0,28,254,1,0,0,0,30,260,1,0,0,0,32,269,1,0,0,0,34,
  	277,1,0,0,0,36,286,1,0,0,0,38,295,1,0,0,0,40,297,1,0,0,0,42,311,1,0,0,
  	0,44,332,1,0,0,0,46,359,1,0,0,0,48,363,1,0,0,0,50,365,1,0,0,0,52,53,6,
  	0,-1,0,53,54,3,2,1,0,54,55,6,0,-1,0,55,1,1,0,0,0,56,57,6,1,-1,0,57,58,
  	3,4,2,0,58,63,1,0,0,0,59,60,10,2,0,0,60,62,3,4,2,0,61,59,1,0,0,0,62,65,
  	1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,3,1,0,0,0,65,63,1,0,0,0,66,70,
  	3,18,9,0,67,70,3,6,3,0,68,70,3,8,4,0,69,66,1,0,0,0,69,67,1,0,0,0,69,68,
  	1,0,0,0,70,5,1,0,0,0,71,72,3,20,10,0,72,73,5,31,0,0,73,74,5,14,0,0,74,
  	75,3,14,7,0,75,76,5,15,0,0,76,77,5,20,0,0,77,85,1,0,0,0,78,79,3,20,10,
  	0,79,80,5,31,0,0,80,81,5,14,0,0,81,82,5,15,0,0,82,83,5,20,0,0,83,85,1,
  	0,0,0,84,71,1,0,0,0,84,78,1,0,0,0,85,7,1,0,0,0,86,87,3,12,6,0,87,88,3,
  	10,5,0,88,89,5,14,0,0,89,90,3,14,7,0,90,91,5,15,0,0,91,92,3,16,8,0,92,
  	93,6,4,-1,0,93,102,1,0,0,0,94,95,3,12,6,0,95,96,3,10,5,0,96,97,5,14,0,
  	0,97,98,5,15,0,0,98,99,3,16,8,0,99,100,6,4,-1,0,100,102,1,0,0,0,101,86,
  	1,0,0,0,101,94,1,0,0,0,102,9,1,0,0,0,103,104,5,31,0,0,104,107,6,5,-1,
  	0,105,107,1,0,0,0,106,103,1,0,0,0,106,105,1,0,0,0,107,11,1,0,0,0,108,
  	109,3,20,10,0,109,110,6,6,-1,0,110,113,1,0,0,0,111,113,1,0,0,0,112,108,
  	1,0,0,0,112,111,1,0,0,0,113,13,1,0,0,0,114,115,6,7,-1,0,115,116,3,20,
  	10,0,116,117,5,31,0,0,117,118,6,7,-1,0,118,121,1,0,0,0,119,121,3,20,10,
  	0,120,114,1,0,0,0,120,119,1,0,0,0,121,133,1,0,0,0,122,123,10,4,0,0,123,
  	124,5,21,0,0,124,125,3,20,10,0,125,126,5,31,0,0,126,127,6,7,-1,0,127,
  	132,1,0,0,0,128,129,10,3,0,0,129,130,5,21,0,0,130,132,3,20,10,0,131,122,
  	1,0,0,0,131,128,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,
  	0,134,15,1,0,0,0,135,133,1,0,0,0,136,137,5,16,0,0,137,138,3,26,13,0,138,
  	139,5,17,0,0,139,143,1,0,0,0,140,141,5,16,0,0,141,143,5,17,0,0,142,136,
  	1,0,0,0,142,140,1,0,0,0,143,17,1,0,0,0,144,145,3,22,11,0,145,146,3,24,
  	12,0,146,147,5,20,0,0,147,19,1,0,0,0,148,149,7,0,0,0,149,21,1,0,0,0,150,
  	151,5,11,0,0,151,157,6,11,-1,0,152,153,5,12,0,0,153,157,6,11,-1,0,154,
  	155,5,13,0,0,155,157,6,11,-1,0,156,150,1,0,0,0,156,152,1,0,0,0,156,154,
  	1,0,0,0,157,23,1,0,0,0,158,159,6,12,-1,0,159,160,5,31,0,0,160,166,6,12,
  	-1,0,161,162,5,31,0,0,162,163,5,18,0,0,163,164,5,32,0,0,164,166,5,19,
  	0,0,165,158,1,0,0,0,165,161,1,0,0,0,166,179,1,0,0,0,167,168,10,4,0,0,
  	168,169,5,21,0,0,169,170,5,31,0,0,170,178,6,12,-1,0,171,172,10,3,0,0,
  	172,173,5,21,0,0,173,174,5,31,0,0,174,175,5,18,0,0,175,176,5,32,0,0,176,
  	178,5,19,0,0,177,167,1,0,0,0,177,171,1,0,0,0,178,181,1,0,0,0,179,177,
  	1,0,0,0,179,180,1,0,0,0,180,25,1,0,0,0,181,179,1,0,0,0,182,183,6,13,-1,
  	0,183,184,3,28,14,0,184,189,1,0,0,0,185,186,10,1,0,0,186,188,3,28,14,
  	0,187,185,1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,
  	27,1,0,0,0,191,189,1,0,0,0,192,193,3,18,9,0,193,194,6,14,-1,0,194,255,
  	1,0,0,0,195,196,3,30,15,0,196,197,6,14,-1,0,197,255,1,0,0,0,198,199,3,
  	16,8,0,199,200,6,14,-1,0,200,255,1,0,0,0,201,202,5,7,0,0,202,203,5,14,
  	0,0,203,204,3,30,15,0,204,205,6,14,-1,0,205,206,3,30,15,0,206,207,6,14,
  	-1,0,207,208,3,34,17,0,208,209,6,14,-1,0,209,210,5,15,0,0,210,211,6,14,
  	-1,0,211,212,3,28,14,0,212,213,6,14,-1,0,213,255,1,0,0,0,214,215,5,5,
  	0,0,215,216,5,14,0,0,216,217,3,34,17,0,217,218,5,15,0,0,218,219,6,14,
  	-1,0,219,220,3,28,14,0,220,221,6,14,-1,0,221,255,1,0,0,0,222,223,5,5,
  	0,0,223,224,5,14,0,0,224,225,3,34,17,0,225,226,5,15,0,0,226,227,6,14,
  	-1,0,227,228,3,28,14,0,228,229,5,6,0,0,229,230,6,14,-1,0,230,231,3,28,
  	14,0,231,232,6,14,-1,0,232,255,1,0,0,0,233,234,5,8,0,0,234,235,5,14,0,
  	0,235,236,6,14,-1,0,236,237,3,34,17,0,237,238,5,15,0,0,238,239,6,14,-1,
  	0,239,240,3,28,14,0,240,241,6,14,-1,0,241,255,1,0,0,0,242,243,5,9,0,0,
  	243,244,5,14,0,0,244,245,5,31,0,0,245,246,5,15,0,0,246,247,5,20,0,0,247,
  	255,6,14,-1,0,248,249,6,14,-1,0,249,250,5,10,0,0,250,251,3,34,17,0,251,
  	252,5,20,0,0,252,253,6,14,-1,0,253,255,1,0,0,0,254,192,1,0,0,0,254,195,
  	1,0,0,0,254,198,1,0,0,0,254,201,1,0,0,0,254,214,1,0,0,0,254,222,1,0,0,
  	0,254,233,1,0,0,0,254,242,1,0,0,0,254,248,1,0,0,0,255,29,1,0,0,0,256,
  	261,5,20,0,0,257,258,3,34,17,0,258,259,5,20,0,0,259,261,1,0,0,0,260,256,
  	1,0,0,0,260,257,1,0,0,0,261,31,1,0,0,0,262,263,5,31,0,0,263,270,6,16,
  	-1,0,264,265,5,31,0,0,265,266,5,18,0,0,266,267,3,34,17,0,267,268,5,19,
  	0,0,268,270,1,0,0,0,269,262,1,0,0,0,269,264,1,0,0,0,270,33,1,0,0,0,271,
  	278,3,36,18,0,272,273,3,32,16,0,273,274,5,30,0,0,274,275,3,36,18,0,275,
  	276,6,17,-1,0,276,278,1,0,0,0,277,271,1,0,0,0,277,272,1,0,0,0,278,35,
  	1,0,0,0,279,287,3,38,19,0,280,281,3,38,19,0,281,282,5,29,0,0,282,283,
  	6,18,-1,0,283,284,3,38,19,0,284,285,6,18,-1,0,285,287,1,0,0,0,286,279,
  	1,0,0,0,286,280,1,0,0,0,287,37,1,0,0,0,288,296,3,40,20,0,289,290,3,40,
  	20,0,290,291,5,28,0,0,291,292,6,19,-1,0,292,293,3,40,20,0,293,294,6,19,
  	-1,0,294,296,1,0,0,0,295,288,1,0,0,0,295,289,1,0,0,0,296,39,1,0,0,0,297,
  	298,6,20,-1,0,298,299,3,42,21,0,299,308,1,0,0,0,300,301,10,1,0,0,301,
  	302,6,20,-1,0,302,303,5,22,0,0,303,304,3,42,21,0,304,305,6,20,-1,0,305,
  	307,1,0,0,0,306,300,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,308,309,1,
  	0,0,0,309,41,1,0,0,0,310,308,1,0,0,0,311,312,6,21,-1,0,312,313,3,44,22,
  	0,313,322,1,0,0,0,314,315,10,1,0,0,315,316,5,24,0,0,316,317,6,21,-1,0,
  	317,318,3,44,22,0,318,319,6,21,-1,0,319,321,1,0,0,0,320,314,1,0,0,0,321,
  	324,1,0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,43,1,0,0,0,324,322,1,
  	0,0,0,325,326,5,22,0,0,326,327,3,44,22,0,327,328,6,22,-1,0,328,333,1,
  	0,0,0,329,330,5,27,0,0,330,333,3,44,22,0,331,333,3,46,23,0,332,325,1,
  	0,0,0,332,329,1,0,0,0,332,331,1,0,0,0,333,45,1,0,0,0,334,335,3,32,16,
  	0,335,336,6,23,-1,0,336,360,1,0,0,0,337,338,5,31,0,0,338,339,5,14,0,0,
  	339,340,3,48,24,0,340,341,5,15,0,0,341,342,6,23,-1,0,342,360,1,0,0,0,
  	343,344,5,14,0,0,344,345,3,34,17,0,345,346,5,15,0,0,346,360,1,0,0,0,347,
  	348,5,32,0,0,348,360,6,23,-1,0,349,350,5,33,0,0,350,360,6,23,-1,0,351,
  	352,3,32,16,0,352,353,5,25,0,0,353,354,6,23,-1,0,354,360,1,0,0,0,355,
  	356,3,32,16,0,356,357,5,26,0,0,357,358,6,23,-1,0,358,360,1,0,0,0,359,
  	334,1,0,0,0,359,337,1,0,0,0,359,343,1,0,0,0,359,347,1,0,0,0,359,349,1,
  	0,0,0,359,351,1,0,0,0,359,355,1,0,0,0,360,47,1,0,0,0,361,364,3,50,25,
  	0,362,364,1,0,0,0,363,361,1,0,0,0,363,362,1,0,0,0,364,49,1,0,0,0,365,
  	366,6,25,-1,0,366,367,3,36,18,0,367,368,6,25,-1,0,368,376,1,0,0,0,369,
  	370,10,2,0,0,370,371,5,21,0,0,371,372,3,36,18,0,372,373,6,25,-1,0,373,
  	375,1,0,0,0,374,369,1,0,0,0,375,378,1,0,0,0,376,374,1,0,0,0,376,377,1,
  	0,0,0,377,51,1,0,0,0,378,376,1,0,0,0,27,63,69,84,101,106,112,120,131,
  	133,142,156,165,177,179,189,254,260,269,277,286,295,308,322,332,359,363,
  	376
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
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(159);
      antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

      		if(symbolTable->getCurrentScopeID() == "1"){
      			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"global",NULL);
      			write("\t"+antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
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
      match(C8086Parser::CONST_INT);
      setState(164);
      match(C8086Parser::RTHIRD);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(179);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(177);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Declaration_listContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDeclaration_list);
          setState(167);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(168);
          match(C8086Parser::COMMA);
          setState(169);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);

                    		if(symbolTable->getCurrentScopeID() == "1"){
                    			symbolTable->insert(antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText(),datatype,"global",NULL);
                    			write("\t"+antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken->getText()+" DW "+to_string(arr_length)+" DUP (0000H)");
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
          setState(171);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(172);
          match(C8086Parser::COMMA);
          setState(173);
          antlrcpp::downCast<Declaration_listContext *>(_localctx)->idToken = match(C8086Parser::ID);
          setState(174);
          match(C8086Parser::LTHIRD);
          setState(175);
          match(C8086Parser::CONST_INT);
          setState(176);
          match(C8086Parser::RTHIRD);
          break;
        }

        default:
          break;
        } 
      }
      setState(181);
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
    setState(183);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatements);
        setState(185);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(186);
        statement(); 
      }
      setState(191);
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
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      var_declaration();

      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(195);
      expression_statement();

      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(198);
      compound_statement();

      	
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(201);
      match(C8086Parser::FOR);
      setState(202);
      match(C8086Parser::LPAREN);
      setState(203);
      expression_statement();

      		int begin_label = label_count;
      	
      setState(205);
      antlrcpp::downCast<StatementContext *>(_localctx)->es = expression_statement();

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
      match(C8086Parser::RPAREN);

      		write("L"+to_string(true_label)+":");
      	
      setState(211);
      statement();

      		write("\tJMP L"+to_string(inc_label));
      		write("L"+to_string(end_label)+":");
      	
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(214);
      match(C8086Parser::IF);
      setState(215);
      match(C8086Parser::LPAREN);
      setState(216);
      expression();
      setState(217);
      match(C8086Parser::RPAREN);

      		write("\tCMP AX, 0");
      		write("\tJNE L"+to_string(label_count));
      		write("\tJMP L"+to_string(label_count+1));
      		write("L"+to_string(label_count)+":");
      		label_count++;
      	
      setState(219);
      statement();

      		write("L"+to_string(label_count)+":");
      		label_count++;
      	
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(222);
      match(C8086Parser::IF);
      setState(223);
      match(C8086Parser::LPAREN);
      setState(224);
      expression();
      setState(225);
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
      	
      setState(227);
      statement();
      setState(228);
      match(C8086Parser::ELSE);

      		write("\tJMP L"+to_string(end_label));
      		write("L"+to_string(else_label)+":");
      	
      setState(230);
      statement();

      		write("L"+to_string(end_label)+":");
      	
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(233);
      match(C8086Parser::WHILE);
      setState(234);
      match(C8086Parser::LPAREN);

      		int begin_label = label_count;
      	
      setState(236);
      expression();
      setState(237);
      match(C8086Parser::RPAREN);

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
      	
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(242);
      match(C8086Parser::PRINTLN);
      setState(243);
      match(C8086Parser::LPAREN);
      setState(244);
      antlrcpp::downCast<StatementContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(245);
      match(C8086Parser::RPAREN);
      setState(246);
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
      setState(249);
      match(C8086Parser::RETURN);
      setState(250);
      expression();
      setState(251);
      antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken = match(C8086Parser::SEMICOLON);

      		write("\tJMP L"+to_string(label_count)+"\t; Line "+to_string(antlrcpp::downCast<StatementContext *>(_localctx)->semicolonToken->getLine()));
      	
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
    setState(260);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(256);
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
        setState(257);
        expression();
        setState(258);
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
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(262);
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
      setState(264);
      match(C8086Parser::ID);
      setState(265);
      match(C8086Parser::LTHIRD);
      setState(266);
      expression();
      setState(267);
      match(C8086Parser::RTHIRD);
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
    setState(277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(271);
      logic_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(272);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->v = variable();
      setState(273);
      match(C8086Parser::ASSIGNOP);
      setState(274);
      antlrcpp::downCast<ExpressionContext *>(_localctx)->le = logic_expression();

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
    setState(286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(279);
      rel_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(280);
      rel_expression();
      setState(281);
      antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken = match(C8086Parser::LOGICOP);

      		write("\tCMP AX, 0");
      		if(antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken->getText() == "||"){
      			write("\tJNE L"+to_string(label_count));
      		}
      		else{
      			write("\tJE L"+to_string(label_count+1));
      		}
      	
      setState(283);
      rel_expression();

      		write("\tCMP AX, 0");
      		if(antlrcpp::downCast<Logic_expressionContext *>(_localctx)->logicopToken->getText() == "||"){
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
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(288);
      simple_expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(289);
      simple_expression(0);
      setState(290);
      antlrcpp::downCast<Rel_expressionContext *>(_localctx)->relopToken = match(C8086Parser::RELOP);

      		write("\tMOV DX, AX");
      	
      setState(292);
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
    setState(298);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(308);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(300);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");

                  		write("\tPUSH AX");
                  	
        setState(302);
        antlrcpp::downCast<Simple_expressionContext *>(_localctx)->addopToken = match(C8086Parser::ADDOP);
        setState(303);
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
      setState(310);
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
    setState(312);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(322);
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
        setState(314);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(315);
        antlrcpp::downCast<TermContext *>(_localctx)->mulopToken = match(C8086Parser::MULOP);

                  		if(antlrcpp::downCast<TermContext *>(_localctx)->mulopToken->getText() == "%"){
                  			division = 1;	
                  		}
                  		else{
                  			write("\tPUSH AX");
                  		}
                  	
        setState(317);
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
      setState(324);
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
    setState(332);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::ADDOP: {
        enterOuterAlt(_localctx, 1);
        setState(325);
        match(C8086Parser::ADDOP);
        setState(326);
        unary_expression();

        		write("\tNEG AX");
        	
        break;
      }

      case C8086Parser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        match(C8086Parser::NOT);
        setState(330);
        unary_expression();
        break;
      }

      case C8086Parser::LPAREN:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(331);
        factor();
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
    setState(359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(334);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();

      		if(division == 1){
      			write("\tMOV CX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		}
      		else{
      			write("L"+to_string(label_count)+":");
      			label_count++;
      			write("\tMOV AX, "+antlrcpp::downCast<FactorContext *>(_localctx)->v->name);
      		}
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(337);
      antlrcpp::downCast<FactorContext *>(_localctx)->idToken = match(C8086Parser::ID);
      setState(338);
      match(C8086Parser::LPAREN);
      setState(339);
      argument_list();
      setState(340);
      match(C8086Parser::RPAREN);

      		write("\tCALL "+antlrcpp::downCast<FactorContext *>(_localctx)->idToken->getText());
      	
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(343);
      match(C8086Parser::LPAREN);
      setState(344);
      expression();
      setState(345);
      match(C8086Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(347);
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
      setState(349);
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
      setState(351);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();
      setState(352);
      match(C8086Parser::INCOP);

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
      setState(355);
      antlrcpp::downCast<FactorContext *>(_localctx)->v = variable();
      setState(356);
      match(C8086Parser::DECOP);

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
    setState(363);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C8086Parser::LPAREN:
      case C8086Parser::ADDOP:
      case C8086Parser::NOT:
      case C8086Parser::ID:
      case C8086Parser::CONST_INT:
      case C8086Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(361);
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
    setState(366);
    logic_expression();

    		write("\tPUSH AX");
    	
    _ctx->stop = _input->LT(-1);
    setState(376);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArguments);
        setState(369);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(370);
        match(C8086Parser::COMMA);
        setState(371);
        logic_expression();

                  		write("\tPUSH AX");
                  	 
      }
      setState(378);
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
