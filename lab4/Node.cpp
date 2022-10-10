#include "Node.h"
#include <iostream>
 
using namespace std;

void Node::printNode(){
    cout << "Firstname: " << this->firstName << endl
    << "Lastmame: " << this->lastName << endl
    << "ID: " << this->idNumber << endl;
}