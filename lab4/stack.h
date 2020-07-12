/*
name: ziwen wang
file name: stack.h
date: 9 MAR 2019
berif: header file of stack
*/
#ifndef stack_h
#define stack_h
#include"stackinterface.h"
#include"node.h"
//#include"queue.h"
#include<string>
#include<iostream>
using namespace std;
//#include<iostream>

template <typename t>
class stack : public StackInterface<t>
{
  private:
    node<t>* top;//a pointer always point to the first 
    int count;
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
    stack(t name);
    //pre none
    //post check if the top point to null
    //return return true if top point to null
    bool isEmpty() const;
    //pre take a templete entry
    //post push the entry in to the sfirst of tack 
    //return none
    void push(const t &newEntry) throw(PrecondViolatedExcep);
    //pre none
    //post pop out the first iteam in the stack
    //return none
    void pop() throw(PrecondViolatedExcep);
    //pre none
    //post check the first iteam in the stack 
    //return return the firsr iteam in the stack
    t peek() const throw(PrecondViolatedExcep);

    bool isfull() const;

    int countnum()const;
   
};
#include "stack.cpp"
#endif
