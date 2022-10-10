#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(){
    LinkedList list;
    int controller = 0;
    int id;
    while(controller != 5){
        cout << "1. insert a node " << endl;
        cout << "2. delete a node " << endl;
        cout << "3. print a list " << endl;
        cout << "4. search a node " << endl;
        cout << "5. quit program " << endl;
        cin >> controller;

        if(controller == 1){
           list.insertNode();
       }
       if(controller == 2){
           cout << "Enter ID: " <<endl;
           cin >> id;
           list.deleteNode(id);
       }
       if(controller == 3){
           list.printList();
       }

       if (controller == 4){
           list.searchNode();
       }
       if (controller == 5){
           return 0;
       }
    }




}