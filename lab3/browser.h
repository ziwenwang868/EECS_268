#ifndef browser_h
#define browser_h

#include"linkedlist.h"
#include"tab.h"
#include<iostream>

#include<string>

using namespace std;

class browser
{
    private:

    LinkedList<Tab*> web;//create a linkedlist of tab pointer
    int currenttab;// count for all tab
    int focuspot;//count for the current tab

    public:
    browser();
    Tab *t;// tab pointer using to create a empty tab when New TAB happend
    void inserttab();
    Tab* gettab(int x);
    int getcurrent();
  
    void moveleft(int x);
    void moveright(int x);
    void focus(int x);
    void history();

    ~browser();

};
#endif
