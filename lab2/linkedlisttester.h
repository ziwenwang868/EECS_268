/*
name: ziwen wang
file name: tester.h
date: 7 Feb 2019
berif: header file of tester class
*/
#ifndef LINKED_LIST_TESTER_H
#define LINKED_LIST_TESTER_H
#include "linkedlist.h"
class LinkedListTester
{
    public:

    LinkedListTester();
    ~LinkedListTester();
    //This will call all the test methods
    void runTests();

    private:
    LinkedList t;
    /**
    * @brief Creates an empty list and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty list and verifies getLength() returns 0
    **/
    void test02();

    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after inserting from the front of the list
    **/
    void test03();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after inserting from the middle of the list
    **/
    void test04();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after inserting from the back of the list
    **/
    void test05();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after adding and removing from the front of the list
    **/
    void test06();
    /**
    * @brief Creates an empty list and verifies  getLength() returns the correct value after adding and removing from the middle of the list
    **/
    void test07();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after adding and removing from the back of the list
    **/
    void test08();
    /**
    * @brief Creates an empty list and verifies an exception is thrown if insert is given an invalid position
    **/
    void test09();
    /**
    * @brief Creates an empty list and verifies an exception is thrown if remove is given an invalid position
    **/
    void test10();
    /**
    * @brief Creates an empty list and verifies an exception is thrown if replace is given an invalid position
    **/
    void test11();
    /**
    * @brief Creates an empty list and verifies an exception is thrown if getEntry is given an invalid position
    **/
    void test12();
    /**
    * @brief Creates an empty list and verifies getEntry returns the correct value if there is an element in the list
    **/
    void test13();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after replacing from the back of the list
    **/
    void test14();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after replacing from the middle of the list
    **/
    void test15();
    /**
    * @brief Creates an empty list and verifies getLength() returns the correct value after replacing from the front of the list
    **/
    void test16();
    /**
    * @brief Creates an empty list and verifies getEntry returns the correct value
    **/
    void test17();
    /**
    * @brief Creates an empty list and verifies getEntry returns the correct value
    **/
    void test18();
    /**
    * @brief Creates an empty list and verifies getEntry returns the correct value
    **/
    void test19();
    /**
    * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
    **/
    void test20();

};
#endif
