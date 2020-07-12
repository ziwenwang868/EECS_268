/*
name: ziwen wang
file name: node.cpp
date: 7 Feb 2019
berif: immplemtation of node 
*/

#include"Node.h"

Node::Node(int we)
{
    web=we;
    m_next=nullptr;
}


Node::Node()
{
    m_next=nullptr;
}


int Node::getweb()const
{
    return(web);
}


Node* Node::getnext()const
{
    return(m_next);
}


void Node::setweb(int we)
{
    web=we;
}


void Node::setnext(Node* next)
{
    m_next=next;
}
