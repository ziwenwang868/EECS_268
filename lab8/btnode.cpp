/*
name: ziwen wang
file name: binary node.cpp
date: 20 april 2019
berif: implementation of binary node
*/
//#include "btnode.h"
template <typename t>
btnode<t>::btnode()
{
  leftptr=nullptr;
  rightptr=nullptr;
}
template <typename t>
btnode<t>::btnode(t entry)
{
    item=entry;
    leftptr=nullptr;
    rightptr=nullptr;
}
template <typename t>
t btnode<t>::getEntry() const
{
    return item;
}
template <typename t>
BNodeInterface<t>* btnode<t>::getLeft() const
{
    return leftptr;
}
template <typename t>
BNodeInterface<t>* btnode<t>::getRight() const
{
    return rightptr;
}
template <typename t>
void btnode<t>::setEntry(t entry)
{
    item=entry;
}
template <typename t>
void btnode<t>::setLeft(BNodeInterface<t> *left)
{
    leftptr=left;
}
template <typename t>
void btnode<t>::setRight(BNodeInterface<t> *right)
{
    rightptr=right;
}
