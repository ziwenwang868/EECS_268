/*
name: ziwen wang
file name: sorts.h
date: 12 april 2019
berif: header file of sorts
*/
#ifndef sorts_h
#define sorts_h
#include<iostream>
template <typename T>
class sorts
{
  public:
    static void bubbleSort(T arr[], int size);
    static void selectionSort(T arr[], int size);
    static void insertionSort(T arr[], int size);
    static void mergeSort(T arr[], int size);
    static void quickSort(T arr[], int size);
    static void quickSortWithMedian(T arr[], int size);
    static bool isSorted(T arr[], int size);

    int findlargest(const T arr[],int size);
    private:
    
    static void merge(T* a1, T* a2, int size1, int size2);
    static void quickSortRec(T arr[], int first, int last, bool median);
    static void setMedianPivot(T arr[], int first, int last);
    static int partition(T arr[], int first, int last, bool median);
  
};

#include"sorts.cpp"
#endif