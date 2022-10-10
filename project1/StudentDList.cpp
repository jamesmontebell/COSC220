#include "StudentDList.h"
#include <iostream>
#include "string.h"
#include "Student.h"


using namespace std;

StudentDList::StudentDList(){ //constructing list setting head to null
    Student* list = head;
    head = NULL;
}

void StudentDList::createStudent(string name, int id, string year){
    Student* newStudent = new Student;
    //creating a student based on the given parameters,
    //and inserting them at the end of the list if list isn't empty
    newStudent->name = name;
    newStudent->id = id;
    newStudent->year = year;

    if(head==NULL){
        newStudent->next = NULL;
        newStudent->prev = NULL;
        head = newStudent;
    }
    else if(head != NULL){
        Student* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newStudent->next = temp->next;
        temp->next = newStudent;
        newStudent->prev = temp;
    }
}



void StudentDList::deleteStudent(int id){
    //searching a student by its id and iterating through the list
    //if there are other students and finding the specific student 
    //then setting the prev and next points to point around the specific student 
    //tha you want to delete
    if(head==NULL){
        cout << "List is empty. " << endl;
    }
    else if(head->id == id){
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
    }
    else{
        Student* temp = head;
        while(temp->next->id != id){
            temp = temp->next;
        }
        temp->next->next->prev = temp;
        temp->next = temp->next->next;
    }
}

void StudentDList::updateStudent(Student* student){
    //finding specific student by id and changing the needed
    //data in that student
    cout << "Enter Student new name. " << endl;
    cin >> student->name;
    cout << "Enter Student new year. " << endl;
    cin >> student->year;
    cout << "Enter Student new ID. " << endl;
    cin >> student->id;
}

void StudentDList::numberStudent(){
    //counting the total number of students in a double linked list
    //and printing that result
    int count = 0;
    int i;
    Student* temp = head;
    if (temp == NULL){
        cout << "List is empty. " << endl;
    }
    while(temp->next != NULL){
        temp = temp->next;
        count = count + 1;  
    }
    count = count + 1;
    cout << "_____________________" << endl;
    cout << "The number of Students is " << count << endl;
}

void StudentDList::printStudent(){
    //prints the whole list of students with their data in order
    if (head == NULL){
        cout << "List is empty. " << endl;
    }
    Student* temp = head;
    while(temp->next != NULL){
        cout << "Name: " << temp->name << endl
        << "ID: " << temp->id << endl
        << "Year: " << temp->year << endl;
        cout << "_____________________" << endl;
        temp = temp->next;
    }
    cout << "Name: " << temp->name << endl
    << "ID: " << temp->id << endl
    << "Year: " << temp->year << endl;
    cout << "_____________________" << endl;
}

Student *StudentDList::searchStudent(int id){
    //Search function made to iterate through the double linked list
    //and finding a student with the given ID then return that student
    //as a pointer
    if (head == NULL){
        cout << "List is empty. " << endl;
    }
    else if (head->id == id){
        return head;
    }
    else{
        Student* temp = head;
        while(temp->next != NULL){
            if(temp->next->id == id){
            return temp->next;
            }
            temp = temp->next;
        }
    }
    
}








