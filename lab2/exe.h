/*
name: ziwen wang
file name: exe.h
date: 7 Feb 2019
berif: header file of excutive class
*/
#ifndef EXE_H
#define EXE_H
#include"linkedlist.h"
#include"linkedlisttester.h"
#include<iostream>


using namespace std;

class exe
{
    private:
    LinkedList h;
    public:
    exe();
    
    void run();
    
    void testAssignment();
   

};
#endif