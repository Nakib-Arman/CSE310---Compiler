#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class SymbolInfo
{
    string name, type;
    string extra_info;
    SymbolInfo *next;

public:
    SymbolInfo(string name, string type, string extra_info);
    ~SymbolInfo();
    sting getName();
    string getType();
    Symbol
};
