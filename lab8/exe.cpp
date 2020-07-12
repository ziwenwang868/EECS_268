/*
name: ziwen wang
file name: exe.cpp
date: 20 april 2019
berif: implementation of exe
*/
#include "exe.h"

exe::exe(string name)
{
  string name0 = name;
  ifstream inflie;
  string usn;
  string jpn;
  int num;
  inflie.open(name0);
  while (!inflie.is_open())
  {
    cout << "wrong filename try again: ";
    cin >> name0;
    inflie.open(name0);
  }
  while (!inflie.eof())
  {
    inflie >> usn >> num >> jpn;
    hi.add(pokemon(usn, jpn, num));
  }
  inflie.close();
}

void exe::run()
{
  int num;
  string jpn;
  string usn;
  int choice = 0;
  while (choice != 3)
  {
    cout<<"=========================="<<endl;
    cout << "Your choices are bellow:" << endl;
    cout << "1. add" << endl;
    cout << "2. search" << endl;
    cout << "3. exsit" << endl;
    cout<<"=========================="<<endl;
    cout <<"Your choice: ";
    cin >> choice;
    if (choice == 1)
    {
      cout << "Enter a American name: ";
      cin >> usn;
      cout << "Enter a Japanese name: ";
      cin >> jpn;
      cout << "Enter a Pokedex: ";
      cin >> num;
      if(!hi.contains(usn))
      {
        hi.add(pokemon(usn, jpn, num));
        cout<<"American Name: "<<usn<<" ||Japanese Name: "<<jpn<<" ||Pokedex: "<<num<<" has been add to the tree"<<endl;
      }
      else
      {
        cout<<"Duplicates are not allowed try again !"<<endl;
      }
    }
    if (choice == 2)
    {
      cout << "Enter a American name: ";
      cin >> usn;
      if(hi.contains(usn))
      {
        cout << "Japanese Name: "<<hi.search(usn).getjpn()<<" ||"<<" Pokedex Number: "<<hi.search(usn).getindex()<< endl;
      }
      else
      {
        cout<<"Nothing find in the tree, try again !"<<endl;
      }
      
    }
  }
}
