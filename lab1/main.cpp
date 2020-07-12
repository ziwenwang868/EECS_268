/*
name: ziwen wang
file name: main.cpp
date: 29 jan 2018
berif: take the file name into studentdriver class
*/
#include"studentdriver.h"
#include<iostream>

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << "Incorrect number of parameters!\n";
    }
    else
    {
        studentdriver exec(argv[1]); //sample creation of executive object
        exec.run(); //presumably handles the calling of all other member methods
    }
    
    return(0);
}
