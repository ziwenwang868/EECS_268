/*
name: ziwen wang
file name: linkedlist.cpp
date: 7 Feb 2019
berif: immplemtation of linkedlist 
*/
#include "linkedlist.h"
#include<iostream>
LinkedList::LinkedList()
{
    m_front=nullptr;
    m_length=0;

}
LinkedList::LinkedList(const LinkedList &original)
{
 m_length=original.getLength();
    Node* origptr=original.m_front;
    if(origptr==nullptr)
    {
        m_front=nullptr;
    }
    else
    {
        
        m_front=new Node();
        m_front->setweb(origptr->getweb());

        Node* newptr=m_front;
        origptr=origptr->getnext();
        while(origptr!=nullptr)
        {
            int nextitem=origptr->getweb();
            Node* nodeptr=new Node(nextitem);
            
            newptr->setnext(nodeptr);
            newptr=newptr->getnext();
            origptr=origptr->getnext();
        }
        newptr->setnext(nullptr);

        
    }
   
}
LinkedList::~LinkedList()
{
    clear();
}

bool LinkedList::isEmpty() const
{
    if(m_front==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int LinkedList::getLength() const
{  
    return m_length;
}

void LinkedList::insert(int position, int entry)throw (std::runtime_error)
{
    if((position >= 1)&&(position<=m_length+1))
    {
        Node* newnode=new Node(entry);
        if(position==1)
        {
            newnode->setnext(m_front);
            m_front=newnode;
        }
        else
        {
           
            Node* temp=m_front;
            for(int i=1;i<position-1;i++)
            {
                temp=temp->getnext();
            }
            Node* prevptr=temp;
            
            newnode->setnext(temp->getnext());
            prevptr->setnext(newnode);

        }
        m_length++;
        
    }
    else
    {
        throw(std::runtime_error("Position is wrong!!!!"));
    }
    
}
void LinkedList::remove(int position)throw (std::runtime_error)
{
    Node*temp=m_front;
    if((position >= 1)&&(position<=m_length))
    {
        if(position==1)
        {
            m_front=temp->getnext();
            delete temp;
        }
        else
        {    Node* current=nullptr;
            for(int i=1;i<position-1;i++)
            {
                temp=temp->getnext();
            }
            current=temp->getnext();
            temp->setnext(current->getnext());
            current->setnext(nullptr);
            delete current;
        }
        m_length--;

    }
    else
    {
        throw(std::runtime_error("Position is wrong!!"));
    }
    
}
void LinkedList::clear()
{
    while(!isEmpty())
    {
        remove(1);
    }
}
int LinkedList::getEntry(int position) const throw (std::runtime_error)
{
    if((position >= 1)&&(position<=m_length))
    {
        
            Node*temp=m_front;
             for(int i=1;i<position;i++)
            {
                temp=temp->getnext();
            }
            return temp->getweb();
       
        
    }
    else
    {
        throw(std::runtime_error("Position is wrong!!"));
    }
}

void LinkedList::replace(int position, int newEntry) throw (std::runtime_error)
{
    if((position >= 1)&&(position<=m_length+1))
    {
        remove(position);
        insert(position,newEntry);
    }
    else
    {
        throw(std::runtime_error("Position is wrong!!"));
    }
    
}
