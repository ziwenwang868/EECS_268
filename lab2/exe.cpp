/*
name: ziwen wang
file name: exe.cpp
date: 7 Feb 2019
berif: immplemtation of excutive class 
*/
#include "exe.h"
exe::exe()
{

}
void exe::run()
{
    int choice=0;
    while (choice != 6)
    {
        cout<<endl; 
        cout << "Make a selection:" << endl;
        cout << "1) Insert value at position" << endl;
        cout << "2) Remove at position" << endl;
        cout << "3) Replace value at position" << endl;
        cout << "4) Print length" << endl;
        cout << "5) Print list" << endl;
        cout << "6) Exit" << endl;
        cout << "Choice: ";
        cin>>choice;
        if(choice==1)
        {   
            int pos;
            int val;
            cout<<"Give me a Position: ";
            cin>>pos;
            cout<<"Given me a Value:";
            cin>>val;
            try
            {
                h.insert(pos,val);
            }
            catch(std::runtime_error& e)
            {
                cout<< e.what() << '\n';
            }
            
            
        }
        if(choice==2)
        {
            int pos;
            cout<<"Give me a Position: ";
            cin>>pos;
            try
            {
                h.remove(pos);
            }
            catch(std::runtime_error& e)
            {
                cout<< e.what() << '\n';
            }
            
            
        }
        if(choice==3)
        {
            int pos;
            int val;
            cout<<"Give me a Position: ";
            cin>>pos;
            cout<<"Given me a Value:";
            cin>>val;
            try
            {
                h.replace(pos,val);
            }
            catch(std::runtime_error& e)
            {
                cout<< e.what() << '\n';
            }
           
        }
        if(choice==4)
        {
            cout<<"The Length of the List is: "<<h.getLength()<<endl;
        }
        if(choice==5)
        {
            cout<<"The List is below:"<<endl;
         int length=h.getLength();
         for(int i=1;i<length+1;i++)
         {
             cout<<h.getEntry(i)<<endl;
         }  
         
        }
    }
}

void exe::testAssignment()
{
    LinkedListTester t;
    t.runTests();
}