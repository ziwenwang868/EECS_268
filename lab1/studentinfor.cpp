/*
name: ziwen wang
file name: studnetinfor.cpp
date: 29 jan 2018
berif: the implementation of studentinfor.h
*/
#include "studentinfor.h"
#include <exception>
#include<iostream>
using namespace std;

void studentinfor::setnumberofst(int num)
{
    numberofstud=num; 
    studentids=new string[num];
    
}

void studentinfor::setstudentid(string i,int index)
{
    studentids[index]=i;
}

void studentinfor::setdepart(string n)
{
    departmentcode=n;

}

void studentinfor::setcoursenum(int num) 
{
    coursenumber=num;
}

string studentinfor::getdepart()const
{
    return(departmentcode);
}

int studentinfor::getcoursenum()const
{
    return(coursenumber);
}
int studentinfor::getnumberofst()const
{
    return(numberofstud);
}

string * studentinfor::getstuids()const
{
    return studentids;
}

void studentinfor::printids()
{   
    for(int i=0;i<numberofstud;i++)
    {
       
        cout<<studentids[i]<<",";
        
        
    }
    cout<<endl;

}

studentinfor::~studentinfor()
{
    //delete studentids;
}
