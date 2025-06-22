#pragma once
#include <iostream>
#include "2105128_ScopeTable.cpp"
using namespace std;

class SymbolTable
{
    ScopeTable *current_scope;
    int number_of_scopes, num_buckets;
    string id;
    using HashFunctionPtr = unsigned int (HashFunction::*)(const char *,int);
    HashFunctionPtr hash_function;
    int collision;

public:
    SymbolTable(int n, HashFunctionPtr func);
    ~SymbolTable();
    int getCollision();
    void EnterScope();
    void ExitScope();
    pair<string,pair<int,int>> insert(string name, string type, string extra_info);
    bool remove(string name);
    SymbolInfo *LookUp(string name);
    void print_current_scope();
    void print_all_scope();
    
};