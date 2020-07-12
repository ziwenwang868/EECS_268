/*
name: ziwen wang
file name: hospital.h
date: 4 may 2019
berif: header file of hospital
*/
#ifndef hospital_h
#define hospital_h
#include<iostream>
#include"maxheap.h"
#include"people.h"
#include<fstream>
using namespace std;

class hospital
{
    private:
    maxheap<int> test;//test
    maxheap<people> hs_open;//hs
    int count;

    public:
    hospital();
    hospital(string name);
    //void run();

    void testrun();

};
#endif
