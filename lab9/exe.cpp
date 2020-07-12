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

string exe::output; //initalize the static member varible
void exe::visit(pokemon entry)
{
  //cout << entry.getusn() << " " << entry.getindex() << " " << entry.getjpn() << endl;
  string x;
  string y;
  string z;
  string total;
  x = entry.getusn() + " ";
  y = to_string(entry.getindex()) + " ";
  z = entry.getjpn();
  total = x + y + z;
  output =output+ total+'\n';
  
}

void exe::print(pokemon entry)
{
  cout << entry.getusn() << " " << entry.getindex() << " " << entry.getjpn() << endl;
}

void exe::outfile()
{
  outstring = output;
}
void exe::run()
{
  int num;
  string jpn;
  string usn;
  int choice = 0;
  while (choice != 7)
  {
    cout << "==========================" << endl;
    cout << "Your choices are bellow:" << endl;
    cout << "1. Add To Copy Tree" << endl;
    cout << "2. Search From Copy Tree" << endl;
    cout << "3. Remove Value From Copy Tree" << endl;
    cout << "4. Copy Tree (One time only)" << endl;
    cout << "5. Save Tree" << endl;
    cout << "6. Test Mode" << endl;
    cout << "7. Quit Main Menu" << endl;
    cout << "==========================" << endl;
    cout << "Your choice: ";
    cin >> choice;
    if (choice == 1)
    {
      if (copytree.isroot())
      {
        cout << "Enter a American name: ";
        cin >> usn;
        cout << "Enter a Japanese name: ";
        cin >> jpn;
        cout << "Enter a Pokedex: ";
        cin >> num;
        if (!copytree.contains(usn))
        {
          copytree.add(pokemon(usn, jpn, num));
          cout << "American Name: " << usn << " ||Japanese Name: " << jpn << " ||Pokedex: " << num << " has been add to the tree" << endl;
        }
        else
        {
          cout << "Duplicates are not allowed try again !" << endl;
        }
      }
      else
      {
        cout << "Copy tree is empty, make a copy first !" << endl;
      }
    }
    if (choice == 2)
    {
      if (copytree.isroot())
      {
        cout << "Enter a American name: ";
        cin >> usn;
        if (copytree.contains(usn))
        {
          cout << "Japanese Name: " << copytree.search(usn).getjpn() << " ||"
               << " Pokedex Number: " << copytree.search(usn).getindex() << endl;
        }
        else
        {
          cout << "Nothing find in the tree, try again !" << endl;
        }
      }
      else
      {
        cout << "Copy tree is empty, make a copy first !" << endl;
      }
    }
    if (choice == 3)
    {
      if (copytree.isroot())
      {
        cout << "Enter a American name: ";
        cin >> usn;
        if (copytree.contains(usn))
        {

          copytree.remove(usn);
          cout << usn << " has been removed from the tree!" << endl;
        }
        else
        {
          cout << "Nothing find in the tree, try again !" << endl;
        }
      }
      else
      {
        cout << "No copy tree found, make a copy first!" << endl;
      }
    }
    if (choice == 4)
    {
      if (hi.isroot())
      {
        if (!copytree.isroot())
        {
          copytree.clone(hi);
          if (copytree.isroot())
          {
            cout<<endl;
            cout << "----> The copy tree have being made ! <----" << endl;
            cout<<endl;
          }
          else
          {
            cout << "Copy fail !" << endl;
          }
        }
        else
        {
          cout << "Copy fail, only one copy is allowed !" << endl;
        }
      }
      else
      {
        cout << "Orignial tree is empty !" << endl;
      }
    }
    if (choice == 5)
    {
      string filename;
      int co;
      int order;
      ofstream out;
      cout << "Enter a file name: ";
      cin >> filename;
      out.open(filename);
      while (!out.is_open())
      {
        cout << "wrong filename try again: ";
        cin >> filename;
        out.open(filename);
      }
      cout << "Choice a tree to save: " << endl;
      cout << "1. Original tree" << endl;
      cout << "2. Copy tree" << endl;
      cin >> co;
      if (co == 1)
      {
        if (!hi.isroot())
        {
          cout << "Original tree is empty, can not save it !" << endl;
          out.close();
        }
        else
        {
          cout << "Choice a traversal order: " << endl;
          cout << "1. Inorder" << endl;
          cout << "2. Preorder" << endl;
          cout << "3. Postorder" << endl;
          cin >> order;
          if (order == 1)
          {
            hi.visitInOrder(visit);
          }
          if (order == 2)
          {
            hi.visitPreOrder(visit);
          }
          if (order == 3)
          {
            hi.visitPostOrder(visit);
          }
        }
      }
      if (co == 2)
      {
        if (!copytree.isroot())
        {
          cout << "Copy tree is empty, can not save it!" << endl;
          out.close();
        }
        else
        {
          cout << "Choice a traversal order: " << endl;
          cout << "1. Inorder" << endl;
          cout << "2. Preorder" << endl;
          cout << "3. Postorder" << endl;
          cin >> order;
          if (order == 1)
          {
            copytree.visitInOrder(visit);
          }
          if (order == 2)
          {
            copytree.visitPreOrder(visit);
          }
          if (order == 3)
          {
            copytree.visitPostOrder(visit);
          }
        }
      }
      outfile();
      out << outstring;
      outstring.clear();
      output.clear();
      out.close();
    }
    
    if (choice == 6)
    {
     test hello(hi);
     try
     {
      
       
     } 
     catch(runtime_error&e)
     {
       cout<<e.what();
     }
      //delete hello;
    }
  }
}
