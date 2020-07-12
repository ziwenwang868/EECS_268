/*
name: ziwen wang
file name: stack.h
date: 23 mar 2019
berif: stack header file
*/
#ifndef stack_h
#define stack_h
#include"PrecondViolatedExcep.h"
#include"node.h"
//#include"queue.h"
#include<string>
#include<iostream>
using namespace std;
//#include<iostream>


class stack
{
  private:
    node* top;//a pointer always point to the first
  public:
  //pre none
    //post destuctor
    //return none
    ~stack();
    //pre none
    //post constructor
    //return none
    stack();
    //pre take the template iteam in
    //post create a stack
    //return none
    stack(char name);
    //pre none
    //post check if the top point to null
    //return return true if top point to null
    bool isEmpty() const;
    //pre take a templete entry
    //post push the entry in to the sfirst of tack
    //return none
    void push(const char &newEntry) throw(PrecondViolatedExcep);
    //pre none
    //post pop out the first iteam in the stack
    //return none
    void pop() throw(PrecondViolatedExcep);
    //pre none
    //post check the first iteam in the stack
    //return return the firsr iteam in the stack
    char peek() const throw(PrecondViolatedExcep);

};

#endif
