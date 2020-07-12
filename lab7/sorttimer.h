/*
name: ziwen wang
file name: sorttimmer.h
date: 12 april 2019
berif: header file of sorttimmer
*/
#ifndef sort_timer
#define sort_timer

#include<time.h>

#include<functional>
#include"sorts.h"

using namespace std;
template <typename T>
class sorttimer
{
    public:
    //pre it takes a funtion with templete pointer and a int, as well as a templete pointer and int.
    //time the function with cpu time
    //return a double which covert from cpu time
    double timesort(std::function<void(T [],int)> sort,T arr[],int size);
};
#include"sorttimer.cpp"
#endif