/*
name: ziwen wang
file name: stackinterface.h
date: 9 MAR 2019
berif: interface of stackunterface in virual
*/
#ifndef _STACK_INTERFACE
#define _STACK_INTERFACE
#include "PrecondViolatedExcep.h"
//#include<stdexcept>

template<class ItemType>
class StackInterface
{
public:
   /** Virtual destructor allows concrete implementations to clean up
       heap memory when the Stack is discarded. */

   virtual ~StackInterface() {}

   /** Sees whether this stack is empty.
    @return True if the stack is empty, or false if not. */

   virtual bool isEmpty() const = 0;

   /** Adds a new entry to the top of this stack.
    @post If the operation was successful, newEntry is at the top of the stack.
    @param newEntry The object to be added as a new entry.
    @throw PrecondViolatedExcep if no memory available for the new item */

   virtual void push(const ItemType& newEntry) throw(PrecondViolatedExcep) = 0;

	/** Removes the top of this stack.
	@pre The stack is not empty.
    @post If the operation was successful, the top of the stack has been removed.
    @throw PrecondViolatedExcep if the stack is empty when called */

   virtual void pop() throw(PrecondViolatedExcep) = 0;

   /** Returns the top of this stack.
    @pre The stack is not empty.
    @post The top of the stack has been returned, and the stack is unchanged.
    @return The top of the stack.
    @throw PrecondViolatedExcep if the stack is empty when called */

   virtual ItemType peek() const throw(PrecondViolatedExcep) = 0;

}; // end StackInterface
#endif
