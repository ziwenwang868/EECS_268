/*
name: ziwen wang
file name: binary search tree.cpp
date: 20 april 2019
berif: implementation of binary search tree
*/
//#include "bst.h"
template <typename ItemType, typename KeyType>
bst<ItemType, KeyType>::bst()
{
  root = nullptr;
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::deletetree(BNodeInterface<ItemType> *sub)
{
  if (sub != nullptr)
  {
    BNodeInterface<ItemType> *temp = sub;

    deletetree(sub->getLeft());
    deletetree(sub->getRight());
    delete temp;
  }
}
template <typename ItemType, typename KeyType>
bool bst<ItemType, KeyType>::isroot()
{
  if (root == nullptr)
  {
    return false;
  }
  else
  {
    return true;
  }
}

template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::clone(bst & other)
{
  root = copytree(other.root);
}
template <typename ItemType, typename KeyType>
BNodeInterface<ItemType> *bst<ItemType, KeyType>::getroot() const
{
  return root;
}

template <typename ItemType, typename KeyType>
BNodeInterface<ItemType> *bst<ItemType, KeyType>::copytree(const BNodeInterface<ItemType> *tree) const
{
  BNodeInterface<ItemType> *newone = nullptr;
  if (tree != nullptr)
  {
    newone = new btnode<ItemType>(tree->getEntry());
    newone->setLeft(copytree(tree->getLeft()));
    newone->setRight(copytree(tree->getRight()));
  }
  return newone;
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::visitPreOrder(std::function<void(ItemType)> visit) const
{
  preorder(visit, root);
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::preorder(function<void(ItemType)> visit, BNodeInterface<ItemType> *current) const
{
  if (current != nullptr)
  {
    ItemType theone = current->getEntry();
    visit(theone);
    preorder(visit, current->getLeft());
    preorder(visit, current->getRight());
  }
}

template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::visitInOrder(std::function<void(ItemType)> visit) const
{
  inorder(visit, root);
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::inorder(std::function<void(ItemType)> visit, BNodeInterface<ItemType> *current) const
{
  if (current != nullptr)
  {
    inorder(visit, current->getLeft());
    ItemType theone = current->getEntry();
    visit(theone);
    inorder(visit, current->getRight());
  }
}

template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::visitPostOrder(std::function<void(ItemType)> visit) const
{
  postorder(visit, root);
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::postorder(std::function<void(ItemType)> visit, BNodeInterface<ItemType> *current) const
{
  if (current != nullptr)
  {
    postorder(visit, current->getLeft());
    postorder(visit, current->getRight());
    ItemType theone = current->getEntry();
    visit(theone);
  }
}

template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::remove(KeyType key)
{
  root = removing(root, key);
}

template <typename ItemType, typename KeyType>
BNodeInterface<ItemType> *bst<ItemType, KeyType>::removing(BNodeInterface<ItemType> *current, KeyType key)
{
  if (current == nullptr)
  {
    return current;
  }
  if (current->getEntry() >key)
  {
    current->setLeft(removing(current->getLeft(),key));
  }
  else if (current->getEntry() < key)
  {
    current->setRight(removing(current->getRight(),key));
  }
  else
  {
    if(current->getLeft()==nullptr)
    {
      BNodeInterface<ItemType>*temp=current->getRight();
      delete current;
      return temp;
    }
    else if(current->getRight()==nullptr)
    {
      BNodeInterface<ItemType>*temp=current->getLeft();
      delete current;
      return temp;
    }
    BNodeInterface<ItemType>* min=removenode(current->getRight());
    ItemType successor=min->getEntry();
    KeyType okey=successor.getusn();
    current->setEntry(min->getEntry());
    current->setRight(removing(current->getRight(),okey));
  }
  return current;
}

template <typename ItemType, typename KeyType>
BNodeInterface<ItemType> *bst<ItemType, KeyType>::removenode(BNodeInterface<ItemType> *nodeToDeletePtr)
{
  BNodeInterface<ItemType>* temp=nodeToDeletePtr;
  while(temp&&temp->getLeft()!=nullptr)
  {
    temp=temp->getLeft();
  }
  return temp;
}

template <typename ItemType, typename KeyType>
bst<ItemType, KeyType>::~bst()
{
  clear();
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::add(ItemType entry)
{
  adding(root, entry);
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::adding(BNodeInterface<ItemType> *current, ItemType entry)
{
  //cout<<entry->getusn()<<endl;
  //btnode<ItemType>*sub=current;
  if (root == nullptr)
  {
    //cout<<entry->getusn()<<endl;
    root = new btnode<ItemType>();
    root->setEntry(entry);
    //  cout<<root->getEntry()->getusn()<<endl;
  }
  else if (entry < current->getEntry())
  {
    //  cout<<"called"<<endl;
    if (current->getLeft() == nullptr)
    {

      BNodeInterface<ItemType> *temp = new btnode<ItemType>();
      temp->setEntry(entry);
      current->setLeft(temp);
      //std::cout << "Left sub:"<<temp->getEntry().getusn() << '\n';
    }
    else
    {
      adding(current->getLeft(), entry);
    }
    //cout<<entry->getusn()<<endl;
  }
  else if (current->getEntry() < entry)
  {
    //cout<<"called"<<endl;
    if (current->getRight() == nullptr)
    {
      BNodeInterface<ItemType> *temp = new btnode<ItemType>();
      temp->setEntry(entry);
      current->setRight(temp);
      //std::cout << "right sub:"<<temp->getEntry().getusn() << '\n';
    }
    else
    {
      adding(current->getRight(), entry);
    }
  }
  else
  {
    throw(runtime_error("repeat entry is not allowed !"));
  }
}
template <typename ItemType, typename KeyType>
ItemType bst<ItemType, KeyType>::searching(BNodeInterface<ItemType> *current, KeyType key) const
{
  if (current->getEntry() == key)
  {
    return current->getEntry();
  }
  else if (current->getEntry() > key)
  {
    if (current->getLeft() != nullptr)
    {
      return searching(current->getLeft(), key);
    }
  }
  else if (current->getEntry() < key)
  {
    if (current->getRight() != nullptr)
    {
      return searching(current->getRight(), key);
    }
  }

  throw(runtime_error("no marching"));
}
template <typename ItemType, typename KeyType>
ItemType bst<ItemType, KeyType>::search(KeyType key) const
{
  return searching(root, key);
}
template <typename ItemType, typename KeyType>
void bst<ItemType, KeyType>::clear()
{
  if (root != nullptr)
  {
    deletetree(root);
  }
}
template <typename ItemType, typename KeyType>
bool bst<ItemType, KeyType>::contains(KeyType key)
{
  bool isintthere;
  try
  {
    ItemType some = search(key);
    isintthere = true;
  }
  catch (runtime_error &e)
  {
    isintthere = false;
  }
  return isintthere;
}
