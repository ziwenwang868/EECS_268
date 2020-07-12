/*
name: ziwen wang
file name: queue.h
date: 9 MAR 2019
berif: header file 
*/
#ifndef QUEUE_h
#define QUEUE_h
#include"queueinterface.h"
#include"node.h"
//#include<iostream>

template<typename t>
class queue : public QueueInterface<t>
{
private:
  node<t>* front;//a pointer always point to the front
  node<t>* back;//a pointer always point to the back
public:
  ~queue();
  //pre none
  //post constactor
  //return none
  queue();
  //pre none
    //post check if the front is nullpotr
    //return return true if front is null
  bool isEmpty() const;
  //pre take a templete entry in  
    //post create a fifo queue
    //return none
  void enqueue(const t &newEntry) throw(PrecondViolatedExcep);
  //pre none
    //post dequeue the first iteam of the queue
    //return none
  void dequeue() throw(PrecondViolatedExcep);
  //pre none
    //post check the first iteam of the queue
    //return return the templele iteam 
  t peekFront() const throw(PrecondViolatedExcep);
};
#include"queue.cpp"
#endif
