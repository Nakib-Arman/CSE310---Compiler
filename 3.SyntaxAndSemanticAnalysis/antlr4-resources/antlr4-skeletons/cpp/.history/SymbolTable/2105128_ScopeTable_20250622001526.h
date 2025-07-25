#pragma once
#include <iostream>
#include "2105128_SymbolInfo.cpp"
#include "2105128_HashFunction.cpp"
using namespace std;

class ScopeTable
{
    int num_buckets;
    string id;
    ScopeTable *parent_scope;
    SymbolInfo **hash_table;
    using HashFunctionPtr = unsigned int (HashFunction::*)(const char*,int);
    HashFunctionPtr hash_function;
    HashFunction hash_function_generator;
    int collision;
    int number_of_children = 0;

public:

    ScopeTable(int n, string id, HashFunctionPtr func);
    ~ScopeTable();
    int getNumberOfBuckets();
    string getID();
    ScopeTable *getParentScope();
    int getCollision();
    int getNumberOfChildren();
    void setNumberOfBuckets(int num_buckets);
    void setID(string id);
    void setParentScope(ScopeTable *parent_scope);
    void setNumberOfChildren(int n);
    SymbolInfo *LookUp(string name);
    pair<SymbolInfo*,pair<int,int>> LookUp2(string name);
    pair<int,int> insert(string name, string type, string extra_info);
    bool remove(string name);
    void print(int num_of_tabs);
    void print_nonempty_indices();
};