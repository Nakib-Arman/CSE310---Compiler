#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream code("code.asm");
    if(!code.is_open()){
        cerr<<"Error opening code.asm for optimization"<<endl;
    }

    while(getline())
}