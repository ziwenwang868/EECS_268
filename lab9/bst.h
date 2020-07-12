/*
name: ziwen wang
file name: binary search tree.h
date: 20 april 2019
berif: header file of binary search tree
*/
#ifndef bst_h
#define bst_h

#include "bstinter.h"

#include "btnode.h"
#include <iostream>
#include <exception>
#include<functional>
using namespace std;
template <typename ItemType, typename KeyType>
class bst : public BinarySearchTreeInterface<ItemType, KeyType>
{
private:
  BNodeInterface<ItemType> *root;

public:
    

    void visitPreOrder(std::function<void(ItemType)> visit) const; //Visits each node in pre order
    void preorder(std::function<void(ItemType)> visit,BNodeInterface<ItemType>* current)const;

    void visitInOrder(std::function<void(ItemType)> visit) const; //Visits each node in in order
    void inorder(std::function<void(ItemType)> visit,BNodeInterface<ItemType>* current)const;

    void visitPostOrder(std::function<void(ItemType)> visit) const; //Vis
    void postorder(std::function<void(ItemType)> visit,BNodeInterface<ItemType>* current)const;

    void remove(KeyType key); //throws std::runtime_error if not in tree
    BNodeInterface<ItemType>* removing(BNodeInterface<ItemType> *curent,KeyType key);
    BNodeInterface<ItemType>* removenode(BNodeInterface<ItemType>* nodeptr);
    //BNodeInterface<ItemType>* removeleftmost(BNodeInterface<ItemType>* nodeToDeletePtr,ItemType& next);
   
    //static void visit(ItemType entry);

    void clone(bst<ItemType,KeyType> & other);
    BNodeInterface<ItemType>* getroot()const;

    BNodeInterface<ItemType>* copytree(const BNodeInterface<ItemType>* tree) const;
    bool isroot();
    //void copying(const bst<ItemType>& anothertree);
  /**
	*	@pre takeing in a pointer and entry
  * @recustivily compare bnode and add the entry
	*	@return none
	*/
  void adding(BNodeInterface<ItemType> *curent, ItemType entry);
  /**
	*	@pre takeing in a pointer and a search target
  * @recustivily compare bnode and find the target, if not found throw a runtime error
	*	@return the object of itemtype
	*/
  ItemType searching(BNodeInterface<ItemType> *current, KeyType key) const;
  /**
	*	@pre takeing in a pointer 
  * @recustivily find the nullptr and delete the parent
	*	@return none
	*/
  void deletetree(BNodeInterface<ItemType> *sub);

  bst();
  ~bst();
  /**
	*	@pre takeing in a  entry
  * @calling a recusive adding function
	*	@return none
	*/
  void add(ItemType entry);
  /**
	*	@pre takeing in a target
  * @calling a recusive searching function
	*	@return object of itemtype
	*/
  ItemType search(KeyType key) const;
  /**
	*	@pre none
  * @calling a recusive deletetree function
	*	@return none
	*/
  void clear();
  /**
	*	@pre takeing in target
  * @calling a recusive searching function
	*	@return true if searching function find the target, false otherwise
	*/
  bool contains(KeyType in);
};
#include "bst.cpp"
#endif
