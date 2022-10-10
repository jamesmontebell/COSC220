/*
  factorial.cpp
  Recursive factorial for use with gdb demo
  Thomas Anastasio
  Created: October 17, 2002
  Current: October 17, 2002
*/
#include <iostream>
#include "factorial.h"
using namespace std;

unsigned factorial(unsigned n)
{

  int thisval;  

  if (n == 0)
    return 1;
  if (n == 1)
    return 1;
    cout << n << endl;
  thisval = factorial(n - 1);  // isolate the call on one line
  return n * thisval;
}


