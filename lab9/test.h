#ifndef test_h
#define test_h

//#include"testinter.h"
#include <iostream>
#include <fstream>
using namespace std;

#include "bst.h"
#include "pokemon.h"
class test 
{
    private:
    bst<pokemon,string> treefortest;
    string set;
public:
    test();
    test(bst<pokemon,string> tree);
    void run();
    static string outtput;
    static void visit(pokemon entry);
    static void print(pokemon entry);
    void outfile();
    static void testAdds(bst<pokemon, string> treeobject);
    void testRemoves(bst<pokemon, string> tree);
    void testWriteToFile(bst<pokemon, string> tree);
    //~test(){}
};
#endif