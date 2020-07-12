/*
name: ziwen wang
file name: browser.cpp
date: 18 Feb 2019
berif: immplemtation of browser
*/

#include "browser.h"
browser::browser()
{
   currenttab=0;

}

int browser::getcurrent()
{
    return currenttab;
}
Tab* browser::gettab(int x)
{
  return web.getEntry(x);
}

void browser::inserttab()
{
    currenttab++;
    focuspot = currenttab;
    t = new Tab();
    web.insert(currenttab, t);
    //delete t;
}

void browser::moveleft(int x)
{
    if(focuspot-x>=1)
    {
        Tab *temp=web.getEntry(focuspot);
         web.remove(focuspot);
        web.insert(focuspot-x,temp);
        //web.replace(focuspot-x,web.getEntry(focuspot));
       
        focuspot=focuspot-x;
      //  cout<<"the focuspot is"<<focuspot<<endl;
    }
    else
    {
        cout<<"not valid move! from move left"<<endl;
    }

}

void browser::moveright(int x)
{
   
  //cout<<"the focuspot is"<<focuspot<<endl;
    if(focuspot+x<web.getLength()+1)
    { 
        Tab *temp=web.getEntry(focuspot);
        web.remove(focuspot);
        web.insert(focuspot+x,temp);
        //web.replace(focuspot+x,web.getEntry(focuspot));
        
        focuspot=focuspot+x;
    }
    else
    {
        cout<<"not valid move! from move right"<<endl;
    }

}
void browser::focus(int x)
{
    if(x>=1&&x<=web.getLength())
    {
        focuspot=x;
    }
    else
    {
        cout<<"not valid spot!"<<endl;
    }

}
void browser::history()
{
    cout<<"Tab "<<focuspot<<endl;
    cout<<"==========="<<endl;
    LinkedList<string> his;
    web.getEntry(focuspot)->copyCurrentHistory(his);
    int lenth=his.getLength();
    //cout<<lenth<<endl;
    for(int i=1;i<lenth+1;i++)
    {
        if(his.getEntry(i)==web.getEntry(focuspot)->currentURL())
        {
            cout<<his.getEntry(i)<<" <==current"<<endl;
        }
        else
       {
           cout<<his.getEntry(i)<<endl;
       }

    }
    cout<<"==========="<<endl;
    cout<<"Newset"<<endl;
    cout<<endl;
}

browser::~browser()
{

}
