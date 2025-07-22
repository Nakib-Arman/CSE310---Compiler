#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    ifstream code("output/code.asm");
    ofstream optcode("output/optcode.asm");
    if(!code.is_open()){
        cerr<<"Error opening code.asm for optimization"<<endl;
    }

    string prev_left="";
    string prev_right="";
    string prev_instr="";
    string line;
    while(getline(code,line)){
        stringstream ss(line);
        string first_part,second_part,instr,left,right;
        getline(ss,first_part,',');
        getline(ss,second_part,',');
        stringstream ss2(first_part);
        stringstream ss3(second_part);
        ss2>>instr;
        ss2>>left;
        ss3>>right;
        if(instr == "MOV"){
            if(prev_instr == ""){
                prev_left = left;
                prev_right = right;
                prev_instr = line;
            }
            else{
                if(prev_left == right && prev_right == left){
                    optcode << prev_instr<<endl;
                    prev_instr = "";
                    prev_left = "";
                    prev_right = "";
                }
                else{
                    optcode << prev_instr<<endl;
                    prev_instr = line;
                    prev_left = left;
                    prev_right = right;
                }
            }
        }
        else{
            if(instr == ";"){
                optcode
            }
            if(prev_instr != ""){
                optcode << prev_instr<<endl;
                optcode << line<<endl;
                prev_instr = "";
                prev_left = "";
                prev_right = "";
            }
            else{
                optcode << line<<endl;
            }
        }
    }
}