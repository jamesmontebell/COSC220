#include "project3_bstree.h"
#include <iostream>
using namespace std;

template <typename T>
void display(stree<T> *tree){
    stree<T> stree1 = *tree;
    typename stree<T>::iterator curr = stree1.begin();
    while(curr != stree1.end()){
        cout << " " << *curr;
        curr++;
    }
    cout << endl;
}

int main(){

    

    stree<int> *stree1 = new stree<int>;
    stree1->insert(10);
    stree1->insert(25);
    stree1->insert(26);
    stree1->insert(28);
    stree1->insert(29);
    stree1->insert(30);
    stree1->insert(34);
    stree1->insert(35);
    stree1->insert(40);
    stree1->insert(50);
    stree1->insert(65);
    stree1->insert(33);
    display(stree1);
    stree1->erase(26);
    display(stree1);
    stree1->erase(35);
    display(stree1);
    stree1->erase(30);
    display(stree1);
    
    char arr[]= { 'S','J', 'K', 'L', 'X', 'F', 'E', 'Z' };
    stree<char> *arrTree = new stree<char>(arr, arr+8);
    arrTree->insert('H');
    display(arrTree);
    arrTree->erase('F');
    display(arrTree);

    cout << " " << stree1->min() << endl;
    cout << " " << arrTree->min() << endl;




}