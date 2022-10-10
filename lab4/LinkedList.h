#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList{
    Node* head;
    private:
        Node* createNode(){
            Node* newNode = new Node;
            return newNode;
        }
        Node* searchLocation(int id){
            if(head == NULL){
                cout << "List is empty "<< endl;
                return NULL;
            }
            if(head->idNumber == id){
                return head;
            }
            Node* temp = head;
            while(temp != NULL){
                if(temp->next->idNumber == id){
                    return temp;
                }
                temp = temp->next;
            }
        }
    public:
        LinkedList();
        void insertNode();
        void deleteNode(int);
        void printList();   
        void searchNode();
};

