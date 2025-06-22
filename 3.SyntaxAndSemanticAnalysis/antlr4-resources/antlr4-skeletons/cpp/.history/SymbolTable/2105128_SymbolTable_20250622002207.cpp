#include "2105128_SymbolTable.h"

SymbolTable::SymbolTable(int n, HashFunctionPtr func)
{
    number_of_scopes = 1;
    id = "1";
    this->hash_function = func;
    this->num_buckets = n;
    current_scope = new ScopeTable(num_buckets, id, func);
    current_scope->setParentScope(NULL);
    collision = 0;
}

SymbolTable::~SymbolTable()
{
    while (current_scope != NULL)
    {
        ScopeTable *temp = current_scope;
        current_scope = current_scope->getParentScope();
        delete temp;
    }
}

int SymbolTable::getCollision()
{
    ScopeTable *curr = current_scope;
    while (curr != NULL)
    {
        collision += curr->getCollision();
        curr = curr->getParentScope();
    }
    return static_cast<float>(collision) / number_of_scopes;
}

void SymbolTable::EnterScope()
{
    id = id + "." + to_string(current_scope->getNumberOfChildren()+1);
    current_scope->setNumberOfChildren(current_scope->getNumberOfChildren()+1);
    ScopeTable *newScope = new ScopeTable(num_buckets, id, hash_function);
    newScope->setParentScope(current_scope);
    current_scope = newScope;
}

void SymbolTable::ExitScope()
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

pair<string,pair<int,int>> SymbolTable::insert(string name, string type, string extra_info)
{
    pair<int,int> inserted = current_scope->insert(name, type, extra_info);
    return make_pair(current_scope->getID(),inserted);
}

bool SymbolTable::remove(string name)
{
    bool removed = current_scope->remove(name);
    return removed;
}

SymbolInfo* SymbolTable::LookUp(string name)
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
        // cout << "\t'" << name << "'" << " not found in any of the ScopeTables" << endl;
    }
    return found_symbol;
}

void SymbolTable::print_current_scope()
{
    current_scope->print(1);
}

void SymbolTable::print_all_scope()
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

void SymbolTable::print_all_scope_nonempty_indices()
{
    ScopeTable *curr = current_scope;
    while (curr != NULL)
    {
        curr->print_nonempty_indices();
        curr = curr->getParentScope();
    }
    cout<<endl;
}