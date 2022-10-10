/*
  Pointers.cpp
  COSC-220 Lab 9
  Based on a lab designed by Thomas Horseman

  Thomas Anastasio
  Created: April 8, 2001
  Current: March 20, 2003
*/

#include <iostream>
#include <stddef.h>     // for NULL definition

int main()
{
  using namespace std;

  int int1 = 1, int2 = 2, int3 = 3;
  double dub1 = 1.0, dub2 = 2.0, dub3 = 3.0;
  float flt1 = 1.0f;
  char chr1 = 'a', chr2 = 'b';

  //////////////////////////////////////////////////////////////////	
  // 1. Experiment with storage sizes and addresses of various data
  // types.
  //////////////////////////////////////////////////////////////////	
  //  A.  Add statements to print the addresses of each of the 9
  //  variables declared above and record the addresses. 
  //  B.  Add statements to print the sizes (in bytes) of each of the
  //  9 variables  (use the sizeof operator).
  //  C.  Add statements to print the sizes of the addresses of the 9
  //  variables (again, use the sizeof operator).
	
  //  Write your code here:
cout << "ADDRESSES" << endl;
int *int1_add = &int1;
cout << &int1_add << endl;
int *int2_add = &int2;
cout << &int2_add << endl;
int *int3_add = &int3;
cout << &int3_add << endl;

double *dub1_add = &dub1;
cout << &dub1_add << endl;
double *dub2_add = &dub2;
cout << &dub2_add << endl;
double *dub3_add = &dub3;
cout << &dub3_add << endl;

float *flt1_add = &flt1;
cout << &flt1_add << endl;

char *chr1_add = &chr1;
cout << &chr1_add << endl;
char *chr2_add = &chr2;
cout << &chr2_add << endl;

cout << "SIZES OF VARIABLES" << endl;

cout << sizeof(int1) << endl;
cout << sizeof(int2) << endl;
cout << sizeof(int3) << endl;

cout << sizeof(dub1) << endl;
cout << sizeof(dub2) << endl;
cout << sizeof(dub3) << endl;

cout << sizeof(flt1) << endl;

cout << sizeof(chr1) << endl;
cout << sizeof(chr2) << endl;

cout << "SIZES OF ADDRESSES" << endl;

cout << sizeof(&int1_add) << endl;
cout << sizeof(&int2_add) << endl;
cout << sizeof(&int3_add) << endl;

cout << sizeof(&dub1_add) << endl;
cout << sizeof(&dub2_add) << endl;
cout << sizeof(&dub3_add) << endl;

cout << sizeof(&flt1_add) << endl;

cout << sizeof(&chr1_add) << endl;
cout << sizeof(&chr2_add) << endl;







  cout << "-----------------------------------------" << endl << endl;

  // Record your results here:
  //  
  //  Variable  Size   Address   Address-Size
  //   int1     4      0x7ffffd32d6d0       8
  //   int2     4      0x7ffffd32d6d8       8
  //   int3     4      0x7ffffd32d6e0       8
  //   dub1     8      0x7ffffd32d6e8       8
  //   dub2     8      0x7ffffd32d6f0       8
  //   dub3     8      0x7ffffd32d6f8       8
  //   flt1     4      0x7ffffd32d700       8
  //   chr1     1      0x7ffffd32d708       8
  //   chr2     1      0x7ffffd32d710       8


  // How many bytes of storage is allocated for each data type?  How
  // many bytes is allocated for each pointer (address). Notice that
  // the data types are not necessarily the same size, but the
  // pointers are.
  // 
  // Did the address of the char variables print as you expected?  If
  // not, why not?   You can force the printed output to be
  // interpreted as a pointer by coercing it (casting) to void* like
  // this:
  //    cout << (void *) &chr1;
  //
  // Run the program again, using the coercion for the char
  // pointers. Record your data.

  // Write your modified code here:


cout << (void *)&chr1_add << endl;
cout << (void *)&chr2_add << endl;

cout << (void *)sizeof(chr1) << endl;
cout << (void *)sizeof(chr2) << endl;

cout << (void *)sizeof(&chr1_add) << endl;
cout << (void *)sizeof(&chr2_add) << endl;



  cout << "-----------------------------------------" << endl << endl;


  // Record your results here:
  //  
  //  Variable  Size   Address   Address-Size
  //     chr1   0x1   0x7ffff26796c8    0x8
  //     chr2   0x1   0x7ffff26796d0    0x8

  //////////////////////////////////////////////////////////////////	
  // 2. Experiment with pointer variables.
  //////////////////////////////////////////////////////////////////	
  //   A. Declare pointer vaiables intPtr1, intPtr2, intPtr3, dubPtr1,
  //   dubPtr2, dubPtr3, fltPtr1, chrPtr1, and chrPtr2 so that they
  //   can be used to point to the  appropriate variables.  Assign the
  //   address of the appropriate variable to them and print their
  //   values.  (The char pointers will have to be coerced as before
  //   for printing).

  //  Write your code here:
	int *intPtr1 = &int1;
  cout << *intPtr1 << endl;
	int *intPtr2 = &int2;
  cout << *intPtr2 << endl;
  int *intPtr3 = &int3;
  cout << *intPtr3 << endl;

  double *dubPtr1 = &dub1;
  cout << *dubPtr1 << endl;
  double *dubPtr2 = &dub2;
  cout << *dubPtr2 << endl;
  double *dubPtr3 = &dub3;
  cout << *dubPtr3 << endl;

  float *fltPtr1 = &flt1;
  cout << *fltPtr1 << endl;

  char *chrPtr1 = &chr1;
  cout << (void *)chrPtr1 << endl;
  char *chrPtr2 = &chr2;
  cout << (void *)chrPtr2 << endl;
  
  cout << "-----------------------------------------" << endl << endl;

  //  Report your results here:
  // 
  //   Pointer  Printed
  //  Variable   Value
  //   intPtr1 1
  //   intPtr2 2
  //   intPtr3 3
  //   dubPtr1 1
  //   dubPtr2 2
  //   dubPtr3 3
  //   fltPtr1 1
  //   chrPtr1 0x7fffe0bfd9be
  //   chrPtr2 0x7fffe0bfd9bf

  // How do the values of the pointers compare to the values of the
  // addresses you got in the previous experiment?

  // they are completely different.
  //
  //
  //

  //////////////////////////////////////////////////////////////////	
  //  3. Experiments with NULL pointers and with dereferencing
  //////////////////////////////////////////////////////////////////	
  //   A. Assign NULL to fltPtr1, then print the value of fltPtr1.
  //   B. Accessing the storage locations through the relevant
  //   pointers, assign the following values and print them.
  //       int1  12
  //       int2  22
  //       dub1  10.1
  //       dub2  20.2
  //       flt1  30.3

  // Write your code here:
  *fltPtr1 = NULL;
  cout << *fltPtr1 << endl;

  *intPtr1 = 12;
  cout << int1 << endl;
  *intPtr2 = 22;
  cout << *intPtr2 << endl;
  *dubPtr1 = 10.1;
  cout << *dubPtr2 << endl;
  *dubPtr2 = 20.2;
  cout << *dubPtr2 << endl;
  *fltPtr1 = 30.3;
  cout << *fltPtr1 << endl;

  // Your program should have terminated with a run-time error.
  // What error was reported?
  //
  // warning: converting to non-pointer type ‘float’ from NULL
  //
  // Why did it occur?
  //Because we changed a float pointer to point to NULL.
  // 

  //   C.  Fix the problem and repeat.

  // Write your code here:


  cout << "-----------------------------------------" << endl << endl;

  //////////////////////////////////////////////////////////////////	
  //  4. Experiments with pointer arithmetic
  //////////////////////////////////////////////////////////////////	
  //    A.  Print the values of intPtr2, (intPtr2+1) and
  //    (intPtr2-1). Did you get what you expected? 

  // Write your code here:
	*intPtr2 = *intPtr2 + 1;
  cout << *intPtr2 << endl;

  *intPtr2 = *intPtr2 - 1;
  cout << *intPtr2 << endl;

  // Write your explanation here:
  //I did get as expected. Setting the pointer equal to the
  //pointers memory location plus or minus one and printing it did exactly that.
  //
  //
  //
  //

cout << "--------------------" << endl;
  //   B. Print the value of intPtr1.
  //   C. Use the increment operator to increment intPtr1. 
  //   D. Print the value of intPtr1 again.  
  //   E. Print the value of the memory location pointed to by
  //   intPtr1.  Explain what is happening.

  // Write your code here:
cout << *intPtr1 << endl;
++*intPtr1;
cout << *intPtr1 << endl;

cout << &intPtr1 << endl;

  // Write your explanation here.
  //intPtr1 points to the memory location of the value 12,
  //adding one to that making it 13, it now poitns to a different location in memory.
  //
  //

  cout << "-----------------------------------------" << endl << endl;


  //////////////////////////////////////////////////////////////////	
  //  5. Experiments with dynamic allocation
  //////////////////////////////////////////////////////////////////	
  //   A.  Use the new operator to dynamically allocate an integer.
  //   B.  Assign the number 6000 to the new location.
  //   C.  Print the address of this new location.
  //   D.  Print the value stored in the new location.
  //   E.  Comment on the address of the new location compared to the
  //   addresses seen in part 2.

  //  Write your code here:
int * p;
p = new int;
*p = 6000;

cout << &p << endl;
cout << *p << endl;




  
  //  Write your results and comments here:
  //  
  //  new location address =0x7fffd09480c0
  //  contents of new location = 6000

  //  Comment: the addresses are similiar but not exact.
  //  

  //  F.  Use the new operator to allocate an array of size 10 of
  //  doubles.  Fill the array with 10.0,20.0,...100.0 and print the array.

  // Write your code here:
  cout << "---------------------------------------" << endl;
  double *myArray = NULL;
  myArray = new double[10];
  for (int i = 0; i < 10; i++){
    myArray[i] = 10.0 * double(i);
  }

  for (int n = 0; n < 10 ; n++){
    cout << myArray[n] << endl;
  }


  return 0;
}