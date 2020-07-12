#ifndef bstinter_h
#define bstinter_h

template <typename ItemType, typename KeyType>
class BinarySearchTreeInterface
{
    public:
    virtual ~BinarySearchTreeInterface(){}
    virtual void add(ItemType entry) = 0;
    virtual ItemType search(KeyType key) const = 0;
    virtual void clear() = 0;
    //More methods to come in next lab
};
#endif