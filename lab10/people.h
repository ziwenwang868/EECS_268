/*
name: ziwen wang
file name: people.h
date: 4 may 2019
berif: header file of people class
*/
#ifndef people_h
#define people_h

#include <string>
#include <iostream>
using namespace std;
class people
{
private:
    string fsname;
    string lsname;
    int age;
    string suffers;
    int serity;
    int order;

public:
    people();
    people(string fsname, string lsname, string suffer, int age, int serity,int co);
    int getorder();
    string getfsname();
    string getlsname();
    string getsuffer();
    int getage();
    int getserity();

    bool operator<(people &x) const;
    bool operator>(people &x) const;
};
#endif
