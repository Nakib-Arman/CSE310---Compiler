#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include "2105128_function.cpp"
using namespace std;

class SymbolInfo
{
    string name, type;
    string extra_info;
    SymbolInfo *next;
    Function* func;

public:
    SymbolInfo(string name, string type, Function* func=NULL)
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

    SymbolInfo *getNext()
    {
        return next;
    }

    string getReturnType()
    {
        return func->getReturnType();
    }

    int getParamNum()
    {
        return func->getParamNum();
    }

    Function* getFunc()
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

    void setReturnType(string return_type)
    {
        func->setReturnType(return_type);
    }

    void setParamNum(int param_num)
    {
        func->setParamNum(param_num);
    }

    void addToParamList(string param)
    {
        func->addToParamList(param);
    }

    void declareFunc(){
        func->declare();
    }

    void print(ofstream& file)
    {
        file << "< " << name << " : " << "ID";
        if(this->type == "func") {
            cout<<endl;
            func->print();
        }
        if (this->type == "FUNCTION")
        {
            string return_type, arguments;
            stringstream ss(extra_info);
            ss >> return_type;
            file << "," << return_type << "<==(";
            bool check_comma = true;
            while (ss >> arguments)
            {
                if (check_comma == false)
                {
                    file << ",";
                }
                else
                {
                    check_comma = false;
                }
                file << arguments;
            }
            file << ")";
        }

        else if (this->type == "STRUCT" || this->type == "UNION")
        {
            string attributes;
            stringstream ss(extra_info);
            file << ",{";
            string attribute_type;
            bool check_comma = true;
            while (ss >> attribute_type)
            {
                string attribute_name;
                ss >> attribute_name;
                if (check_comma == false)
                {
                    file << ",";
                }
                else
                {
                    check_comma = false;
                }
                file << "(" << attribute_type << "," << attribute_name << ")";
            }
            file << "}";
        }
        file << " > ";
    }
};