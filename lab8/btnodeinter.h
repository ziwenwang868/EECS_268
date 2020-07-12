#ifndef btnodeinter_h
#define btnodeinter_h

template <typename ItemType>
class BNodeInterface
{
    public:
    virtual ItemType getEntry() const = 0;
    virtual BNodeInterface<ItemType>* getLeft() const = 0;
    virtual BNodeInterface<ItemType>* getRight() const = 0;

    virtual ~BNodeInterface(){}
    virtual void setEntry(ItemType entry) = 0;
    virtual void setLeft(BNodeInterface<ItemType>* left) = 0;
    virtual void setRight(BNodeInterface<ItemType>* right) = 0;
};
#endif