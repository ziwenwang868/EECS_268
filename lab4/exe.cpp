/*
name: ziwen wang
file name: exe.cpp
date: 17 Feb 2019
berif: immplemtation of exe 
*/

#include"exe.h"

exe::exe(string name)
{
    string file=name;
    ifstream inflie;
   string func;
   string namec;
   int num;

    inflie.open(file);
    while (!inflie.is_open())
    {
        cout << "wrong filename try again: ";
        cin >> file;
        inflie.open(file);
    }
    while(!inflie.eof())
    {   
        inflie>>func;
        if(func=="WAIT")
        {
           inflie>>namec;
           line.enqueue(namec);
          
        }
        if(func=="PICK_UP")
        {
           while(!elv.isfull()&&!line.isEmpty())
           {
               elv.push(line.peekFront());
               line.dequeue();
           }
          
        }
        if(func=="DROP_OFF")
        {
            inflie>>num;
            for(int i=0;i<num;i++)
            {
                try
                {
                    elv.pop();
                }
                catch( PrecondViolatedExcep& e)
                {
                   cout<< e.what() << '\n';
                   break;
                }
                
            }

          
        }
        if (func=="INSPECTION") 
        {
            cout<<"Elevator status:"<<'\n';
            if(elv.countnum()>0)
            {
               cout<<"The elevator is not empty."<<endl;
            }
            else
            {
                cout<<"The elevator is empty."<<endl;
            }

            if(elv.isEmpty())
            {
                cout<<"No one is in the elevator."<<endl;
            }
            else
            {
                cout<<elv.peek()<<" will be the next person to leave the elevator."<<endl;
            }

            if(line.isEmpty())
            {
                cout<<"No one is in the line."<<endl;
            }
            else
            {
                cout<<line.peekFront()<<" will be the next person to get on the elevator."<<endl;
            }
           cout<<endl;
        }
        
       
    }

    inflie.close();


}

exe::~exe()
{
   
}
