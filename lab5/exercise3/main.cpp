/*
 name: ziwen wang
 file name: main.cpp
date: 23 Mar 2019
berif: Good Old Fibonacci
*/
#include<iostream>
#include<string>
using namespace std;

//pre it takes in a int 
//post recursively call itself 
//return value for the Ns tearm
int found(int x)
{

    if (x == 0)
    {
        return 0;//base case
    }
    else if (x == 1)
    {
        return 1;//base case
    }
    else
    {
        return found(x - 1) + found(x - 2);//recursion 
    }
}

//pre it takes the first term and second term of fibonacii x and y, z is the value we wanna check
//post if x+y<z recurive and update the value of x and y, print if x+y=z is or not in the sequence
//return none
void verify(int x,int y, int z)
{
   if(x+y<z&&z!=0)
   {
       int m=y+x;
       x=y;
       verify(x,m,z);
   }
   else if(x+y==z||z==0)
   {
       cout<<z<<" is in the sequence "<<endl;
   }
   else
   {
       cout<<z<<" is not in the sequence"<<endl;
   }
   

}

int main(int argc, char* argv[])
{
    if(argc<3)
    {
        cout<<"Incorrect amont of parameters!"<<'\n';
    }
    else
    {
        string founction=argv[1];
        int num=stoi(argv[2]);
        if(founction=="-i")
        {
            int i=found(num);
            cout<<i<<endl;
        }
        else if(founction=="-v")
        {
            verify(0,1,num);
        }
       
        
    }
    return 0;
}

