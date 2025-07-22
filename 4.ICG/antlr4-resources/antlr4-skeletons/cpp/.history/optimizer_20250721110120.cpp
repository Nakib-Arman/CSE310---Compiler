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

    string var;
    string prev_line;
    string line;
    while(getline(code,line)){
        stringstream ss(line);
        getline(ss,data,',');
        if(line == "\tMOV AX, "+data){
            
        }
    }
}