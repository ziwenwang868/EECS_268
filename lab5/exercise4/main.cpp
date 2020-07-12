/*
name: ziwen wang
file name: main.cpp
date: 23 mar 2019
berif: main
*/
#include<iostream>
#include<string>

#include"stack.h"
using namespace std;




bool isparens(string x,int n);
stack h;//stack of object


int main(int argc, char *argv[])
{
   

    if (argc < 2)
    {
        cout << "Incorrect input of parameters!\n";
    }
    else
    {
        string x = argv[1];
        //if and else to see if balance and display the string
        if (isparens(x,0))//passing the string and index 0
        {
            cout << x << " is balanced" << '\n';
        }
        else
        {
            cout << x << " is not balanced" << '\n';
        }
        
    }
    return (0);
}

bool isparens(string x,int n)//bool funtion return true when balance
{
    
    int count=x.length();//take the length of string pass in to this function

    if(n<count)//index smaller that length and it would be true
    {
        if((x.at(n)=='(')||(x.at(n)=='[')||(x.at(n)=='{'))//push the "([{" into stack at the index n
        {
            h.push(x.at(n));
           
        }
        else if((h.peek()=='(')&&(x.at(n)==')'))//pop the stack when read")"
        {
          
            try
            {h.pop();}
            catch(PrecondViolatedExcep e)
            {
                return false;
            }
          

        }
         else if((h.peek()=='[')&&(x.at(n)==']'))//pop the stack when read"]"
        {
          
            try
            {h.pop();}
            catch(PrecondViolatedExcep e)
            {
                return false;
            }
       

        }
         else if((h.peek()=='{')&&(x.at(n)=='}'))//pop the stack when read"}"
        {
         
            try
            {h.pop();}
            catch(PrecondViolatedExcep e)
            {
                return false;
            }
            

        }
       
        isparens(x,n+1);//recursive occur and increase one index
    }
    
    if (h.isEmpty())//if the stack is empty return true
    {
        return true;
    }
    else
    {
        return false;
    }
}
