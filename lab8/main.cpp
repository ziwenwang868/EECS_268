/*
name: ziwen wang
file name: main.cpp
date: 20 april 2019
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
        exe t(argv[1]); // creation of executive object
        t.run();//calling run function with menue 
    }
    
    return(0);
}