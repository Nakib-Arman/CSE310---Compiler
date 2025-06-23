#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Function {
    string name;
    string return_type;
    int param_num;
    vector<string> param_list;
    bool isDeclared = false;

public:

    Function (){
        this->param_num = 0;
        this->return_type = "void";
    }

    ~Function ()
    {

    }

    void setName(string name){
        this->name = name;
    }

    void setReturnType(string return_type){
        this->return_type = return_type;
    }

    void setParamNum(int param_num){
        this->param_num = param_num;
    }

    void addToParamList(string param){
        param_list.push_back(param);
        param_num++;
    }

    void setParamList(vector<string> param_list){
        this->param_list = param_list;
    }

    string getName(){
        return this->name;
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

    void clearParamList(){
        param_list.clear();
        param_num = 0;
        return_type = "void";
    }
    
    void declare()

    void print(){
        cout<<"Return type: "<<return_type<<endl;
        cout<<"Param List: ";
        for(int i=0;i<param_num;i++){
            cout<<param_list[i]<<",";
        }
        cout<<endl;
        cout<<"Param Num: "<<param_num<<endl;
    }
};