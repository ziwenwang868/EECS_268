/*
name: ziwen wang
file name: queue.cpp
date: 9 MAR 2019
berif: implementation of queue.h
 */
template<typename t>
queue<t>::queue()
{
    front=back=nullptr;
}

template<typename t>
bool queue<t>::isEmpty()const
{
    if(front==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


template<typename t>
void queue<t>::enqueue(const t& newEntry) throw(PrecondViolatedExcep)
{   
    
    
    if(isEmpty())
    {   front=back=new node<t>(newEntry);
        //cout<<"is emptyis callllllll";
    }
    else
    {
        back->setnext(new node<t>(newEntry));
        back=back->getnext();
    }
}

template<typename t>
void queue<t>::dequeue() throw(PrecondViolatedExcep)
{
   
    node<t>* temp=front;
    if(isEmpty())
    {
        throw(PrecondViolatedExcep("wrong, no front node exsit"));
    }
    
    if(front==back)
    {
        delete front;
        front=back=nullptr;
    }

    else
    {
       front=temp->getnext();
       delete temp;
       
    }

    
}

template<typename t>
t queue<t>::peekFront() const throw(PrecondViolatedExcep)
{  
    if(isEmpty())
    {
        throw(PrecondViolatedExcep("wrong, no front node exsit"));
    }
    else
    {
        return front->getvalue();
    }

}

template<typename t>
queue<t>::~queue()
{
    while(!isEmpty())
    {
        dequeue();
    }
}
