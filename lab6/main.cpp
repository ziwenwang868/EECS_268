/*
name: ziwen wang
file name: main.cpp
date: 31 march 2019
berif: main 
*/
#include<iostream>
#include<string>
#include"mazereader.h"
#include"mazewaker.h"
#include"MazeCreationException.h"
using namespace std;

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cout<< "Incorrect input of parameters!\n";
    }
    else
    {
        string filename = argv[1];

        try
        {
            mazereader h(filename);//maze reader object
            mazewaker w(h.getmaze(),h.getstartrow(),h.getstartcol(),h.getrows(),h.getcols()); //maze walker object and handing the value from maze reader
            w.run();//run maze walker
        }
        catch (MazeCreationException e)
        {
            cout<<e.what()<<endl;
        }
    }

    return (0);
}
