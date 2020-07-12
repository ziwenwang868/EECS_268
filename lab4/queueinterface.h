/*
name: ziwen wang
file name: queueinterface.h
date: 9 MAR 2019
berif: virtual interface
*/
#ifndef _QUEUE_INTERFACE
#define _QUEUE_INTERFACE
#include "PrecondViolatedExcep.h"
//#include<stdexcept>

template<class ItemType>
class QueueInterface

{
public:
   /** Virtual destructor allows concrete implementations to clean up
       heap memory when the Queue is discarded. */

   virtual ~QueueInterface() {}
   /** Sees whether this queue is empty.
    @return True if the queue is empty, or false if not. */

   virtual bool isEmpty() const = 0;
   
   /** Adds a new entry to the back of this queue.
    @post If the operation was successful, newEntry is at the back of the queue.
    @param newEntry  The object to be added as a new entry.
    PrecondViolatedExcep if no memory available for the new item */

   virtual void enqueue(const ItemType& newEntry) throw(PrecondViolatedExcep)= 0;
   
   /** Removes the front of this queue.
    @post If the operation was successful, the front of the queue has been removed.
    PrecondViolatedExcep if the queue is empty when called */

   virtual void dequeue() throw(PrecondViolatedExcep)= 0;
   
   /** Returns the front of this queue.
    @pre The queue is not empty.
    @post The front of the queue has been returned, and the queue is unchanged.
    PrecondViolatedExcep if the queue is empty when called */

   virtual ItemType peekFront() const throw(PrecondViolatedExcep)= 0;
}; // end QueueInterface
#endif