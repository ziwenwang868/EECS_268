#ifndef exe_h
#define exe_h

#include"queue.h"
#include"stack.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class exe
{
    private:
    queue<string> line;//queue of line
    stack<string> elv;//stack of elvator 
  

    public:

    exe(string name);//consturctor takes in a file name 
    ~exe();//delete 

      
};
#endif 
