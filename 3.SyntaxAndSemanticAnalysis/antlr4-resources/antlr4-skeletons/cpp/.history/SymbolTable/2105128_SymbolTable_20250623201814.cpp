#pragma once
#include <iostream>
#include "2105128_ScopeTable.cpp"
using namespace std;

class SymbolTable
{
    ScopeTable *current_scope;
    int number_of_scopes, num_buckets;
    string id;
    using HashFunctionPtr = unsigned int (HashFunction::*)(string, unsigned int);
    HashFunctionPtr hash_function;
    int collision;

public:
    SymbolTable(int n, HashFunctionPtr func)
    {
        number_of_scopes = 1;
        id = "1";
        this->hash_function = func;
        this->num_buckets = n;
        current_scope = new ScopeTable(num_buckets, id, func);
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
        id = id + "." + to_string(current_scope->getNumberOfChildren()+1);
        current_scope->setNumberOfChildren(current_scope->getNumberOfChildren()+1);
        ScopeTable *newScope = new ScopeTable(num_buckets, id, hash_function);
        newScope->setParentScope(current_scope);
        current_scope = newScope;
    }

    void ExitScope()
    {
        if (current_scope->getParentScope() == NULL)
        {
            return;
        }
        size_t last_dot = id.rfind('.');
        if (last_dot != string::npos)
        {
            id = id.substr(0, last_dot);
        }
        ScopeTable *temp = current_scope;
        current_scope = current_scope->getParentScope();
        collision += temp->getCollision();
        delete temp;
    }

    bool insert(string name, string type,Function* func=NULL)
    {
        bool inserted = current_scope->insert(name, type, func);
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
        // if (found_symbol == NULL)
        // {
        //     cout << "\t'" << name << "'" << " not found in any of the ScopeTables" << endl;
        // }
        return found_symbol;
    }

    string getType(string name)
    {
        ScopeTable *curr = current_scope;
        string found_symbol = "";
        while (curr != NULL)
        {
            found_symbol = curr->getType(name);
            if (found_symbol != "")
                break;
            curr = curr->getParentScope();
        }
        // if (found_symbol == NULL)
        // {
        //     cout << "\t'" << name << "'" << " not found in any of the ScopeTables" << endl;
        // }
        return found_symbol;
    }

    Function* getFunc(string name)
    {
        ScopeTable *curr = current_scope;
        while(curr->getParentScope() != NULL) curr = curr->getParentScope();
        return curr->getFunc(name);
    }

    void setReturnType(string name, string return_type)
    {
        SymbolInfo* temp = LookUp
    }

    void print_current_scope(ofstream& file)
    {
        current_scope->print(1,file);
    }

    void print_all_scope(ofstream& file)
    {
        int num_of_tabs = 1;
        ScopeTable *curr = current_scope;
        while (curr != NULL)
        {
            curr->print(num_of_tabs,file);
            num_of_tabs++;
            curr = curr->getParentScope();
        }
    }

    void print_all_scope_nonempty_indices(ofstream& file)
    {
        ScopeTable *curr = current_scope;
        while (curr != NULL)
        {
            curr->print_nonempty_indices(file);
            curr = curr->getParentScope();
        }
        file<<endl;
    }
};