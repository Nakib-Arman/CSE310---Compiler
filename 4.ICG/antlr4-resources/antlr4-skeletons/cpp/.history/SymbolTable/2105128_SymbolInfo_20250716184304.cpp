#pragma once
#include <iostream>
#include <sstream>
#include "2105128_function.cpp"
using namespace std;

class SymbolInfo
{
    string name, type;
    string extra_info;
    SymbolInfo *next;
    Function *func;

public:
    SymbolInfo(string name, string type, Function *func=NULL)
    {
        this->name = name;
        this->type = type;
        this->next = NULL;
        this->func = func;
    }

    ~SymbolInfo()
    {
        if (this->next != NULL)
            delete next;
    }

    string getName()
    {
        return name;
    }

    string getType()
    {
        return type;
    }

    SymbolInfo* getNext()
    {
        return next;
    }

    Function* getFunction()
    {
        return func;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setType(string type)
    {
        this->type = type;
    }

    void setNext(SymbolInfo *next)
    {
        this->next = next;
    }

    void setFunction(Function* func)
    {
        this->func = func;
    }

    void print()
    {
        cout << "< " << name << " : " << type<<" ";
        
        cout << ">";
    }
};