/*
name: ziwen wang
file name: pokemon.h
date: 20 april 2019
berif: header file of pokemon class
*/
#ifndef pokemon_h
#define pokemon_h
#include <iostream>
#include <string>

using namespace std;

class pokemon
{
private:
  string usn;
  string jpn;
  int index;

public:
  pokemon();
  pokemon(string us, string jp, int in);
  /**
	*	@pre none
  * @get american name
	*	@return american name
	*/
  string getusn() const;
  /**
	*	@pre none
  * @get japenese name
	*	@return japenese name
	*/
  string getjpn() const;
  /**
	*	@pre none
  * @get index number
	*	@return index number
	*/
  int getindex() const;

  bool operator<(const pokemon &p) const;
  bool operator>(const pokemon &p) const;
  bool operator<(const string p) const;
  bool operator>(const string p) const;
  bool operator==(const string p) const;
  //  bool operator ==(const pokemon* p) const;
  ~pokemon();
};
#endif
