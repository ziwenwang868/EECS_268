/*
name: ziwen wang
file name: people.cpp
date: 4 may 2019
berif: implementation of people
*/
#include "people.h"

people::people()
{
    fsname = "";
    lsname = "";
    age = 0;
    suffers = "";
    //serity = -1;
}
people::people(string na, string ln, string su, int ag, int ser,int x)
{
    fsname = na;
    lsname = ln;
    suffers = su;
    age = ag;
    serity = ser;
    order=x;
}
int people::getorder()
{
    return order;
}
string people::getfsname()
{
    return fsname;
}
string people::getlsname()
{
    return lsname;
}
string people::getsuffer()
{
    return suffers;
}
int people::getage()
{
    return age;
}
int people::getserity()
{
    return serity;
}

bool people::operator<(people &x) const
{
    return (serity < x.getserity());
}
bool people::operator>(people &x) const
{
    return (serity > x.getserity());
}
