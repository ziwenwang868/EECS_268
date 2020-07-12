/*
name: ziwen wang
file name: tab.cpp
date: 18 Feb 2019
berif: immplemtation of tab
*/

#include"tab.h"

Tab::Tab()
{
    currenturl=0;

}
void Tab::navigateTo(string url)
{

    if (currenturl == uallist.getLength())

    {
        uallist.insert(uallist.getLength() + 1, url);
        currenturl = uallist.getLength();
    }
    else
    {
      string curren=uallist.getEntry(currenturl);
      string lastone=uallist.getEntry(uallist.getLength());
      while(curren!=lastone)
      {
        uallist.remove(uallist.getLength());
        lastone=uallist.getEntry(uallist.getLength());
      }

        uallist.insert(uallist.getLength() + 1, url);
        currenturl = uallist.getLength();
    }
}


void Tab::forward()
{
    if(currenturl+1<uallist.getLength())
    {
        currenturl=currenturl+1;
    }

}

void Tab::back()
{
    if(currenturl-1<1)
    {
       cout<<"Can not go back! "<<endl;
    }
    else
    {
        currenturl=currenturl-1;
    }

}



string Tab::currentURL() const
{
    return(uallist.getEntry(currenturl));
}


int Tab::copyCurrentHistory(LinkedList<string>& destination)
{

    for(int i=1;i<uallist.getLength()+1;i++)
    {
        destination.insert(i,uallist.getEntry(i));
    }
    //cout<<currenturl<<endl;
    return currenturl;
}

Tab::~Tab()
{
    //uallist.clear();
}
