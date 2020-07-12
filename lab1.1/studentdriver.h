/*
name: ziwen wang
file name: studentdriver.h
date: 29 jan 2018
berif: contains a pointer of studentinfor and menu where interacting with user
*/
#ifndef studentdriver_H
#define studentdriver_H
#include "studentinfor.h"
#include<string>
using namespace std;

class studentdriver
{
    private:
   
    int numberofclass;//number of classes as the size of this object

    public: 
    int*arr;
    studentinfor *myinfor;//create aarry of object studentinfor
    studentdriver(string n);//constracutor pass the name of file in
    void setnumberofclass(int num);//set the number of class
    void run();//running all the menu 
    
    

    int getnumberofclass()const;//return int of number of class
    ~studentdriver();
   

};
#endif
