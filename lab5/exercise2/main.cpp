/*
name: ziwen wang
file name: main.cpp
date: 22 Mar 2019
berif: String Permutations
*/
#include<iostream>
#include<string>
using namespace std;


//pre it takes in a string and its leading term such as "dog", "d" would be leading term
//post it will recursively call it self in a for loop and change leading term to print
//return none
void permut(string n, string leading)
{
    int leagth=n.length();
    for(int i=0;i<leagth;i++)
    {
        cout<<leading<<n.substr(i,1)<<endl;
        permut(n.substr(0,i)+n.substr(i+1),leading+n.substr(i,1));
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
        //int size=p.length();
        permut(p,"");//take in the string with initally "" enpty leading term

    }
    return 0;
}
