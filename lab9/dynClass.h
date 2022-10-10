#include <iostream>
using namespace std;

template <class T>
class dynClass
{

public:
    // constructor
    dynClass(int m1, int m2);
    // copy constructor
    dynClass(const dynClass &obj);
    // destructor
    ~dynClass();
    // assignment operator
    dynClass &operator=(const dynClass &obj);

private:
    // data of int and a pointer to data of int
    int member1;
    int *member2;
};

#include "dynClass.cpp"