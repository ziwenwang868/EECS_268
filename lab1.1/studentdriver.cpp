#include"studentdriver.h"
#include<string>
#include<iostream>
#include<fstream>
#include<limits>

using namespace std;

studentdriver::studentdriver(string n)
{
    string file = n;
    string depart;
    int courcenum;
    int numofst;

    ifstream inflie;
    int siz;

    inflie.open(file);
    while (!inflie.is_open())
    {
        cout << "wrong filename try again: ";
        cin >> file;
        inflie.open(file);
    }

    inflie >> siz;
    setnumberofclass(siz);
    myinfor = new studentinfor[siz];

    for (int i = 0; i < getnumberofclass(); i++)
    {
        inflie >> depart;
        myinfor[i].setdepart(depart);
        inflie >> courcenum;
        myinfor[i].setcoursenum(courcenum);
        inflie >> numofst;
        myinfor[i].setnumberofst(numofst);

        int inputids;
        arr=new int[myinfor[i].getnumberofst()];
        for(int j=0;j<myinfor[i].getnumberofst();j++)
        {
             inflie>>inputids;
             arr[j]=inputids;
            
        }
        myinfor[i].setstudentid(arr);
      

    }
    delete[] arr;
    
}
void studentdriver::setnumberofclass(int x)
{
    numberofclass=x;
}

int studentdriver::getnumberofclass()const
{
    return numberofclass;
}

void studentdriver::run()
{
int choice;
    do
    {
        cout << "Select an option:" << '\n';
        cout << "1) Print all courses" << '\n';
        cout << "2) Print all courses for a department" << '\n';
        cout << "3) Print roster for a course" << '\n';
        cout << "4) Print largest class" << '\n';
        cout << "5) Swap two classes" << '\n';
        cout << "6) Print schedule for student" << '\n';
        cout << "7) Exit the program" << '\n';
        cout << "Enter your choice: ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Sorry, your input did not working. Try again: ";
            cin >> choice;
        }
        if (choice == 1)
        {
            for (int i = 0; i < getnumberofclass(); i++)
            {
                cout << myinfor[i].getdepart() << " " << myinfor[i].getcoursenum() << '\n';
            }
        }
        if(choice==2)
        {
            string input;
            cout<<"Enter a department code: ";
            cin>>input;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not work. Try again: ";
                cin >> input;
            }
            bool flag=true;
            for(int i=0;i<getnumberofclass();i++)
            {
                 if (myinfor[i].getdepart() == input)
                {
                    cout << myinfor[i].getdepart() << " " << myinfor[i].getcoursenum() << '\n';
                    flag = false;
                }
            }
             if (flag)
            {
                cout << "None of course marches." << '\n';
            }

        }
        if(choice==3)
        {
            string cou;
            int num;
            int print;
            bool flag = true;

            cout<<"Please enter a deoartment code: ";
            cin>>cou;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not work. Try again: ";
                cin >> cou;
            }
            cout<<"Please enter a course number: ";
            cin>>num;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not work. Try again: ";
                cin >> num;
            }
             for (int i = 0; i < getnumberofclass(); i++)
            {
                if (myinfor[i].getcoursenum() == num && myinfor[i].getdepart() == cou)
                {
                    print=i;
                    flag=false;
                }
            }
            if (flag == false)
            {
                myinfor[print].print();
            }
            else
            {
                cout << "please check your input";
            }


        }
         if (choice == 4)
        {
            int max = 0;
            int count;
            int samecount;
            bool flag = false;
            for (int i = 0; i < getnumberofclass(); i++)
            {
                if (max < myinfor[i].getnumberofst())
                {
                    max = myinfor[i].getnumberofst();
                    count = i;
                }
                else if (max == myinfor[i].getnumberofst())
                {
                    samecount = i;
                    flag = true;
                }
            }

            if (flag == true)
            {
                cout << "Both " << myinfor[count].getdepart() << " " << myinfor[count].getcoursenum() << " and " << myinfor[samecount].getdepart() << " " << myinfor[samecount].getcoursenum() << " have the same amount of " << max << " students !" << '\n';
            }
            else
            {
                cout << "The largest class is " << myinfor[count].getdepart() << " " << myinfor[count].getcoursenum() << '\n';
                cout << "There are " << max << " students in this class !" << '\n';
            }
        }

        if (choice == 5)
        {
            bool flag1 = false, flag2 = false;
            int firstnum, secnum, count1, count2;
            string firstclas, secclas;
            cout << "please enter a course number that you want to swap: ";
            cin >> firstnum;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not working. Try again: ";
                cin >> firstnum;
            }

            cout << "enter a department code of that class: ";
            cin >> firstclas;

            cout << "please enter an anthor course number that you want to swap: ";
            cin >> secnum;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not working. Try again: ";
                cin >> secnum;
            }

            cout << "enter an anthor department code of that class: ";
            cin >> secclas;

            for (int i = 0; i < getnumberofclass(); i++)
            {
                if (myinfor[i].getdepart() == firstclas && myinfor[i].getcoursenum() == firstnum)
                {
                    flag1 = true;
                    count1 = i;
                }

                if (myinfor[i].getdepart() == secclas && myinfor[i].getcoursenum() == secnum)
                {
                    flag2 = true;
                    count2 = i;
                }
            }

            if (flag1 == false)
            {
                cout << "The first class is not exsit! " << '\n';
            }

            if (flag2 == false)
            {
                cout << "The second class is not exsit! " << '\n';
            }
            else
            {
                myinfor[count1].setdepart(secclas);
                myinfor[count1].setcoursenum(secnum);
                myinfor[count2].setdepart(firstclas);
                myinfor[count2].setcoursenum(firstnum);
            }
        }

        if (choice == 6)
        {
            int *arr = nullptr;
            int input;
            cout << "enter a student id: ";
            cin >> input;

           while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Sorry, your input did not work. Try again: ";
                cin >> input;
            }

            for (int i = 0; i < getnumberofclass(); i++)
            {
                arr = myinfor[i].getstuids();
                for (int j = 0; j < myinfor[i].getnumberofst(); j++)
                {
                    if (input == arr[j])
                    {
                        cout << myinfor[i].getdepart() << " " << myinfor[i].getcoursenum() << '\n';
                    }
                }
            }
        }
    }while(choice!=7);
    

}


studentdriver::~studentdriver()
{
    
    delete[] myinfor;
}