#ifndef NODE_CLASS
#define NODE_CLASS

#include "string.h"
#include <iostream>
using namespace std;

class Node{
    public:
        string lastName;
        string firstName;
        int idNumber;
        Node * next;
        void printNode();
};

#endif

    