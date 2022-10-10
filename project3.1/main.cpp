#include "proj3edit.h"
#include <iostream>

int main(){
    stree<int> stree1;
    stree1.insert(10);
    stree1.insert(25);
    stree1.insert(26);
    stree1.insert(28);
    stree1.insert(29);
    stree1.insert(30);
    stree1.insert(34);
    stree1.insert(35);
    stree1.insert(40);
    stree1.insert(50);
    stree1.insert(65);
    stree1.displayTree(100);
    stree1.insert(33);
    stree1.displayTree(100);
    stree1.erase(26);
    stree1.displayTree(100);
    stree1.erase(35);
    stree1.displayTree(100);
    stree1.erase(30);
    stree1.displayTree(100);

    char arr[]= { 'S','J', 'K', 'L', 'X', 'F', 'E', 'Z' };
    stree<char> charTree(&arr[0], &arr[-1]);
    charTree.displayTree(100);
    charTree.insert('H');
    charTree.displayTree(100);
    charTree.erase('F');
    charTree.displayTree(100);

}