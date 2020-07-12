/*
name: ziwen wang
file name: stack.cpp
date: 9 MAR 2019
berif: implementation of stack
*/
template<typename t>
stack<t>::stack()
{
  top=nullptr;
  count=0;
}


template<typename t>
stack<t>::~stack()
{
  while(!isEmpty())
  {
    pop();
  }
}

template<typename t>
bool stack<t>::isEmpty()const
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

template<typename t>
void stack<t>::push(const t& newentry) throw(PrecondViolatedExcep)
{
  node<t>* temp=nullptr;
  if(isEmpty())
  {
    top=new node<t>(newentry);
    //cout<<"is stack called"<<'\n';
  }
  else
  {
    temp=new node<t>(newentry);
    temp->setnext(top);
    top=temp;
  
  }
  count++;
  
}

template<typename t>
void stack<t>::pop() throw(PrecondViolatedExcep)
{   
  if(!isEmpty())
  {
    node<t>* temp=top;
    top=temp->getnext();
    delete temp;
    temp=nullptr;
    count--;
  }
  else
  {
    throw(PrecondViolatedExcep("no one in elevator (can not pop)!"));
  }
}

template<typename t>
t stack<t>::peek() const throw(PrecondViolatedExcep)
{
  if(!isEmpty())
  {
    return(top->getvalue());
  }
  else
  {
    throw (PrecondViolatedExcep("nothing to peek in elevator"));
  }
  
  
}

template <typename t>
bool stack<t>::isfull() const
{
  if (count == 7)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
template <typename t>
int stack<t>::countnum()const
{
  return count;
}
