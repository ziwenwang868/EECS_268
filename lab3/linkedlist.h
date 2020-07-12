/*
name: ziwen wang
file name: linkedlist.h
date: 17 sep 2018
berif: initalizeation of likedlist 
*/
#ifndef LinkedList_H
#define LinkedList_H


#include "node.h"
#include<iostream>
#include<stdexcept>
using namespace std;
template<typename ItemType>
class LinkedList
{
private:
   node<ItemType> *m_front; // Pointer to first node in the chain; 
   int m_length;           // Current count of list items 
   
public:
  //pre none
  //post destrcutor
  //return none
  ~LinkedList();
  //pre none
  //post constrcutor
  //return none
  LinkedList();
  //pre none
  //post check if the intemcount is empty
  //return bool

  //LinkedList(const LinkedList<ItemType>& original);

  bool isEmpty() const;
  //pre none
  //post none
  //return length of itemcount
  int getLength() const;
  //pre pass int position and templeted web in
  //post throw a error if position is no good and insert to node likelist
  //return none
  void insert(int position, ItemType entry) throw(std::runtime_error);
  //pre pass in int position
  //post remuve the node from linkedlist in that posistion
  //return none
  void remove(int position) throw(std::runtime_error);
  //pre none
  //post clear all the linkedlist
  //return none
  void clear();
  //pre pass in a int position
  //post none
  //return retren a tempeled value
  ItemType getEntry(int position) const throw(std::runtime_error);
  //pre pass in a int poition and tempeled valud
  //post find the postion in the linkedlist and replace it with new entry
  //return length of itemcount
  void replace(int position, ItemType newEntry) throw(std::runtime_error);

}; // end LinkedList

#include "linkedlist.cpp"
#endif 