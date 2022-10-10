#include "LinkedList.h"
#include <iostream>
#include "Node.h"


using namespace std;

LinkedList::LinkedList(){
    head = NULL;
}

void LinkedList::insertNode(){
    Node* newNode = createNode();
    cout << "What is the your Firstname? " << endl;
    cin >> newNode->firstName;
    cout << "What is your Lastname? " << endl;
    cin >> newNode->lastName;
    cout << "What is your ID number? " << endl;
    cin >> newNode->idNumber;
    newNode->next= NULL;
    if (head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::deleteNode(int id){
    if(head == NULL){
        cout << "List is empty" << endl;
    }
    if(head->idNumber == id){
        head = head->next;
        delete head;
    }
    if(head->next != NULL)5{
        Node* temp = head;
        while(temp->next->idNumber != id){
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
}

void LinkedList::printList(){
    if(head == NULL){
        cout << "List is empty. " << endl;
        return;
    }
    if(head->next == NULL){
        head->printNode();
    }
    Node* temp = head;
    if(head->next != NULL){
        while (temp->next != NULL){
            temp->printNode();
            temp = temp->next;
        }
    }
}

void LinkedList::searchNode(){
    int id;
    cout << "What Student are you looking for? Enter ID: " << endl;
    cin >> id;
    if(head == NULL){
        cout << "Data is not on the list. " << endl;
        return;
    }
    if(head->idNumber == id){
        head->printNode();
    }
    if(searchLocation(id) != NULL){
        cout << searchLocation(id)->firstName << endl
        << searchLocation(id)->lastName <<endl  <<
        searchLocation(id)->idNumber << endl;
    }
    if(head->next != NULL){
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->next->idNumber == id){
                temp = temp->next;
                temp->printNode();
            }
            temp = temp->next;
        }
    }
};