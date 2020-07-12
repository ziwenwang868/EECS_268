/*
name: ziwen wang
file name: studentinfor.h
date: 29 jan 2018
berif: store departmentcode and the array of stduent ids etc.
*/
#ifndef studentinfor_H
#define studentinfor_H
#include<string>
#include<stdexcept>
using namespace std;

class studentinfor
{
    private:

    string departmentcode;//department code
    int coursenumber;//class number
    int numberofstud;//number of student in a single calss
    string *studentids=nullptr;//array of student id number store ids in one class
   

    public:

    void setstudentid(string a,int index);//passing the id number as string and int as index filling into studentids array
    void setnumberofst(int num);//set number of student in a class and creat the array of student ids
    void setdepart(string name);//set department code 
    void setcoursenum(int num);//set class number
    void printids();//print student ids
    
    
    
    string getdepart()const;
    int getcoursenum()const;
    int getnumberofst()const;
    string *getstuids()const;//return the pointer to student ids

    ~studentinfor();

   




};

#endif