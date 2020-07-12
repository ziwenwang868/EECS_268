/*
name: ziwen wang
file name: node.cpp
date: 24 sep 2018
berif: creat a node action
*/
//#include"node.h"
template<typename t>
node<t>::node(t val)
{
    value=val;
    next=nullptr;
}

template<typename t>
node<t>::node()
{
    next=nullptr;
}

template<typename t>
node<t>* node<t>::getnext()const
{
    return next;
}

template<typename t>
t node<t>::getvalue()const
{
    return value;
}

template<typename t>
void node<t>::setnext(node<t>* nex)
{
    next=nex;
}

template<typename t>
void node<t>::setvalude(t val)
{
    value=val;
}