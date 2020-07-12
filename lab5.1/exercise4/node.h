/*
name: ziwen wang
file name: node.h
date: 23 mar 2019
berif: node header file
*/
#ifndef node_h
#define node_h


class node
{
    private:
    char value;//value in a node
    node* next;//pointer point to the next
    public:
    //pre take a value
    //post constartor creates a node
    //return none
    node(char value);
    //pre none
    //post constartor
    //return none
    node();
    //pre none
    //post none
    //return retue the next node object
    node* getnext()const;
    //pre none
    //post getthe value in a node
    //return reture the templete type
    char getvalue()const;
    //pre take a pointer
    //post set the poniter point to next
    //return none
    void setnext(node* next);
    //pre take a value
    //post ste the value to the current node
    //return none
    void setvalude(char value);

};

#endif
