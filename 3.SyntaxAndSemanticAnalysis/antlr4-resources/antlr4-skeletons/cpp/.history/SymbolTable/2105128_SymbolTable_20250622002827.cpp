#pragma once
#include <iostream>
#include "2105128_ScopeTable.cpp"
using namespace std;

class SymbolTable
{
    ScopeTable *current_scope;
    int number_of_scopes, num_buckets;
    using HashFunctionPtr = unsigned int (HashFunction::*)(string, unsigned int);
    HashFunctionPtr hash_function;
    int collision;

public:
    SymbolTable(int n, HashFunctionPtr func)
    {
        number_of_scopes = 1;
        this->hash_function = func;
        this->num_buckets = n;
        current_scope = new ScopeTable(num_buckets, number_of_scopes, func);
        current_scope->setParentScope(NULL);
        collision = 0;
    }

    ~SymbolTable()
    {
        while (current_scope != NULL)
        {
            ScopeTable *temp = current_scope;
            current_scope = current_scope->getParentScope();
            delete temp;
        }
    }

    int getCollision()
    {
        ScopeTable *curr = current_scope;
        while (curr != NULL)
        {
            collision += curr->getCollision();
            curr = curr->getParentScope();
        }
        return static_cast<float>(collision) / number_of_scopes;
    }

    void EnterScope()
    {
        ScopeTable *newScope = new ScopeTable(num_buckets, ++number_of_scopes, hash_function);
        newScope->setParentScope(current_scope);
        current_scope = newScope;
    }

    void ExitScope()
    {
        if (current_scope->getParentScope() == NULL)
        {
            return;
        }
        ScopeTable *temp = current_scope;
        current_scope = current_scope->getParentScope();
        collision += temp->getCollision();
        delete temp;
    }

    bool insert(string name, string type, string extra_info)
    {
        bool inserted = current_scope->insert(name, type, extra_info);
        return inserted;
    }

    bool remove(string name)
    {
        bool removed = current_scope->remove(name);
        return removed;
    }

    SymbolInfo *LookUp(string name)
    {
        ScopeTable *curr = current_scope;
        SymbolInfo *found_symbol = NULL;
        while (curr != NULL)
        {
            found_symbol = curr->LookUp(name);
            if (found_symbol != NULL)
                break;
            curr = curr->getParentScope();
        }
        if (found_symbol == NULL)
        {
            cout << "\t'" << name << "'" << " not found in any of the ScopeTables" << endl;
        }
        return found_symbol;
    }

    void print_current_scope()
    {
        current_scope->print(1);
    }

    void print_all_scope()
    {
        int num_of_tabs = 1;
        ScopeTable *curr = current_scope;
        while (curr != NULL)
        {
            curr->print(num_of_tabs);
            num_of_tabs++;
            curr = curr->getParentScope();
        }
    }
};