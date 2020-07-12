/*
name: ziwen wang
file name: tester.cpp
date: 7 Feb 2019
berif: immplemtation of tester 
*/
#include "linkedlisttester.h"
#include "linkedlist.h"
#include <iostream>
#include <string>
using namespace std;
LinkedListTester::LinkedListTester()                //constructor
{
}
LinkedListTester::~LinkedListTester()
{
}
//This will call all the test methods
void LinkedListTester::runTests()
{
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  test18();
  test19();
  test20();
}

void LinkedListTester::test01()
{
 
  if(t.isEmpty())
  {
    cout<<"Test #1: checks to see if the list is empty   PASSED\n";
  }
  else
  {
    cout<<"Test #1: checks to see if the list is empty   FAILED\n";
  }
  
}

void LinkedListTester::test02()
{
 
  if(t.getLength() == 0)
  {
    cout<<"Test #2: size of the empty list is zero   PASSED\n";
  }
  else
  {
    cout<<"Test #2: sieze of the empty list is zero   FAILED\n";
  }
   
}

void LinkedListTester::test03()
{
  
 t.insert(1,2);
 t.insert(1,3);
  if(t.getLength() == 2)
  {
    cout<<"Test #3: size returns correct value after inserting at front of list   PASSED\n";
  }
  else
  {
    cout<<"Test #3: size returns correct value after inserting at front of list   FAILED\n";
  }
   t.clear();
}

void LinkedListTester::test04()
{
  
 t.insert(1,2);
  t.insert(2,3);
  t.insert(3,5);
  t.insert(2,8);
  if(t.getLength() == 4)
  {
    cout<<"Test #4: size returns correct value after inserting at middle of list   PASSED\n";
  }
  else
  {
    cout<<"Test #4: size returns correct value after inserting at middle of list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test05()
{
 
  t.insert(1,2);
  t.insert(2,3);
  t.insert(3,5);
  if(t.getLength() == 3)
  {
    cout<<"Test #5: size returns correct value after inserting at back of list   PASSED\n";
  }
  else
  {
    cout<<"Test #5: size returns correct value after inserting at back of list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test06()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.remove(1);
  if(t.getLength() == 1)
  {
    cout<<"Test #6: size returns correct value after adds and removing from front of list   PASSED\n";
  }
  else
  {
    cout<<"Test #6: size returns correct value after adds and removing from front of list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test07()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.insert(3,5);
  t.remove(2);
  if(t.getLength() == 2)
  {
    cout<<"Test #7: size returns correct value after adds and removing from middle of list   PASSED\n";
  }
  else
  {
    cout<<"Test #7: size returns correct value after adds and removing from middle of list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test08()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.remove(2);
  if(t.getLength() == 1)
  {
    cout<<"Test #8: size returns correct value after adds and removing from back of list   PASSED\n";
  }
  else
  {
    cout<<"Test #8: size returns correct value after adds and removing from back of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test09()
{
  
  bool fail = false;
  try
  {
    t.insert(2,2);
  }
  catch(std::runtime_error & rte)
  {
    fail = true;
  }
  if(fail == true)
  {
      cout<<"Test #9: insert throws exception if given an invalid position   PASSED\n";
  }
  else
  {
      cout<<"Test #9: insert throws exception if given an invalid position   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test10()
{
  
  bool fail = false;
  try
  {
    t.remove(2);
  }
  catch(std::runtime_error & rte)
  {
    fail = true;
  }
  if(fail == true)
  {
      cout<<"Test #10: remove throws exception if given an invalid position   PASSED\n";
  }
  else
  {
      cout<<"Test #10: remove throws exception if given an invalid position   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test11()
{
  
  bool fail = false;
  try
  {
    t.replace(2,2);
  }
  catch(std::runtime_error & rte)
  {
    fail = true;
  }
  if(fail == true)
  {
      cout<<"Test #11: replace throws exception if given an invalid position   PASSED\n";
  }
  else
  {
      cout<<"Test #11: replace throws exception if given an invalid position   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test12()
{
  
  bool fail = false;
  try
  {
    t.getEntry(2);
  }
  catch(std::runtime_error & rte)
  {
    fail = true;
  }
  if(fail == true)
  {
      cout<<"Test #12: getEntry throws exception if given an invalid position   PASSED\n";
  }
  else
  {
      cout<<"Test #12: getEntry throws exception if given an invalid position   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test13()
{
  
  t.insert(1,2);
  t.insert(2,3);
  if(t.getEntry(1) == 2)
  {
    cout<<"Test #13: getEntry returns correct value when there are elements in the list   PASSED\n";
  }
  else
  {
    cout<<"Test #13: getEntry returns correct value when there are elements in the list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test14()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.replace(1,5);
  if(t.getLength() == 2)
  {
    cout<<"Test #14: size returns correct value after replacing from back of list   PASSED\n";
  }
  else
  {
    cout<<"Test #14: size returns correct value after replacing from back of list   FAILED\n";
  }
    t.clear();
}

void LinkedListTester::test15()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.insert(3,7);
  t.replace(2,5);
  if(t.getLength() == 3)
  {
    cout<<"Test #15: size returns correct value after replacing from middle of list   PASSED\n";
  }
  else
  {
    cout<<"Test #15: size returns correct value after replacing from middle of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test16()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.replace(2,5);
  if(t.getLength() == 2)
  {
    cout<<"Test #16: size returns correct value after replacing from front of list   PASSED\n";
  }
  else
  {
    cout<<"Test #16: size returns correct value after replacing from front of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test17()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.replace(1,5);
  if(t.getEntry(1) == 5)
  {
    cout<<"Test #17: getEntry returns correct value after replacing from front of list   PASSED\n";
  }
  else
  {
    cout<<"Test #17: getEntry returns correct value after replacing from front of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test18()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.insert(3,9);
  t.replace(2,5);
  if(t.getEntry(2) == 5)
  {
    cout<<"Test #18: getEntry returns correct value after replacing from middle of list   PASSED\n";
  }
  else
  {
    cout<<"Test #18: getEntry returns correct value after replacing from middle of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test19()
{
  
  t.insert(1,2);
  t.insert(2,3);
  t.replace(2,5);
  if(t.getEntry(2) == 5)
  {
    cout<<"Test #19: getEntry returns correct value after replacing from back of list   PASSED\n";
  }
  else
  {
    cout<<"Test #19: getEntry returns correct value after replacing from back of list   FAILED\n";
  }
    t.clear();
}
void LinkedListTester::test20()
{
  
  t.insert(1,47);
  if(t.isEmpty() == false)
  {
    cout<<"Test #20: adds a value and checks to see if the list is empty   PASSED\n";
  }
  else
  {
    cout<<"Test #20: adds a value and checks to see if the list is empty   FAILED\n";
  }
  t.clear();
}
