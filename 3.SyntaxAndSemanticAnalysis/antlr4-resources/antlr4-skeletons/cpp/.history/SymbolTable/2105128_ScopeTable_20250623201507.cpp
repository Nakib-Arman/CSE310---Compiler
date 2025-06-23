#pragma once
#include <iostream>
#include <fstream>
#include "2105128_SymbolInfo.cpp"
#include "2105128_HashFunction.cpp"
using namespace std;

class ScopeTable
{
    int num_buckets;
    string id;
    ScopeTable *parent_scope;
    SymbolInfo **hash_table;
    using HashFunctionPtr = unsigned int (HashFunction::*)(string, unsigned);
    HashFunctionPtr hash_function;
    HashFunction hash_function_generator;
    int collision;
    int number_of_children = 0;

public:
    ScopeTable(int n, string id, HashFunctionPtr func)
    {
        num_buckets = n;
        this->id = id;
        this->hash_function = func;
        hash_table = new SymbolInfo *[num_buckets];
        for (int i = 0; i < num_buckets; i++)
        {
            hash_table[i] = NULL;
        }
        collision = 0;
        // cout << "\tScopeTable# " << id << " created" << endl;
    }

    ~ScopeTable()
    {
        for (int i = 0; i < num_buckets; i++)
        {
            if (hash_table[i] != NULL)
                delete hash_table[i];
        }
        delete[] hash_table;
        // cout << "\tScopeTable# " << id << " removed" << endl;
    }

    int getNumberOfBuckets()
    {
        return num_buckets;
    }

    string getID()
    {
        return id;
    }

    ScopeTable *getParentScope()
    {
        return parent_scope;
    }

    int getCollision()
    {
        return collision;
    }

    int getNumberOfChildren()
    {
        return number_of_children;
    }

    void setNumberOfBuckets(int num_buckets)
    {
        this->num_buckets = num_buckets;
    }

    void setID(string id)
    {
        this->id = id;
    }

    void setParentScope(ScopeTable *parent_scope)
    {
        this->parent_scope = parent_scope;
    }

    void setNumberOfChildren(int n)
    {
        this->number_of_children = n;
    }

    SymbolInfo *LookUp(string name)
    {
        int index = (hash_function_generator.*hash_function)(name, num_buckets);
        SymbolInfo *curr = hash_table[index];
        if (curr == NULL)
        {
            return curr;
        }
        int position = 1;
        while (curr->getName() != name)
        {
            curr = curr->getNext();
            position++;
            if (curr == NULL)
                break;
        }
        if (curr != NULL)
        {
            // cout << "\t'" << name << "'" << " found in ScopeTable# " << id << " at position " << index + 1 << ", " << position << endl;
        }
        return curr;
    }

    string getType(string name)
    {
        int index = (hash_function_generator.*hash_function)(name, num_buckets);
        SymbolInfo *curr = hash_table[index];
        if (curr == NULL)
        {
            return "";
        }
        int position = 1;
        while (curr->getName() != name)
        {
            curr = curr->getNext();
            position++;
            if (curr == NULL)
                break;
        }
        // if (curr != NULL)
        // {
        //     // cout << "\t'" << name << "'" << " found in ScopeTable# " << id << " at position " << index + 1 << ", " << position << endl;
        // }
        return curr->getType();
    }

    Function* getFunc(string name)
    {
        SymbolInfo* temp = LookUp(name);
        if (temp == NULL) {
            return NULL;
        }
        return temp->getFunc();
    }

    void setReturnType()

    SymbolInfo *LookUp2(string name)
    {
        int index = (hash_function_generator.*hash_function)(name, num_buckets);
        SymbolInfo *curr = hash_table[index];
        if (curr == NULL)
        {
            return curr;
        }
        int position = 1;
        while (curr->getName() != name)
        {
            curr = curr->getNext();
            position++;
            if (curr == NULL)
                break;
        }
        return curr;
    }

    bool insert(string name, string type, Function* func=NULL)
    {
        SymbolInfo *exists = LookUp2(name);
        if (exists != NULL)
        {
            // cout << "\t'" << exists->getName() << "'" << " already exists in the current ScopeTable" << endl;
            collision++;
            return false;
        }
        int index = (hash_function_generator.*hash_function)(name, num_buckets);
        SymbolInfo *newSymbol = new SymbolInfo(name, type, func);
        SymbolInfo *curr = hash_table[index];
        int position = 1;
        if (curr == NULL)
        {
            hash_table[index] = newSymbol;
        }
        else
        {
            collision++;
            position++;
            while (curr->getNext() != NULL)
            {
                curr = curr->getNext();
                position++;
            }
            curr->setNext(newSymbol);
        }
        // cout << "\tInserted in ScopeTable# " << id << " at position " << index + 1 << ", " << position << endl;
        return true;
    }

    bool remove(string name)
    {
        SymbolInfo *exists = LookUp2(name);
        if (exists == NULL)
        {
            // cout << "\tNot found in the current ScopeTable" << endl;
            return false;
        }
        int index = (hash_function_generator.*hash_function)(name, num_buckets);
        SymbolInfo *curr = hash_table[index];
        int position = 1;
        if (curr == exists)
        {
            hash_table[index] = curr->getNext();
            curr->setNext(NULL);
            delete curr;
        }
        else
        {
            position++;
            while (curr->getNext() != exists)
            {
                curr = curr->getNext();
                position++;
            }
            SymbolInfo *temp;
            temp = curr->getNext();
            curr->setNext(curr->getNext()->getNext());
            temp->setNext(NULL);
            delete temp;
        }
        // cout << "\tDeleted '" << name << "' from ScopeTable# " << id << " at position " << index + 1 << ", " << position << endl;
        return true;
    }

    void print(int num_of_tabs,ofstream& file)
    {
        for (int i = 0; i < num_of_tabs; i++)
        {
            cout << "\t";
        }
        cout << "ScopeTable# " << id << endl;
        for (int i = 0; i < num_buckets; i++)
        {
            for (int i = 0; i < num_of_tabs; i++)
            {
                cout << "\t";
            }
            cout << i + 1 << "--> ";
            SymbolInfo *curr = hash_table[i];
            while (curr != NULL)
            {
                curr->print(file);
                curr = curr->getNext();
            }
            cout << endl;
        }
    }

    void print_nonempty_indices(ofstream& file)
    {
        file << "ScopeTable # " << id << endl;
        for (int i = 0; i < num_buckets; i++)
        {
            SymbolInfo *curr = hash_table[i];
            if (curr != NULL)
            {
                file<< " " << i << " --> ";
                while (curr != NULL)
                {
                    curr->print(file);
                    curr = curr->getNext();
                }
                file << endl;
            }
        }
    }
};