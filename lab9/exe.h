/*
name: ziwen wang
file name: exe.h
date: 20 april 2019
berif: header file of exe class
*/
#ifndef exe_h
#define exe_h
#include <iostream>
#include <fstream>
#include <string>
#include "pokemon.h"
#include "bst.h"
#include "test.h"
//#include"btnode.h"

using namespace std;

class exe
{
private:
  bst<pokemon, string> hi; //brinay search tree class
  bst<pokemon, string> copytree;
  //test hello;
  //pokemon pok; //pokemon class
  //btnode<int> *h;
  //test hello;

  string outstring;

public:
  static string output;
  void outfile();

  static void print(pokemon entry);
  static void visit(pokemon entry);
  exe(string filename); //take in the filename and make the tree
  void run();           //print manue interacte with user
  ~exe(){}
};
#endif
