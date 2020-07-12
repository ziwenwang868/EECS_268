/*
name: ziwen wang
file name: node.h
date: 9 MAR 2019
berif: header file of node
*/
#ifndef node_h
#define node_h

template<typename t>
class node
{
    private:
    t value;//value in a node
    node<t>* next;//pointer point to the next
    public:
    //pre take a value 
    //post constartor creates a node
    //return none
    node(t value);
    //pre none
    //post constartor
    //return none
    node();
    //pre none
    //post none
    //return retue the next node object
    node<t>* getnext()const;
    //pre none
    //post getthe value in a node
    //return reture the templete type
    t getvalue()const;
    //pre take a pointer
    //post set the poniter point to next
    //return none
    void setnext(node<t>* next);
    //pre take a value
    //post ste the value to the current node
    //return none
    void setvalude(t value);

};
#include"node.cpp"
#endif