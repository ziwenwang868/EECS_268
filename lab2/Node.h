/*
name: ziwen wang
file name: node.h
date: 7 Feb 2019
berif: initalizeation of node 
*/
#ifndef Node_H
#define Node_H
#include<iostream>
using namespace std;
class Node
{
    private:
    int web;   //the value in node
    Node* m_next;//pointer which point to the next node

    public:
     //pre none
    //post constratuctor
    //return none
    Node();
     //pre create the frist web 
    //post constratuctor
    //return none
    Node(int web);
     //pre none
    //post none
    //return the value from the node
    int getweb()const;
     //pre none
    //post make the pointer to point next 
    //return none
    Node* getnext()const;
     //pre pass in a templete value
    //post set the value in the node
    //return none
    void setweb(int we);
     //pre none
    //post set the pointer to point next 
    //return none
    void setnext(Node* next);



};

#endif



