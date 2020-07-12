/*
name: ziwen wang
file name: exe.cpp
date: 12 april 2019
berif: implementation of exe
*/
#include"exe.h"
exe::exe(string sort,string lowbound,string upperbound,string steps,string file,bool isorted)
{
    size=stoi(lowbound);
    int upper=stoi(upperbound);
    int step=stoi(steps);
    string output="";
    long double time=0.0;
    sorttimer <int>help;
    output +=sort;
    output +='\n';

    while(size<=upper)
    {
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=(rand()%100+1);
        }
        if(sort=="bubble")
        {
            time=help.timesort( sorts<int>::bubbleSort,arr,size);
        }
        else if(sort=="selection")
        {
            time=help.timesort(sorts<int>::selectionSort,arr,size);
        }
        else if(sort=="insertion")
        {
            time=help.timesort(sorts<int>::insertionSort,arr,size);
        }
        else if(sort=="merge")
        {
            time=help.timesort(sorts<int>::mergeSort,arr,size);
        }
        else if(sort=="quickSort")
        {
            time=help.timesort(sorts<int>::quickSort,arr,size);
        }
        else if(sort=="quickSortWithMedian")
        {
            time=help.timesort(sorts<int>::quickSortWithMedian,arr,size);
        }

        if(isorted)
        {
            assert(sorts<int>::isSorted(arr,size));
        }
        output +=to_string(size);
        output +=", ";
        output +=to_string(time);
        output +="\n";

        delete []arr;
        size+=step;
    }
    writtefile(file,output);
}

void exe::writtefile(string filename,string output)
{
    ofstream out;
    out.open(filename);
    out<<output;
    out.close();
}
