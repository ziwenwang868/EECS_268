/*
name: ziwen wang
file name: sorts.cpp
date: 12 april 2019
berif: implementation of sorts
*/
template <typename T>
void sorts<T>::bubbleSort(T arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }

}

template <typename T>
void sorts<T>::selectionSort(T arr[], int size)
{
    int min = 0;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        T swap = arr[min];
        arr[min] = arr[i];
        arr[i] = swap;
    }
}

template <typename T>
void sorts<T>::insertionSort(T arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        T next = arr[i];
        int loc = i;
        while ((loc > 0) && (arr[loc - 1] > next))
        {
            arr[loc] = arr[loc - 1];
            loc--;
        }
        arr[loc] = next;
    }
}
template <typename T>
void sorts<T>::mergeSort(T arr[], int size)
{
    if (size > 1)
    {
        int left = size / 2;
        int right = size - left;
        T *arrleft = arr;
        T *arrright = arr + left;
        mergeSort(arrleft, left);
        mergeSort(arrright, right);
        merge(arrleft, arrright, left, right);
    }
}
template <typename T>
void sorts<T>::quickSort(T arr[], int size)
{
    quickSortRec(arr, 0, size-1, false);
}

template <typename T>
void sorts<T>::quickSortWithMedian(T arr[], int size)
{
    quickSortRec(arr, 0, size-1, true);
}

template <typename T>
bool sorts<T>::isSorted(T arr[], int size)
{
    bool sorted=true;
    T min= arr[0];
    for(int i=0;i<size;i++)
    {
       if(arr[i]< min)
       {
           std::cout<<"coooollll";
           sorted=false;
       }
    }
    return sorted;
}

template <typename T>
void sorts<T>::merge(T *arrleft, T *arrright, int left, int right)
{
    T *buffer = new T[left + right];
    int indexl = 0;
    int indexr = 0;
    for (int i = 0; i < left + right; i++)
    {
        if (indexl >= left)
        {
            buffer[i] = arrright[indexr];
            indexr++;
        }
        else if (indexr >= right)
        {
            buffer[i] = arrleft[indexl];
            indexl++;
        }
        else if (arrleft[indexl] >= arrright[indexr])
        {
            buffer[i] = arrright[indexr];
            indexr++;
        }
        else
        {
            buffer[i] = arrleft[indexl];
        }
    }
    for (int i = 0; i < left + right; i++)
    {
        arrleft[i] = buffer[i];
    }
    delete[] buffer;
}
template <typename T>
void sorts<T>::quickSortRec(T arr[], int first, int last, bool median)
{
    if (first < last)
    {
        int p_index = partition(arr, first, last, median);
         
      quickSortRec(arr, p_index + 1, last, median);
      quickSortRec(arr, first, p_index - 1, median);
    }

   

    
    
}
template <typename T>
void sorts<T>::setMedianPivot(T arr[], int first, int last)
{
    int middle = (first + last) / 2;

    if (arr[first] > arr[middle])
    {
        std::swap(arr[middle], arr[first]);
    }
    if (arr[first] > arr[last])
    {
        std::swap(arr[middle], arr[last]);
    }
    if (arr[middle] > arr[last])
    {
        std::swap(arr[last], arr[middle]);
    }

    std::swap(arr[middle], arr[first]);
}

template <typename T>
int sorts<T>::partition(T arr[], int first, int last, bool median)
{
    if (median)
    {
        setMedianPivot(arr, first, last);
    }

    int pivot = arr[last];

    while (first < last)
    {
        while (arr[first] < pivot)
        {
            first++;
        }
        while (arr[last] > pivot)
        {
            last--;
        }
        if (arr[first] == arr[last])
        {
            first++;
        }
        else if (first < last)
        {
            std::swap(arr[first], arr[last]);
        }
    }
    return last;
}
