#include "Student.h"
#include "StudentDList.h"
#include <iostream>
#include "string.h"
#include "Book.h"


using namespace std;
int main(){
    //creating instances of a double linked list of students
    //and a single linked list of books
    StudentDList list;
    Book books;
    //defining variables used in controlling the program and
    //used in parameters to methods
    int controller = 0;
    int id;
    string name;
    string year;
    string yesno;
    string title;
    string date;
    bool renewable;
    while(controller != 9){
        cout << "1. Create a Student " << endl;
        cout << "2. Delete a Student " << endl;
        cout << "3. Update a Student " << endl;
        cout << "4. Print Students " << endl;
        cout << "5. Print Number of Students " << endl;
        cout << "6. Add a book to a Student " << endl;
        cout << "7. Print Student's books. " << endl;
        cout << "8. Delete a Student's book. " << endl;
        cout << "9. Exit program " << endl;
        cin >> controller;

        if(controller == 1){
            cout << "Enter ID: " <<endl;
            cin >> id;
            cout << "_____________________" << endl;
            cout << "Enter Name: " <<endl;
            cin >> name;
            cout << "_____________________" << endl;
            cout << "Enter Year: " <<endl;
            cin >> year;
            cout << "_____________________" << endl;
            list.createStudent(name, id, year); //creates student based on given input
       }
       if(controller == 2){
           cout << "Enter ID: " <<endl;
           cin >> id;
           cout << "_____________________" << endl;
           list.deleteStudent(id); //deletes student based on given id input
           
       }
       if(controller == 3){
           cout << "Enter ID: " <<endl;
           cin >> id;
           Student* student;
           student = list.searchStudent(id);
           list.updateStudent(student); //updates student based on given id input
       }

       if (controller == 4){
           list.printStudent(); //prints list of students and information
           cout << "_____________________" << endl;
       }
       if (controller == 5){
           list.numberStudent(); //prints the total number of students in the list
           cout << "_____________________" << endl;
       }
       if(controller == 6){
           cout << "What is the Student's ID? " << endl;
           cin >> id;
           Student* student; //defining an instance of a single student
           student = list.searchStudent(id);//setting the student equal to the student found using id
           cout << "What is the book's Title? " << endl;
           cin >> title;
           cout << "What is the book's due date? " << endl;
           cin >> date;
           cout << "Is this book renewable? If yes type 1, if no type 0" << endl;
           cin >> renewable;
           student->book = books.addBook(title, date, renewable);//adding a book the student based on user input
       }
       if(controller == 7){
           cout << "What is the Student's ID? " << endl;
           cin >> id;
           Student* student;//defining an instance of a single student
           student = list.searchStudent(id);//setting the student equal to the student found using and id
           Book* book = student->book;//setting an instance of a list of books equal to the list of books in student
            book->printBook();//printing the list of books in the list book
       }
       if(controller == 8){
           cout << "What is the Student's ID? " << endl;
           cin >> id;
           Student* student;
           student = list.searchStudent(id);
           Book* book = student->book;
           cout << "What is the name of the book? " << endl;
           cin >> name;
           book->deleteBook(name);//deleting a book within a student based on user inputed name
       }
       if(controller == 9){
           return 0;//exits program
       }
    }




}