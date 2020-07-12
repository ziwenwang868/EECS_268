/*
name: ziwen wang
file name: hospital.cpp
date: 4 may 2019
berif: implementation of hospital
*/
#include "hospital.h"
hospital::hospital()
{
}
hospital::hospital(string x)
{   
    count=999999999;
    string name0 = x;
    ifstream inflie;
    string function;
    string fsname;
    string lsname;
    int age;
    string illness;
    int severity;
    int istie;
    int secondco;
    inflie.open(name0);
    while (!inflie.is_open())
    {
        cout << "wrong filename try again: ";
        cin >> name0;
        inflie.open(name0);
    }
    cout << "Is tie ?" << endl;
    cout << "1. Tie(add by severity)" << endl;
    cout << "2. Very tie(add by age)" << endl;
    cout<<"3. Very very tie(add by first and last)"<<endl;
    cout << "your choice:";
    cin >> secondco;
    if (secondco == 1)
    {
        istie = 1;
    }
    else if (secondco == 2)
    {
        istie = 2;
    }
    else if(secondco==3)
    {
        istie=3;
    }
    else
    {
        cout<<"Enter unexpert value, Defult Mode. (Add by sseverity)"<<endl;
        istie=1;
    }
    
    while (!inflie.eof())
    {
        inflie >> function;
        if (function == "ARRIVE")
        {
            count--;
            inflie >> fsname >> lsname >> age >> illness >> severity;
            if (istie == 1)
            {
                if (age >= 0 && severity >= 0 && severity <= 9)
                {
                    hs_open.add(people(fsname, lsname, illness, age, severity,count));
                }
                else
                {
                    cout << "Patient: " << fsname << ", " << lsname << " not added in to line." << endl;
                    cout << "Due to: ";
                    if (age < 0)
                    {
                        cout << " Age is not a positive number! ";
                    }
                    if (severity < 0 || severity > 9)
                    {
                        cout << "Severity is not in the scope (0 to 9)! ";
                    }
                    cout << endl;
                }
            }
            if (istie == 2)
            {
                if (age >= 0 && severity >= 0 && severity <= 9)
                {
                    hs_open.add(people(fsname, lsname, illness, severity, age,count));
                }
                else
                {
                    cout << "Patient: " << fsname << ", " << lsname << " not added in to line." << endl;
                    cout << "Due to: ";
                    if (age < 0)
                    {
                        cout << " Age is not a positive number! ";
                    }
                    if (severity < 0 || severity > 9)
                    {
                        cout << "Severity is not in the scope (0 to 9)! ";
                    }
                    cout << endl;
                }
            }
            if(istie ==3)
            {
                if (age >= 0 && severity >= 0 && severity <= 9)
                {
                    hs_open.add(people(fsname, lsname, illness,age,count,severity));
                }
                else
                {
                    cout << "Patient: " << fsname << ", " << lsname << " not added in to line." << endl;
                    cout << "Due to: ";
                    if (age < 0)
                    {
                        cout << " Age is not a positive number! ";
                    }
                    if (severity < 0 || severity > 9)
                    {
                        cout << "Severity is not in the scope (0 to 9)! ";
                    }
                    cout << endl;
                }
            }
        }
        if (function == "NEXT")
        {
            if (!hs_open.isEmpty())
            {
                if (istie == 1)
                {
                    cout << "Next patient:" << endl;
                    cout << "     Name: " << hs_open.peekTop().getlsname() << ", " << hs_open.peekTop().getfsname() << "." << endl;
                    cout << "     Age: " << hs_open.peekTop().getage() << endl;
                    cout << "     Surrers from: " << hs_open.peekTop().getsuffer() << endl;
                    cout << "     Illness severity: " << hs_open.peekTop().getserity() << endl;
                    cout << endl;
                }
                if (istie == 2)
                {
                    cout << "Next patient:" << endl;
                    cout << "     Name: " << hs_open.peekTop().getlsname() << ", " << hs_open.peekTop().getfsname() << "." << endl;
                    cout << "     Age: " << hs_open.peekTop().getserity()<< endl;
                    cout << "     Surrers from: " << hs_open.peekTop().getsuffer() << endl;
                    cout << "     Illness severity: " << hs_open.peekTop().getage()  << endl;
                    cout << endl;
                }
                if (istie == 3)
                {
                    cout << "Next patient:" << endl;
                    cout << "     Name: " << hs_open.peekTop().getlsname() << ", " << hs_open.peekTop().getfsname() << "." << endl;
                    cout << "     Age: " << hs_open.peekTop().getage() << endl;
                    cout << "     Surrers from: " << hs_open.peekTop().getsuffer() << endl;
                    cout << "     Illness severity: " << hs_open.peekTop().getorder() << endl;
                    cout << endl;
                }
               
            }
            else
            {
                cout << "----No patient in the line!----" << endl;
            }
        }
        if (function == "TREAT")
        {
            if (!hs_open.isEmpty())
            {
                hs_open.remove();
            }
            else
            {
                cout << "----No patient to be treat!----" << endl;
            }
        }

        if (function == "COUNT")
        {
            cout << endl;
            cout << "There are " << hs_open.getNumberOfNodes() << " patients waiting." << endl;
            cout << endl;
        }
    }

    inflie.close();
}

void hospital::testrun()
{
    int choice = 0;
    while (choice != 6)
    {
        cout << "1. add" << endl;
        cout << "2. peak" << endl;
        cout << "3. getnumberof node" << endl;
        cout << "4. remove" << endl;
        cout << "5. print" << endl;
        cin >> choice;
        if (choice == 1)
        {
            int num;
            cout << "number: ";
            cin >> num;
            test.add(num);
        }
        if (choice == 2)
        {
            cout << "front is: " << test.peekTop() << endl;
        }
        if (choice == 3)
        {
            cout << "node count: " << test.getNumberOfNodes() << " Hight: " << test.getHeight() << endl;
        }
        if (choice == 4)
        {
            test.remove();
        }
        if (choice == 5)
        {
        }
    }
}
