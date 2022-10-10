#ifndef STUDENTDLIST_CLASS
#define STUDENTDLIST_CLASS

#include "Student.h"
#include "string.h"
#include <iostream>
using namespace std;
    class Student; //Letting my StudentDList.h know that the Student object is infact real.
    class StudentDList{
        public:
            Student* head; //points to the head of the double linked list
            StudentDList();
            void updateStudent(Student*);
            void deleteStudent(int);
            void createStudent(string, int, string);
            void numberStudent();
            void printStudent();
            Student* searchStudent(int); //returns a pointer to the student witht the specified id
            

    };

#endif