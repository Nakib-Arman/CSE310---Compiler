#pragma once
#include <iostream>
#include <sstream>
#include "2105128_function.cpp"
using namespace std;

class SymbolInfo
{
    string name, type, scope;
    int stack_index;
    SymbolInfo *next;
    Function *func;

public:
    SymbolInfo(string name, string type, string scope, int stack_index, Function *func=NULL)
    {
        this->name = name;
        this->type = type;
        this->scope = scope;
        this->stack_index = stack_index;
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

    string getScope()
    {
        return scope;
    }

    int getStackIndex()
    {
        return stack_index'
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

    void setScope(string scope)
    {
        this->scope = scope;
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
        cout << "< " << name << " : " << type<< ">";
    }
};