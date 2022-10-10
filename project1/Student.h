#ifndef STUDENT_CLASS
#define STUDENT_CLASS

#include <iostream>
#include "string.h"
#include "Book.h"
using namespace std;
    class Book; //Showing Student.h that the Book class is in fact real.
                //and no g++ I meant "Book" not "bool."
    class Student {
        public:
            string name;
            int id;
            string year;
            Student * next;
            Student * prev;
            Book* book;
            //All the data of the "Student" object,
            //including a pointer to a list of books.
            friend ostream& operator<<(ostream& o, const Student& s){
                cout << "Name: " <<s.name;
                cout << "Id: " <<s.id;
                cout << "Year: " <<s.year;
                return o;
            }
    };

#endif