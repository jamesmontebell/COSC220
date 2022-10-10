/*-
----------------------------------------------
The miniDlist will create a doubly linked list of the Datatype tmeplate
in this case we create a doubly linked list of students that performs all the functions
listed in the .h file
----------------------------------------------

-Brody Channell & James Montebell
-*/

#include "../project1/StudentDList.h"
#include <iostream>
using namespace std;



template <class DataType>
miniDList<DataType>::miniDList(const miniDList &l)
{
    DNode *curr = l.header->next, *end = l.trailer; // create an empty list
    header = new DNode;
    while (curr != end) //while curr doesn't = end add curr next
    {
        addBack(header, curr->data);
        curr = curr->next;
    }
}

template <class DataType>
miniDList<DataType>::~miniDList()
{
    // erase the front of the list until it is empty
    while (header->next != header)
        remove(header->next);
    // delete the header node
    delete header;
}

template <class DataType>
const DataType& miniDList<DataType>::front() const {
    //return front element
    return (header->next->data);
}

template <class DataType>
const DataType& miniDList<DataType>::back() const{
    //return rear element
    return (trailer->prev->data);
}

template <class DataType>
void miniDList<DataType>::removeFront(){
    //Removes the front of the list
    remove(header->next);
}

template <class DataType>
void miniDList<DataType>::removeBack(){
    //removes rear element
    remove(trailer->prev);
}

template <class DataType>
void miniDList<DataType>::addFront(const DataType &e){
    e->prev = header;
    e->next = header->next;
    header->next->prev = e;
    header->next = e;
}

template <class DataType>
void miniDList<DataType>::addBack(const DataType &e){
    //add to the back of the list
    add(trailer, e);
}

template <class DataType>
void miniDList<DataType>::add(DNode *v, const DataType &e){
    //creating a new node, add data &e to it and place before v
    DNode* temp = new DNode;
    temp->data = e;
    temp->prev= v->prev;
    temp->next= v;
    v->prev = temp;
}

template <class DataType>
void miniDList<DataType>::remove(DNode *v){
    //Used to remove an element from the list
  v->prev->next = v->next;
  v->next->prev = v->prev;
  delete v;
}

template <class DataType>
int miniDList<DataType>::size() const{
    //Returns the size of the array
    DNode* temp = new DNode;
    temp = header;
    int i = 0;
    while(temp->next!=trailer){
        temp = temp->next;
        i++;
    }
    return i;
}

template <class DataType>
bool miniDList<DataType>::contains(const DataType &e){
    //Loops through the lsit to find a target student
    DNode* temp = new DNode;
    temp = header;
    while(temp->next!=trailer){
        if(temp->next->data == e->data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

template <class DataType>
void miniDList<DataType>::display() const{
    //loops through list and prints each node
    DNode* curr = nullptr;
    curr = header->next;
    if (header->next == trailer){
        cout << "list is empty " << endl;
    }
    while ( curr != trailer){
        cout << " " << curr->data << endl;
        curr = curr->next;
    }
}

template <class DataType>
miniDList<DataType>& miniDList<DataType>::operator=(const miniDList<DataType> &l){
    //Operator constructor that is used to allow the use of the Student class
    DNode *curr = l.header->next, *end =l.trailer->prev;
    if(this == &l)
    {
        return *this;
    }
    while(header->next != trailer)
    remove(header->next);
    while(curr != end)
    {
        add(header, curr->data);
        curr = curr->next;
    }
    size() = l.size();
    return *this;
 };

