/*
name: ziwen wang
file name: binary node.h
date: 20 april 2019
berif: header file of binary node class
*/
#ifndef btnode_h
#define btnode_h

#include "btnodeinter.h"
#include <iostream>
using namespace std;

template <typename t>
class btnode : public BNodeInterface<t>
{
public:
  t getEntry() const;

  BNodeInterface<t> *getLeft() const;
  BNodeInterface<t> *getRight() const;

  void setEntry(t entry);

  void setLeft(BNodeInterface<t> *left);
  void setRight(BNodeInterface<t> *right);
  btnode(t entry);
  btnode();
  //~btnode(){}

private:
  t item;
  BNodeInterface<t> *leftptr;
  BNodeInterface<t> *rightptr;
};
#include "btnode.cpp"
#endif
