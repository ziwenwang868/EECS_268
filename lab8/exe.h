/*
name: ziwen wang
file name: exe.h
date: 20 april 2019
berif: header file of exe class
*/
#ifndef exe_h
#define exe_h
#include<iostream>
#include<fstream>
#include<string>
#include"pokemon.h"
#include"bst.h"
//#include"btnode.h"

using namespace std;

class exe
{
    private:
    bst<pokemon,string> hi; //brinay search tree class
     pokemon pok; //pokemon class
  //btnode<int> *h;

    public:
    exe(string filename);//take in the filename and make the tree
    void run();//print manue interacte with user



};
#endif
