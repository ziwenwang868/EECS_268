/*
name: ziwen wang
file name: main.cpp
date: 24 sep 2018
berif: run the function start the program
*/
#include<iostream>
#include"exe.h"

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cout<< "Incorrect input of parameters!\n";
    }
    else
    {
        exe t(argv[1]); //sample creation of executive object
        
    }
    
    return(0);
}