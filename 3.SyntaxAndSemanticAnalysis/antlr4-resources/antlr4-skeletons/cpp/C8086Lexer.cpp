
    #pragma once
    #include <iostream>
    #include <fstream>
    #include <string>

    extern std::ofstream lexLogFile;


// Generated from C8086Lexer.g4 by ANTLR 4.13.2


#include "C8086Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct C8086LexerStaticData final {
  C8086LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  C8086LexerStaticData(const C8086LexerStaticData&) = delete;
  C8086LexerStaticData(C8086LexerStaticData&&) = delete;
  C8086LexerStaticData& operator=(const C8086LexerStaticData&) = delete;
  C8086LexerStaticData& operator=(C8086LexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag c8086lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<C8086LexerStaticData> c8086lexerLexerStaticData = nullptr;

void c8086lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (c8086lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(c8086lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<C8086LexerStaticData>(
    std::vector<std::string>{
      "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", "FOR", 
      "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "IN", "FORIN", 
      "FOREACH", "TO", "WHEN", "PRINT", "ARROW", "LPAREN", "RPAREN", "LCURL", 
      "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", "QMARK", "COLON", 
      "ADDOP", "SUBOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", 
      "ASSIGNOP", "HASH", "ID", "CONST_INT", "CONST_FLOAT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,43,389,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,1,0,1,0,1,0,1,0,5,0,92,8,0,10,0,12,0,95,9,0,1,0,1,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,5,1,106,8,1,10,1,12,1,109,9,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,5,2,122,8,2,10,2,12,2,125,9,2,1,2,1,2,1,2,1,2,1,2,
  	1,3,4,3,133,8,3,11,3,12,3,134,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,
  	1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,
  	1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,
  	1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,33,
  	1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,36,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,36,317,8,36,1,37,1,37,
  	1,37,1,37,1,37,1,37,3,37,325,8,37,1,38,1,38,1,38,1,39,1,39,1,40,1,40,
  	5,40,334,8,40,10,40,12,40,337,9,40,1,40,1,40,1,41,4,41,342,8,41,11,41,
  	12,41,343,1,41,1,41,1,42,4,42,349,8,42,11,42,12,42,350,1,42,1,42,5,42,
  	355,8,42,10,42,12,42,358,9,42,3,42,360,8,42,1,42,1,42,3,42,364,8,42,1,
  	42,4,42,367,8,42,11,42,12,42,368,3,42,371,8,42,1,42,1,42,1,42,4,42,376,
  	8,42,11,42,12,42,377,1,42,1,42,4,42,382,8,42,11,42,12,42,383,1,42,1,42,
  	3,42,388,8,42,1,107,0,43,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,
  	67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,1,0,10,2,
  	0,10,10,13,13,4,0,10,10,13,13,34,34,92,92,3,0,9,10,12,13,32,32,2,0,43,
  	43,45,45,3,0,37,37,42,42,47,47,2,0,60,60,62,62,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,69,69,101,101,411,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,
  	0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,
  	0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,
  	1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,1,87,1,0,
  	0,0,3,100,1,0,0,0,5,117,1,0,0,0,7,132,1,0,0,0,9,138,1,0,0,0,11,143,1,
  	0,0,0,13,150,1,0,0,0,15,156,1,0,0,0,17,164,1,0,0,0,19,173,1,0,0,0,21,
  	182,1,0,0,0,23,188,1,0,0,0,25,196,1,0,0,0,27,203,1,0,0,0,29,208,1,0,0,
  	0,31,216,1,0,0,0,33,226,1,0,0,0,35,231,1,0,0,0,37,238,1,0,0,0,39,248,
  	1,0,0,0,41,253,1,0,0,0,43,256,1,0,0,0,45,259,1,0,0,0,47,262,1,0,0,0,49,
  	265,1,0,0,0,51,268,1,0,0,0,53,271,1,0,0,0,55,274,1,0,0,0,57,277,1,0,0,
  	0,59,280,1,0,0,0,61,283,1,0,0,0,63,286,1,0,0,0,65,289,1,0,0,0,67,292,
  	1,0,0,0,69,297,1,0,0,0,71,302,1,0,0,0,73,316,1,0,0,0,75,324,1,0,0,0,77,
  	326,1,0,0,0,79,329,1,0,0,0,81,331,1,0,0,0,83,341,1,0,0,0,85,387,1,0,0,
  	0,87,88,5,47,0,0,88,89,5,47,0,0,89,93,1,0,0,0,90,92,8,0,0,0,91,90,1,0,
  	0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,
  	0,0,96,97,6,0,0,0,97,98,1,0,0,0,98,99,6,0,1,0,99,2,1,0,0,0,100,101,5,
  	47,0,0,101,102,5,42,0,0,102,107,1,0,0,0,103,106,9,0,0,0,104,106,7,0,0,
  	0,105,103,1,0,0,0,105,104,1,0,0,0,106,109,1,0,0,0,107,108,1,0,0,0,107,
  	105,1,0,0,0,108,110,1,0,0,0,109,107,1,0,0,0,110,111,5,42,0,0,111,112,
  	5,47,0,0,112,113,1,0,0,0,113,114,6,1,2,0,114,115,1,0,0,0,115,116,6,1,
  	1,0,116,4,1,0,0,0,117,123,5,34,0,0,118,119,5,92,0,0,119,122,9,0,0,0,120,
  	122,8,1,0,0,121,118,1,0,0,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,
  	0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,127,5,34,0,
  	0,127,128,6,2,3,0,128,129,1,0,0,0,129,130,6,2,1,0,130,6,1,0,0,0,131,133,
  	7,2,0,0,132,131,1,0,0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,
  	0,135,136,1,0,0,0,136,137,6,3,1,0,137,8,1,0,0,0,138,139,5,105,0,0,139,
  	140,5,102,0,0,140,141,1,0,0,0,141,142,6,4,4,0,142,10,1,0,0,0,143,144,
  	5,101,0,0,144,145,5,108,0,0,145,146,5,115,0,0,146,147,5,101,0,0,147,148,
  	1,0,0,0,148,149,6,5,5,0,149,12,1,0,0,0,150,151,5,102,0,0,151,152,5,111,
  	0,0,152,153,5,114,0,0,153,154,1,0,0,0,154,155,6,6,6,0,155,14,1,0,0,0,
  	156,157,5,119,0,0,157,158,5,104,0,0,158,159,5,105,0,0,159,160,5,108,0,
  	0,160,161,5,101,0,0,161,162,1,0,0,0,162,163,6,7,7,0,163,16,1,0,0,0,164,
  	165,5,112,0,0,165,166,5,114,0,0,166,167,5,105,0,0,167,168,5,110,0,0,168,
  	169,5,116,0,0,169,170,5,102,0,0,170,171,1,0,0,0,171,172,6,8,8,0,172,18,
  	1,0,0,0,173,174,5,114,0,0,174,175,5,101,0,0,175,176,5,116,0,0,176,177,
  	5,117,0,0,177,178,5,114,0,0,178,179,5,110,0,0,179,180,1,0,0,0,180,181,
  	6,9,9,0,181,20,1,0,0,0,182,183,5,105,0,0,183,184,5,110,0,0,184,185,5,
  	116,0,0,185,186,1,0,0,0,186,187,6,10,10,0,187,22,1,0,0,0,188,189,5,102,
  	0,0,189,190,5,108,0,0,190,191,5,111,0,0,191,192,5,97,0,0,192,193,5,116,
  	0,0,193,194,1,0,0,0,194,195,6,11,11,0,195,24,1,0,0,0,196,197,5,118,0,
  	0,197,198,5,111,0,0,198,199,5,105,0,0,199,200,5,100,0,0,200,201,1,0,0,
  	0,201,202,6,12,12,0,202,26,1,0,0,0,203,204,5,105,0,0,204,205,5,110,0,
  	0,205,206,1,0,0,0,206,207,6,13,13,0,207,28,1,0,0,0,208,209,5,102,0,0,
  	209,210,5,111,0,0,210,211,5,114,0,0,211,212,5,105,0,0,212,213,5,110,0,
  	0,213,214,1,0,0,0,214,215,6,14,14,0,215,30,1,0,0,0,216,217,5,102,0,0,
  	217,218,5,111,0,0,218,219,5,114,0,0,219,220,5,101,0,0,220,221,5,97,0,
  	0,221,222,5,99,0,0,222,223,5,104,0,0,223,224,1,0,0,0,224,225,6,15,15,
  	0,225,32,1,0,0,0,226,227,5,116,0,0,227,228,5,111,0,0,228,229,1,0,0,0,
  	229,230,6,16,16,0,230,34,1,0,0,0,231,232,5,119,0,0,232,233,5,104,0,0,
  	233,234,5,101,0,0,234,235,5,110,0,0,235,236,1,0,0,0,236,237,6,17,17,0,
  	237,36,1,0,0,0,238,239,5,112,0,0,239,240,5,114,0,0,240,241,5,105,0,0,
  	241,242,5,110,0,0,242,243,5,116,0,0,243,244,5,108,0,0,244,245,5,110,0,
  	0,245,246,1,0,0,0,246,247,6,18,18,0,247,38,1,0,0,0,248,249,5,45,0,0,249,
  	250,5,62,0,0,250,251,1,0,0,0,251,252,6,19,19,0,252,40,1,0,0,0,253,254,
  	5,40,0,0,254,255,6,20,20,0,255,42,1,0,0,0,256,257,5,41,0,0,257,258,6,
  	21,21,0,258,44,1,0,0,0,259,260,5,123,0,0,260,261,6,22,22,0,261,46,1,0,
  	0,0,262,263,5,125,0,0,263,264,6,23,23,0,264,48,1,0,0,0,265,266,5,91,0,
  	0,266,267,6,24,24,0,267,50,1,0,0,0,268,269,5,93,0,0,269,270,6,25,25,0,
  	270,52,1,0,0,0,271,272,5,59,0,0,272,273,6,26,26,0,273,54,1,0,0,0,274,
  	275,5,44,0,0,275,276,6,27,27,0,276,56,1,0,0,0,277,278,5,63,0,0,278,279,
  	6,28,28,0,279,58,1,0,0,0,280,281,5,58,0,0,281,282,6,29,29,0,282,60,1,
  	0,0,0,283,284,7,3,0,0,284,285,6,30,30,0,285,62,1,0,0,0,286,287,7,3,0,
  	0,287,288,6,31,31,0,288,64,1,0,0,0,289,290,7,4,0,0,290,291,6,32,32,0,
  	291,66,1,0,0,0,292,293,5,43,0,0,293,294,5,43,0,0,294,295,1,0,0,0,295,
  	296,6,33,33,0,296,68,1,0,0,0,297,298,5,45,0,0,298,299,5,45,0,0,299,300,
  	1,0,0,0,300,301,6,34,34,0,301,70,1,0,0,0,302,303,5,33,0,0,303,304,6,35,
  	35,0,304,72,1,0,0,0,305,306,5,60,0,0,306,317,5,61,0,0,307,308,5,61,0,
  	0,308,317,5,61,0,0,309,310,5,62,0,0,310,317,5,61,0,0,311,317,7,5,0,0,
  	312,313,5,33,0,0,313,314,5,61,0,0,314,315,1,0,0,0,315,317,6,36,36,0,316,
  	305,1,0,0,0,316,307,1,0,0,0,316,309,1,0,0,0,316,311,1,0,0,0,316,312,1,
  	0,0,0,317,74,1,0,0,0,318,319,5,38,0,0,319,325,5,38,0,0,320,321,5,124,
  	0,0,321,322,5,124,0,0,322,323,1,0,0,0,323,325,6,37,37,0,324,318,1,0,0,
  	0,324,320,1,0,0,0,325,76,1,0,0,0,326,327,5,61,0,0,327,328,6,38,38,0,328,
  	78,1,0,0,0,329,330,5,35,0,0,330,80,1,0,0,0,331,335,7,6,0,0,332,334,7,
  	7,0,0,333,332,1,0,0,0,334,337,1,0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,
  	336,338,1,0,0,0,337,335,1,0,0,0,338,339,6,40,39,0,339,82,1,0,0,0,340,
  	342,7,8,0,0,341,340,1,0,0,0,342,343,1,0,0,0,343,341,1,0,0,0,343,344,1,
  	0,0,0,344,345,1,0,0,0,345,346,6,41,40,0,346,84,1,0,0,0,347,349,7,8,0,
  	0,348,347,1,0,0,0,349,350,1,0,0,0,350,348,1,0,0,0,350,351,1,0,0,0,351,
  	359,1,0,0,0,352,356,5,46,0,0,353,355,7,8,0,0,354,353,1,0,0,0,355,358,
  	1,0,0,0,356,354,1,0,0,0,356,357,1,0,0,0,357,360,1,0,0,0,358,356,1,0,0,
  	0,359,352,1,0,0,0,359,360,1,0,0,0,360,370,1,0,0,0,361,363,7,9,0,0,362,
  	364,7,3,0,0,363,362,1,0,0,0,363,364,1,0,0,0,364,366,1,0,0,0,365,367,7,
  	8,0,0,366,365,1,0,0,0,367,368,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,0,
  	369,371,1,0,0,0,370,361,1,0,0,0,370,371,1,0,0,0,371,372,1,0,0,0,372,388,
  	6,42,41,0,373,375,5,46,0,0,374,376,7,8,0,0,375,374,1,0,0,0,376,377,1,
  	0,0,0,377,375,1,0,0,0,377,378,1,0,0,0,378,379,1,0,0,0,379,388,6,42,42,
  	0,380,382,7,8,0,0,381,380,1,0,0,0,382,383,1,0,0,0,383,381,1,0,0,0,383,
  	384,1,0,0,0,384,385,1,0,0,0,385,386,5,46,0,0,386,388,6,42,43,0,387,348,
  	1,0,0,0,387,373,1,0,0,0,387,381,1,0,0,0,388,86,1,0,0,0,20,0,93,105,107,
  	121,123,134,316,324,335,343,350,356,359,363,368,370,377,383,387,44,1,
  	0,0,6,0,0,1,1,1,1,2,2,1,4,3,1,5,4,1,6,5,1,7,6,1,8,7,1,9,8,1,10,9,1,11,
  	10,1,12,11,1,13,12,1,14,13,1,15,14,1,16,15,1,17,16,1,18,17,1,19,18,1,
  	20,19,1,21,20,1,22,21,1,23,22,1,24,23,1,25,24,1,26,25,1,27,26,1,28,27,
  	1,29,28,1,30,29,1,31,30,1,32,31,1,33,32,1,34,33,1,35,34,1,36,35,1,37,
  	36,1,38,37,1,40,38,1,41,39,1,42,40,1,42,41,1,42,42
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  c8086lexerLexerStaticData = std::move(staticData);
}

}

C8086Lexer::C8086Lexer(CharStream *input) : Lexer(input) {
  C8086Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *c8086lexerLexerStaticData->atn, c8086lexerLexerStaticData->decisionToDFA, c8086lexerLexerStaticData->sharedContextCache);
}

C8086Lexer::~C8086Lexer() {
  delete _interpreter;
}

std::string C8086Lexer::getGrammarFileName() const {
  return "C8086Lexer.g4";
}

const std::vector<std::string>& C8086Lexer::getRuleNames() const {
  return c8086lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& C8086Lexer::getChannelNames() const {
  return c8086lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& C8086Lexer::getModeNames() const {
  return c8086lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& C8086Lexer::getVocabulary() const {
  return c8086lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView C8086Lexer::getSerializedATN() const {
  return c8086lexerLexerStaticData->serializedATN;
}

const atn::ATN& C8086Lexer::getATN() const {
  return *c8086lexerLexerStaticData->atn;
}


void C8086Lexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 0: LINE_COMMENTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 1: BLOCK_COMMENTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 2: STRINGAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 4: IFAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 5: ELSEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 6: FORAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 7: WHILEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 8: PRINTLNAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 9: RETURNAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 10: INTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 11: FLOATAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 12: VOIDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 13: INAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 14: FORINAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 15: FOREACHAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 16: TOAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 17: WHENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 18: PRINTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 19: ARROWAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 20: LPARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 21: RPARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 22: LCURLAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 23: RCURLAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 24: LTHIRDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 25: RTHIRDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 26: SEMICOLONAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 27: COMMAAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 28: QMARKAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 29: COLONAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 30: ADDOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 31: SUBOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 32: MULOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 33: INCOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 34: DECOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 35: NOTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 36: RELOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 37: LOGICOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 38: ASSIGNOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 40: IDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 41: CONST_INTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 42: CONST_FLOATAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void C8086Lexer::LINE_COMMENTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <SINGLE LINE COMMENT> Lexeme "
              + getText()
            );
         break;

  default:
    break;
  }
}

void C8086Lexer::BLOCK_COMMENTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1: 
          // extra braces create a new scope for your variables
          {
            std::string txt = getText();
            std::string content = txt.substr(2, txt.size() - 4);
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <MULTI LINE COMMENT> Lexeme /*"
              + content + "*/"
            );
          }
         break;

  default:
    break;
  }
}

