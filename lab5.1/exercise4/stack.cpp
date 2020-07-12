/*
name: ziwen wang
file name: stack.cpp
date: 23 mar 2019
berif: stack implementation
*/
#include"stack.h"
stack::stack()
{
  top=nullptr;
}



stack::~stack()
{
    while(!isEmpty())
    {
      pop();
    }
}


bool stack::isEmpty()const
{
  if(top==nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}


void stack::push(const char& newentry) throw (PrecondViolatedExcep)
{
  node* temp=nullptr;
  if(isEmpty())
  {
    top=new node(newentry);
    //cout<<"is stack constructor called"<<'\n';
  }
  else
  {
    temp=new node(newentry);
    temp->setnext(top);
    top=temp;
    //cout<<"is stack called"<<'\n';
    //delete temp;

  }

}


void stack::pop() throw (PrecondViolatedExcep)
{
  if(isEmpty())
  {
    throw(PrecondViolatedExcep("nothing to pop in stack"));
  }
  else
  {
    //cout<<"pop call"<<'\n';
    node*temp=top;
    top=temp->getnext();
    delete temp;
  }
}


char stack::peek() const throw (PrecondViolatedExcep)
{
  if(isEmpty())
  {
    throw (PrecondViolatedExcep("nothing to peek in stack"));
  }
  return(top->getvalue());
}
