/*
name: ziwen wang
file name: linkedlist.cpp
date: 7 Feb 2019
berif: immplemtation of linkedlist 
*/
//#include "linkedlist.h"


template<typename t>
LinkedList<t>::LinkedList()
{
    m_front=nullptr;
    m_length=0;

}



template<typename t>
LinkedList<t>::~LinkedList()
{
    clear();
}

template<typename t>
bool LinkedList<t>::isEmpty() const
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

template<typename t>
int LinkedList<t>::getLength() const
{  
    return m_length;
}

template<typename t>
void LinkedList<t>::insert(int position, t entry)throw (std::runtime_error)
{
    if((position >= 1)&&(position<=m_length+1))
    {
        node<t>* newnode=new node<t>(entry);
        if(position==1)
        {
            newnode->setnext(m_front);
            m_front=newnode;
        }
        else
        {
           
            node<t>* temp=m_front;
            for(int i=1;i<position-1;i++)
            {
                temp=temp->getnext();
            }
            node<t>* prevptr=temp;
            
            newnode->setnext(temp->getnext());
            prevptr->setnext(newnode);

        }
        m_length++;
        
    }
    else
    {
        throw(std::runtime_error("Position is wrong!!!! in insert"));
    }
    
}

template<typename t>
void LinkedList<t>::remove(int position)throw (std::runtime_error)
{
    node<t>*temp=m_front;
    if((position >= 1)&&(position<=m_length))
    {
        if(position==1)
        {
            m_front=temp->getnext();
            delete temp;
        }
        else
        {    node<t>* current=nullptr;
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
        throw(std::runtime_error("Position is wrong!! in remove"));
    }
    
}

template<typename t>
void LinkedList<t>::clear()
{
    while(!isEmpty())
    {
        remove(1);
    }
}

template<typename t>
t LinkedList<t>::getEntry(int position) const throw (std::runtime_error)
{
   // cout<<position<<endl;
    if((position >= 1)&&(position<=m_length))
    {
        
            node<t>*temp=m_front;
             for(int i=1;i<position;i++)
            {
                temp=temp->getnext();
            }
            return temp->getvalue();
       
        
    }
    else
    {
        throw(std::runtime_error("Position is wrong!! in getentry"));
    }
}

template<typename t>
void LinkedList<t>::replace(int position, t newEntry) throw (std::runtime_error)
{
    if((position >= 1)&&(position<=m_length+1))
    {
        remove(position);
        insert(position,newEntry);
    }
    else
    {
        throw(std::runtime_error("Position is wrong!!in replace"));
    }
    
}
