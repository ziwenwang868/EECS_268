/*
name: ziwen wang
file name: pokemon.cpp
date: 20 april 2019
berif: implementation of pokemon class
*/
#include "pokemon.h"

pokemon::pokemon()
{
}
pokemon::pokemon(string us, string jp, int in)
{
    usn = us;
    jpn = jp;
    index = in;
}

string pokemon::getusn() const
{
    return usn;
}

string pokemon::getjpn() const
{
    return jpn;
}
int pokemon::getindex() const
{
    return index;
}

bool pokemon::operator<(const pokemon &p) const
{

    return (usn < p.usn);
}

bool pokemon::operator>(const pokemon &p) const
{

    return (usn > p.usn);
}

bool pokemon::operator<(const string p) const
{
    return (usn < p);
}
bool pokemon::operator>(const string p) const
{
    return (usn > p);
}
bool pokemon::operator==(const string p) const
{
    return (usn == p);
}

pokemon::~pokemon()
{
}
