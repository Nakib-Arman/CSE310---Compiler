#include "2105128_ScopeTable.h"

ScopeTable::ScopeTable(int n, string id, HashFunctionPtr func)
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

ScopeTable::~ScopeTable()
{
    for (int i = 0; i < num_buckets; i++)
    {
        if (hash_table[i] != NULL)
            delete hash_table[i];
    }
    delete[] hash_table;
    // cout << "\tScopeTable# " << id << " removed" << endl;
}

int ScopeTable::getNumberOfBuckets()
{
    return num_buckets;
}

string ScopeTable::getID()
{
    return id;
}

ScopeTable* ScopeTable::getParentScope()
{
    return parent_scope;
}

int ScopeTable::getCollision()
{
    return collision;
}

int ScopeTable::getNumberOfChildren()
{
    return number_of_children;
}

void ScopeTable::setNumberOfBuckets(int num_buckets)
{
    this->num_buckets = num_buckets;
}

void ScopeTable::setID(string id)
{
    this->id = id;
}

void ScopeTable::setParentScope(ScopeTable *parent_scope)
{
    this->parent_scope = parent_scope;
}

void ScopeTable::setNumberOfChildren(int n)
{
    this->number_of_children = n;
}

SymbolInfo* ScopeTable::LookUp(string name)
{
    int index = (hash_function_generator.*hash_function)(name.c_str(),num_buckets);
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

pair<SymbolInfo*,pair<int,int>> ScopeTable::LookUp2(string name)
{
    int index = (hash_function_generator.*hash_function)(name.c_str(),num_buckets);
    SymbolInfo *curr = hash_table[index];
    if (curr == NULL)
    {
        return make_pair(curr,make_pair(0,0));
    }
    int position = 0;
    while (curr->getName() != name)
    {
        curr = curr->getNext();
        position++;
        if (curr == NULL)
            break;
    }
    return make_pair(curr,make_pair(index,position));
}

pair<int,int> ScopeTable::insert(string name, string type, string extra_info)
{
    pair<SymbolInfo*,pair<int,int>> exists = LookUp2(name);
    if (exists.first != NULL)
    {
        // < 100 : CONST_INT > already exists in ScopeTable# 1.1 at position 4, 1
        // cout <<"< "<<exists.first->getName()<<" : "<<exists.first->getType() << " >" << " already exists in ScopeTable# "<<id<<" at position "<<exists.second.first<<", "<<exists.second.second << endl;
        collision++;
        return exists.second;
    }
    int index = (hash_function_generator.*hash_function)(name.c_str(),num_buckets);
    SymbolInfo *newSymbol = new SymbolInfo(name, type, extra_info);
    SymbolInfo *curr = hash_table[index];
    int position = 0;
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
    return make_pair(0,0);
}

bool ScopeTable::remove(string name)
{
    pair<SymbolInfo*,pair<int,int>> exists = LookUp2(name);
    if (exists.first == NULL)
    {
        // cout << "\tNot found in the current ScopeTable" << endl;
        return false;
    }
    int index = (hash_function_generator.*hash_function)(name.c_str(),num_buckets);
    SymbolInfo *curr = hash_table[index];
    int position = 1;
    if (curr == exists.first)
    {
        hash_table[index] = curr->getNext();
        curr->setNext(NULL);
        delete curr;
    }
    else
    {
        position++;
        while (curr->getNext() != exists.first)
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

void ScopeTable::print(int num_of_tabs)
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
            curr->print();
            curr = curr->getNext();
        }
        cout << endl;
    }
}

void print_nonempty_indices()
{
    cout << "ScopeTable # " << id << endl;
    for (int i = 0; i < num_buckets; i++)
    {
        SymbolInfo *curr = hash_table[i];
        if (curr != NULL)
        {
            cout<< i << " --> ";
            while (curr != NULL)
            {
                curr->print();
                curr = curr->getNext();
            }
            cout << endl;
        }
    }
}