void C8086Lexer::STRINGAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 2: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <STRING> Lexeme " + getText()
            );
         break;

  default:
    break;
  }
}

void C8086Lexer::IFAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 3:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <IF> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::ELSEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 4:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ELSE> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::FORAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 5:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FOR> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::WHILEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 6:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <WHILE> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::PRINTLNAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 7:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <PRINTLN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::RETURNAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 8:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RETURN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::INTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 9:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <INT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::FLOATAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 10:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FLOAT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::VOIDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 11:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <VOID> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::INAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 12:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <IN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::FORINAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 13:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FORIN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::FOREACHAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 14:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FOREACH> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::TOAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 15:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <TO> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::WHENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 16:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <WHEN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::PRINTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 17:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <PRINTLN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::ARROWAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 18:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ARROW> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::LPARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 19:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LPAREN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::RPARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 20:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RPAREN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::LCURLAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 21:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LCURL> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::RCURLAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 22:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RCURL> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::LTHIRDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 23:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LTHIRD> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::RTHIRDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 24:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RTHIRD> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::SEMICOLONAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 25:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <SEMICOLON> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::COMMAAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 26:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <COMMA> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::QMARKAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 27:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <QMARK> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::COLONAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 28:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <COLON> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::ADDOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 29:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ADDOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::SUBOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 30:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <SUBOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::MULOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 31:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <MULOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::INCOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 32:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <INCOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::DECOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 33:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <DECOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::NOTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 34:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <NOT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::RELOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 35:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RELOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::LOGICOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 36:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LOGICOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::ASSIGNOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 37:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ASSIGNOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::IDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 38:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ID> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::CONST_INTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 39:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <CONST_INT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void C8086Lexer::CONST_FLOATAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 40: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;
    case 41: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;
    case 42: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;

  default:
    break;
  }
}



void C8086Lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  c8086lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(c8086lexerLexerOnceFlag, c8086lexerLexerInitialize);
#endif
}
