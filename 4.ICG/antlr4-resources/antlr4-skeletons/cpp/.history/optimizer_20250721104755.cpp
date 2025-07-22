#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream code("output/code.asm");
    if(!code.is_open()){
        cerr<<"Error opening code.asm for optimization"<<endl;
    }

    string line;
    while(getline(code,line)){
        if(line != "\tSUB")
    }
}