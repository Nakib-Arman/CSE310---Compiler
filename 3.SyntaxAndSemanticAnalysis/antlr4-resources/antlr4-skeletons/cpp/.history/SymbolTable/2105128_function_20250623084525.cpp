#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Function {
    string name;
    string return_type;
    int param_num;
    vector<string> param_list;

public:

    Function (string name){
        this->name = name;
        this->param_num = 0;
        
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

    vector<string> getParamList(){
        return this->param_list;
    }
};