/*
name: ziwen wang
file name: main.cpp
date: 5 may 2019
berif: run the function start the program
*/
#include<iostream>
#include"hospital.h"


int main(int argc, char* argv[])
{
   if(argc < 2)
    {
       cout<< "Incorrect input of parameters!\n";
    }
   else
    {
        string x=argv[1];
        hospital open_hospital(x);
        //open_hospital.testrun();
    }
    
    return(0);
}
