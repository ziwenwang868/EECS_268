/*
name: ziwen wang
file name: maxheap.h
date: 4 may 2019
berif: headerfile of max heap
*/
#ifndef maxheap_h
#define maxheap_h

#include "maxheapinter.h"
#include <iostream>
using namespace std;

template <typename T>
class maxheap :public MaxHeapInterface<T>
{
private:
    T* m_arr;
    int m_size;
    int m_heapsize;
    //pre take in a index
    //post rec-check if the arr [index] is bigger than its parent, swap it if its true 
    //return none
    void upheap(int index);
    //pre take in a index
    //post  rec-check no child do nothing, one child swap, two children compare the value of its children and swap
    //return none
    void downheap(int index);
public:
    //pre index number start with 0
    //post rectsively find the left most node
    //return return 1 if the node is found, 0 otherwise
    int gethighthelper(int index)const;
    //pre none
    //post create a new array with a size = 2*size+1 and copy the old array and assign it to old one
    //return none
    void resize();
    //pre none
    //post  check the m_heapsize 
    //return if 0 return true, fales otherwise
    bool isEmpty() const;
    //pre none
    //post none
    //return return m_heapsize
    int getNumberOfNodes() const;
    //pre none
    //post check if its empty
    //return return 0 if heap is empty or call the helper function
    int getHeight() const;
    //pre none
    //post throw a error if arry is empty
    //return arr[0]
    T peekTop() const; //Can throw std::runtime_error
    //pre  take a templete entry
    //post  put the entry to the last and call upheap method
    //return none
    void add(T data);
    //pre none
    //post put the first in to last and heapsize-1 and call downheap arr[0]
    //return none
    void remove(); //Can throw std::runtime_error
    //pre none
    //post delete[] arr
    //return none
    void clear();
    
    maxheap(/* args */);
    ~maxheap();
};
#endif
#include"maxheap.cpp"
