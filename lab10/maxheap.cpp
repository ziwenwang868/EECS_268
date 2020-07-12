
/*
name: ziwen wang
file name: maxheap.cpp
date: 20 april 2019
berif: implementation of max heap
*/
template <typename T>
maxheap<T>::maxheap()
{
    m_size = 1;
    m_heapsize = 0;
    m_arr = new T[m_size];
}
template <typename T>
bool maxheap<T>::isEmpty() const
{
    if (m_heapsize > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

template <typename T>
int maxheap<T>::gethighthelper(int index) const
{
    if (2 * index + 1 < m_heapsize)
    {
        int x = 2 * index + 1;
        return (1 + gethighthelper(x));
    }
    else
    {
        return 0;
    }
}

template <typename T>
int maxheap<T>::getNumberOfNodes() const
{
    return m_heapsize;
}

template <typename T>
int maxheap<T>::getHeight() const
{
    int count = 0;
    if (!isEmpty())
    {
        count = 1 + gethighthelper(0);
    }
    return count;
}

template <typename T>
T maxheap<T>::peekTop() const //Can throw std::runtime_error
{
    if (!isEmpty())
    {
        return m_arr[0];
    }
    else
    {
        throw(runtime_error("Enmpty heap"));
    }
}

template <typename T>
void maxheap<T>::add(T data)
{
    if (m_heapsize >= m_size)
    {
        resize();
    }
    m_arr[m_heapsize] = data;
    upheap(m_heapsize);
    m_heapsize++;
    //cout<<"heapsize: "<<m_heapsize<<endl;
}

template <typename T>
void maxheap<T>::remove() //Can throw std::runtime_error
{
    if (m_heapsize == 0)
    {
        throw(runtime_error("can not remove! "));
    }
    else
    {
        swap(m_arr[0], m_arr[m_heapsize - 1]);
        m_heapsize--;
        downheap(0);
    }
}

template <typename T>
void maxheap<T>::clear()
{
    delete []m_arr;
}

template <typename T>
void maxheap<T>::resize()
{
    int old = m_size;
    m_size = 2 * m_size + 1;
    T *temp = new T[m_size];
    for (int i = 0; i < old; i++)
    {
        temp[i] = m_arr[i];
    }
    T *temp_arr = m_arr;
    delete []temp_arr;
    m_arr = temp;
}

template <typename T>
void maxheap<T>::upheap(int index)
{
 
       // if ((index-1)/2 < m_heapsize && index < m_heapsize)
        //{
            if (m_arr[(index-1)/2] < m_arr[index])
            {
                std::swap(m_arr[index], m_arr[(index-1)/2]);
                upheap((index-1)/2);
            }
       // }
    
}

template <typename T>
void maxheap<T>::downheap(int index)
{
    if (2 * index + 1 >= m_heapsize)
    {
        return;
    }
    else if (2 * index + 2 >= m_heapsize)
    {
        if (m_arr[index] < m_arr[2 * index + 1])
        {
            std::swap(m_arr[index], m_arr[2 * index + 1]);
        }
    }
    else
    {
        int maxindex;
        if (m_arr[2 * index + 1] > m_arr[2 * index + 2])
        {
            maxindex = 2 * index + 1;
        }
        else
        {
            maxindex = 2 * index + 2;
        }
        if (m_arr[index] < m_arr[maxindex])
        {
            std::swap(m_arr[index], m_arr[maxindex]);
            downheap(maxindex);
        }
    }
}

template <typename T>
maxheap<T>::~maxheap()
{
    clear();
    //delete []m_arr;
}
