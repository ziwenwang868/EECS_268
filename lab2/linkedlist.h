/*
name: ziwen wang
file name: linkedlist.h
date: 7 Feb 2019
berif: header file of linklist class 
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h" //Gone over in class
#include <stdexcept> //For runtime_error
using namespace std;
class LinkedList
{
     private:
     Node* m_front;
     int m_length;
    
     public:
     LinkedList();
     LinkedList(const LinkedList& original);
     ~LinkedList();
     LinkedList& operator=(const LinkedList& original);
     bool isEmpty() const;
     int getLength() const;
     void insert(int position, int entry) throw (std::runtime_error); 
     void remove(int position) throw (std::runtime_error); 
     void clear();
     int getEntry(int position) const throw (std::runtime_error);

     /** Here's an example of a doxygen comment block. Do this for all methods
     * @pre The position is between 1 and the list's length
     * @post The entry at the given position is replaced with the new entry
     * @param position:  1<= position <= length
     * @param newEntry: A new entry to put in the list
     * @throw std::runtime_error if the position is invalid.
     **/
     void replace(int position, int newEntry) throw (std::runtime_error);
};
#endif