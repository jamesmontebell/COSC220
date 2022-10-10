#ifndef BOOK_CLASS
#define BOOK_CLASS

#include <iostream>
#include "string.h"
#include "Student.h"
#include "StudentDList.h"
using namespace std;
    class Book; 
    class Book {
        public:
        //Defining what a book is and its member functions
            string name;
            string date;
            bool renewable; 
            Book* first = NULL;
            Book* next;
                    
            Book();
            void deleteBook(string);
            Book* addBook(string, string, bool);
            void printBook();
    };

#endif