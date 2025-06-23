#pragma once
#include<iostream>
using namespace std;

class Function {
    string return_type;
    int param_num;
    string* param_list;

public:

    Function (string return_type, int param_num,string* param_list){
        this->return_type = return_type;
        this->param_num = param_num;
        this->param_list = param_list;
    }

    ~Function ()
    {

    }

    void setReturnType(string return_type){
        this->return_type = return_type;
    }

    void setParamNum(int param_num){
        this->param_num = param_num;
    }

    void addToParamList(string param){
        param_list[param_num] = param;
        param_num++;
    }

    string getReturnType() {
        return this->return_type;
    }

    int getParamNum() {
        return this->param_num;
    }

    string* param
};