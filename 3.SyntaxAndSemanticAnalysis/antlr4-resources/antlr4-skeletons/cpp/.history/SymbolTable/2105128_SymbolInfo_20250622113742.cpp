#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class SymbolInfo
{
    string name, type;
    string extra_info;
    SymbolInfo *next;

public:
    SymbolInfo(string name, string type, string extra_info)
    {
        this->name = name;
        this->type = type;
        this->next = NULL;
        if (type == "FUNCTION" || type == "STRUCT" || type == "UNION")
        {
            this->extra_info = extra_info;
        }
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

    void print(ofstream& file)
    {
        file << "< " << name << " , " << "";
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