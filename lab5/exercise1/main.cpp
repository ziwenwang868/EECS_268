/*
name: ziwen wang
file name: main.cpp
date: 22 Mar 2019
berif: Recursive Parenthesis checker
*/
#include<iostream>
#include<string>
using namespace std;


//pre it takes a string as t, count as index zero, count1 as initally zero (will count '('), and same as count2 but counts')'
//post it will recursively call itself untill the index+1 is larger than string size
//return true if count1=count2=0
bool isblance(string t, int count,int count1,int count2)
{   
    int size=t.length();
    
    if(count<size)
    {
        if(t.at(count)=='(')
        {
            count1=count1+1;
        }
        else if(t.at(count)==')'&&count1>=1)//extra statement to check if ")(" conditions
        {
           count1=count1-1;
        }
        else //if')'came fist or there is no marching '(' before count2 add one
        {
            count2=count2+1;
        }
        return isblance(t,count+1,count1,count2);//resursive call HERE
    }
    else //when count=string size it start return bool (BASE CASE HERE)
    {
        if(count1==0&&count2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    
}
int main(int argc, char* argv[])
{
    if(argc<2)
    {
        cout<<"Incorrect amont of parameters!"<<'\n';
    }
    else
    {
        string p=argv[1];
        if(isblance(p,0,0,0))//call the function here with inital zeros
        {
            cout<<"The sequence "<<p <<" is balanced"<<endl;
        }
        else
        {
            cout<<"The sequence "<<p <<" is not balanced"<<endl;
        }

    }
    return 0;
}
