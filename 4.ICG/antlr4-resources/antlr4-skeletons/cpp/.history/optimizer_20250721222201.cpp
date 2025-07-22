#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    ifstream code("output/code.asm");
    if(!code.is_open()){
        cerr<<"Error opening code.asm for optimization"<<endl;
    }

    string prev_var="";
    string prev_reg="";
    string line;
    while(getline(code,line)){
        stringstream ss(line);
        string instr;
        string reg;
        string var;
        string first_part;
        getline(ss,first_part,',');
        getline(ss,var,',');
        stringstream ss2(first_part);
        ss2>>instr;
        ss2>>reg;
        if(mov)
    }
}