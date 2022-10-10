#include "Book.h"
#include <iostream>
#include "string.h"

using namespace std;

Book::Book(){//Setting the head book in a list as first
    Book* list = first;
}

Book* Book::addBook(string name, string date, bool renewable){
    //Creating a new book then setting the next pointer equal to the previous book
    //and then setting first book equal to the new book
    Book* book = new Book;
    book->name = name;
    book->date = date;
    book->renewable = renewable;

    book->next = first;
    first = book;

}

void Book::deleteBook(string name){
    //This function iterates through a list of books and deletes one
    //based of the userinput name
    if(first==NULL){
        cout << "List is empty. " << endl;
    }
    else if(first->name == name){
        first->next = first;
    }
    else{
        Book* temp = first;
        while(temp->next->name != name){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
}

void Book::printBook(){
    //Iterates through a list of books and prints each of them
    if (first == NULL){
        cout << "List is empty. " << endl;
    }
    Book* temp = first;
    while(temp->next != NULL){
        cout << "Name: " << temp->name << endl
        << "Date: " << temp->date << endl
        << "Renewable: " << temp->renewable << endl;
        cout << "_____________________" << endl;
        temp = temp->next;
    }
    cout << "Name: " << temp->name << endl
    << "Date: " << temp->date << endl
    << "Renewable: " << temp->renewable << endl;
    cout << "_____________________" << endl;
}