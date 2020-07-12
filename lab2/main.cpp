/*
name: ziwen wang
file name: main.cpp
date: 7 Feb 2019
berif: main
*/
#include"exe.h"
#include<string>
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    string func;
    if(argc==2)
    {
        exe c;
        func=argv[1];
        if(func=="-i")
        {
            c.run();
        }
        if(func=="-t")
        {
            c.testAssignment();
        }
    }
    else
    {
        cout<<"Please enter a correct function name!"<<'\n';
    }
    
    return 0;
}