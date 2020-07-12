#ifndef maxheapinter_h
#define maxheapinter_h


template <typename T>
class MaxHeapInterface
{
   public:
   virtual ~MaxHeapInterface(){};

   virtual bool isEmpty() const = 0;
   virtual int getNumberOfNodes() const = 0;
   virtual int getHeight() const = 0;
   virtual T peekTop() const = 0; //Can throw std::runtime_error
   virtual void add(T data) = 0;
   virtual void remove() = 0; //Can throw std::runtime_error
   virtual void clear() = 0;
};
#endif