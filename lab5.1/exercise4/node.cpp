/*
name: ziwen wang
file name: node.cpp
date: 23 mar 2019
berif: implementation of node class
*/
#include"node.h"
node::node(char val)
{
    value=val;
    next=nullptr;
}


node::node()
{
    next=nullptr;
}


node* node::getnext()const
{
    return next;
}


char node::getvalue()const
{
    return value;
}

void node::setnext(node* nex)
{
    next=nex;
}

void node::setvalude(char val)
{
    value=val;
}
