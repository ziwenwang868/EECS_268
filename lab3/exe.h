#ifndef exe_h
#define exe_h

#include"browser.h"
#include"tab.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class exe
{
    private:
    browser h;//a browser object
  

    public:

    exe(string name);//consturctor takes in a file name 
    ~exe();//delete the pointer that create by browser

      
};
#endif 
