/*
name: ziwen wang
file name: exe.cpp
date: 17 Feb 2019
berif: immplemtation of exe 
*/

#include"exe.h"

exe::exe(string name)
{
    string file=name;
    ifstream inflie;
   string func;
   string ual;
   int num;

    inflie.open(file);
    while (!inflie.is_open())
    {
        cout << "wrong filename try again: ";
        cin >> file;
        inflie.open(file);
    }
    while(!inflie.eof())
    {   
        inflie>>func;
        if(func=="NEW_TAB")
        {
          h.inserttab();
          
        }
        if(func=="NAVIGATE")
        {
            inflie>>ual;
          h.gettab(h.getcurrent())->navigateTo(ual);
            //cout<<ual<<endl;
        }
        if(func=="HISTORY")
        {
           h.history();
        }
        if (func=="BACK") 
        {
            h.gettab(h.getcurrent())->back();
        }
        if(func=="FORWARD")
        {
             h.gettab(h.getcurrent())->forward();
        }
        if(func=="MOVE_LEFT")
        {
            inflie>>num;
            h.moveleft(num);
        }
        if(func=="MOVE_RIGHT")
        {
            inflie>>num;
            h.moveright(num);
        }
        if(func=="FOCUS")
        {
            inflie>>num;
            h.focus(num);
        } 
        if(func=="EXIT")
        {

        }
    }

    inflie.close();


}

exe::~exe()
{
    for(int i=1;i<h.getcurrent()+1;i++)
    {
        delete h.gettab(i);
    }
   
}
