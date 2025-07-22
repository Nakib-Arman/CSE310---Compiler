#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    ifstream code("output/code.asm");
    ofstream optcode("output/")
    if(!code.is_open()){
        cerr<<"Error opening code.asm for optimization"<<endl;
    }

    string prev_var="";
    string prev_reg="";
    string prev_instr="";
    string line;
    while(getline(code,line)){
        stringstream ss(line);
        string first_part,second_part,instr,reg,var;
        getline(ss,first_part,',');
        getline(ss,second_part,',');
        stringstream ss2(first_part);
        stringstream ss3(second_part);
        ss2>>instr;
        ss2>>reg;
        ss3>>var;
        if(instr == "MOV"){
            if(prev_instr == ""){
                prev_var = var;
                prev_reg = reg;
                prev_instr = line;
            }
            else{
                if(prev_var == reg && prev_reg == var){
                    
                }
            }
        }
    }
}