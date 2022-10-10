#include "miniDList.h"
#include "miniStack.h"
#include "miniQueue.h"
#include <iostream>
using namespace std;

/*-
The main file is the driver function for the project
that asks the user for different inputs so that the functions are used

-Brody Channell & James Montebell
-*/

int menu()
{
    int choice = 0;
    while (choice == 0)
    { // menu for choosing what to do with your stack or queue
        cout << "---------------------------" << endl;
        cout << "1. Create an element" << endl;
        cout << "2. Remove element" << endl;
        cout << "3. Print" << endl;
        cout << "4. Print top element" << endl;
        cout << "5. to exit" << endl;
        cout << "---------------------------" << endl;
        cin >> choice;
        //Checks for whether the input is valid and cycles until there is a valid input
        if (choice > 5 || choice < 1)
        {
            cout << "You must select one of the menu items" << endl;
            choice = 0;
        }
    }
    return choice;
}

int main()
{
    int controller;
    //asking for input to choose from staack or queue then creating a array or linked list
    //for the desired type
    cout << "Would you like to make a stack or a queue (1 for stack 2 for queue)" << endl;
    cin >> controller;
    //Checks whether the input given is valid or not
    if (controller != 1 && controller != 2)
    {
        cout << "Pls input 1 or 2";
        cin >> controller;
    }
    //Used if the input says to do a stack
    else if (controller == 1)
    {
        int input;
        //Asks whether to create an array or a linked list
        cout << "1. Create an array" << endl;
        cout << "2. Create a Linked Lits" << endl;
        cin>>input;
        if (input != 1 && input != 2)
        {
            cout << "Pls input 1 or 2";
            cin >> input;
        }
        else if (input == 1)
        {//creating a arrstack object
            miniArrStack<Student> temp;
            int choice;
            while (choice != 5)
            {
                choice = menu();
                if (choice == 1)
                {
                    //Brings in the values for the student
                    Student newStudent = Student();
                    cout<<"What is the Students name ";
                    cin >> newStudent.name;
                    cout<<" What is the Students id ";
                    cin >> newStudent.id;
                    cout<<" What is the Students year ";
                    cin >> newStudent.year;
                    temp.push(newStudent);
                    // create an element
                    
                }
                else if (choice == 2)
                {
                    //using pop function to delete top element
                    temp.pop();
                }
                else if (choice == 3)
                {
                    //Uses the print function to print out the Stack Array
                    temp.printStack();
                }
                else if (choice == 4)
                {
                    //Prints the top element of the array
        
                    Student f = temp.getTop();
                    cout<<"Student Information: "<<endl;
                    cout<<"-----------------------"<<endl;
                    cout << "Name: " << f.name << endl
                    << "ID: " << f.id << endl
                     << "Year: " << f.year << endl;
                    cout << "_____________________" << endl;
                    // print elements 
                }
                else if (choice == 5)
                {
                    //quiting the program and deconstructing the stack
                    temp.~miniArrStack();
                }
            }   
        }
        if (input == 2)
            {
                miniListStack<Student> temp;
            // creating a list stack object
            int choice;
            while (choice != 5)
            {
                choice = menu();
                if (choice == 1)
                {// creating a new student node
                    Student newStudent = Student();
                    cout<<"What is the Students name ";
                    cin >> newStudent.name;
                    cout<<"What is the Students id ";
                    cin >> newStudent.id;
                    cout<<"What is the Students year ";
                    cin >> newStudent.year;
                    temp.push(newStudent);
                    
                }
                else if (choice == 2)
                {
                    //deleting top student node
                    temp.pop();
                }
                else if (choice == 3)
                {
                    //printing the list of students
                    temp.printStack();
                }
                else if (choice == 4)
                {
                    //get top element and print it
                    Student f = temp.getTop();
                    cout<<"Student Information: "<<endl;
                    cout<<"-----------------------"<<endl;
                    cout << "Name: " << f.id << endl
                    << "ID: " << f.id << endl
                     << "Year: " << f.year << endl;
                    cout << "_____________________" << endl;
                    // print elements 
                }
                else if (choice == 5)
                {
                    //exit program and deconstruct stack
                    temp.~miniListStack();
                }
            }
            }

       

    }

    else if (controller == 2)
    {
        //create either array or list queue
        int input;
        cout << "1. Create an array" << endl;
        cout << "2. Create a Linked List" << endl;
        cin >> input;

        if (input != 1 && input != 2)
        {
            cout << "Pls input 1 or 2";
            cin >> input;
        }
        else if (input == 1)
        {   
            miniArrQueue<Student> temp;
            // Create an queue array object
            int choice;
            while (choice != 5)
            {
                choice = menu();
                if (choice == 1)
                {
                    //Gets the info to create a new element inside of the Arrqueue 
                    Student newStudent = Student();
                    cout<<"What is the Students name ";
                    cin >> newStudent.name;
                    cout<<" What is the Students id ";
                    cin >> newStudent.id;
                    cout<<" What is the Students year ";
                    cin >> newStudent.year;
                    temp.enqueue(newStudent);
                    // create an element
                    
                }
                else if (choice == 2)
                {
                    //Removes the element in the front of the queue
                    temp.dequeue();
                }
                else if (choice == 3)
                {
                    //Uses the print queue function to print out the whole queue
                    temp.printQueue();
                }
                else if (choice == 4)
                {
                    //Prints the first element in the queue
                    Student f = temp.getFront();
                    cout<<"Student Information: "<<endl;
                    cout<<"-----------------------"<<endl;
                    cout << "Name: " << f.id << endl
                    << "ID: " << f.id << endl
                     << "Year: " << f.year << endl;
                    cout << "_____________________" << endl;
                    // print elements 
                }
                else if (choice == 5)
                {
                    temp.~miniArrQueue();
                }
            }
        }

            if (input == 2)
            {
                miniListQueue<Student> temp;
                // Create a queue List
                int choice;
                while (choice != 5)
                {
                    choice = menu();
                    if (choice == 1)
                    {
                        //Gets the info of student to make a new element
                    Student newStudent = Student();
                    cout<<" What is the Students name ";
                    cin >> newStudent.name;
                    cout<<" What is the Students id ";
                    cin >> newStudent.id;
                    cout<<" What is the Students year ";
                    cin >> newStudent.year;
                    temp.enqueue(newStudent);
                        // create an element
                    }
                    else if (choice == 2)
                    {
                        temp.dequeue();
                        // remove the element at front
                    }
                    else if (choice == 3)
                    {
                        temp.printQueue();
                        // print the queue
                    }
                    else if (choice == 4)
                    {
                        Student f = temp.getFront();
                        cout<<"Student Information: "<<endl;
                        cout<<"-----------------------"<<endl;
                        cout << "Name: " << f.id << endl
                        << "ID: " << f.id << endl
                        << "Year: " << f.year << endl;
                        cout << "_____________________" << endl;
                        // print elements
                    }
                    else if (choice == 5)
                    {
                        temp.~miniListQueue();
                        // quit
                    }
                }
            }
        }
    }