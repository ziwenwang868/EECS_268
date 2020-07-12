#ifndef tab_h
#define tab_h
#include "linkedlist.h"
#include<iostream>
#include <string>
using namespace std;

class Tab
{
  public:
  ~Tab();
    Tab();
  /**
  * @pre none
  * @post the browser navigate to the given url
  * @param url, a string representing a URL
  */
  void navigateTo(string url);

  /**
  * @pre none
  * @post if possible, the browser navigates forward in the history otherwise it keeps focus
  *         on the current URL
  */
  void forward();

  /**
  * @pre none
  * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
  *         on the current URL 
  */
  void back();

  /**
  * @return the URL currently open in the tab
  */
  string currentURL() const;

  /**
  * @pre The list being passed in is empty
  * @post The current browser history is copied into the given list  
  * @param destination, an empty list of strings
  * @return the position in the list with focus (zero if there is no history)
  */
  int copyCurrentHistory(LinkedList<string>& destination);

  private:
  LinkedList<string> uallist; //linkedlist of string
  //int m_length;
  int currenturl; //count for total url
};
#endif