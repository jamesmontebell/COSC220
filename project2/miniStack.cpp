#include "miniDList.h"
//#include "d_except.h"
#include <iostream>
using namespace std;
//d_except.h //Look at Tu's Files used for throwing
/*
---------------------------------------------
creating a stack of either a array or linked list with type datatype template.

-Brody Channell & James Montebell
*/

template <class DataType>
miniArrStack<DataType>::miniArrStack(int cap){
    //initialize an array of type datatype with a given capacity
    capacity = cap;
    arr = new DataType[capacity];
    top = 0;
}

template <class DataType>
miniArrStack<DataType>::miniArrStack(const miniArrStack &l){
    //copy the contents of arr into new stack temp
    DataType* temp = new int[capacity];
    for(int i = 0; i<=capacity; i++){
        temp[i] = arr[i];
    }
}

template <class DataType>
miniArrStack<DataType>::~miniArrStack(){
    //deletes the stack
    delete[] arr;
}

template <class DataType>
int miniArrStack<DataType>::size() const{
    //returns the amount of elements in the stack
    return top+1;
}

template <class DataType>
bool miniArrStack<DataType>::isEmpty() const{
    //returns if the stack is empty of not
    if(top != 0){
        return false;
    }
    return true;
}


template <class DataType>
const DataType& miniArrStack<DataType>::getTop() const //throw(StackEmpty)
{
    //returns a pointer to the top element in the stack
    if(isEmpty() == true){
       // throw;
        cout << "Array is empty. " << endl;
    }
    return arr[top];
}

template <class DataType>
void miniArrStack<DataType>::push(const DataType &l) //throw(StackFull
{
    //adds an index to top and adds l to the top
    if(top == capacity-1){
       cout<<"The array stack is full"<<endl;
    }
    top++;
    arr[top] = l;
}

template <class DataType>
void miniArrStack<DataType>::pop() //throw(StackEmpty)
{
    //decrease top position by 1 to get rid of top element
    if(isEmpty()){
        //throw;
    }
    top--;
}

template <class DataType>
void miniArrStack<DataType>::printStack() const{
    //loops through arr and prints each element
    for(int i = 0; i <= top; i++){
        //const temp = arr[i];
        cout << arr[i] << " ";
        cout << endl;
    }
}


template <class DataType>
miniArrStack<DataType>& miniArrStack<DataType>::operator=(const miniArrStack<DataType> &l){
      if(this != &l){
        if(this->arr)
          delete [] this->arr;

        this->capacity = l.capacity;
        this->arr = new double[l.capacity];
        for(int i=0; i<l.capacity; i++){
          arr[i] = l.arr[i];
        }
      }
      return *this;
}

template <class DataType>
miniListStack<DataType>::miniListStack(){
    //initializes list
    list->header = NULL;
    list->trailer = NULL;
}

template <class DataType>
miniListStack<DataType>::miniListStack(const miniListStack &l){
    //copies contents of l into a new stack temp
    miniListStack<DataType>* temp = l.list->header;
    while(temp != l.list->trailer){
    push(temp->data);
    temp = temp->next;
    }
}

template <class DataType>
miniListStack<DataType>::~miniListStack(){
    
}

template <class DataType>
int miniListStack<DataType>::size() const{
    //returns minidlist function sizd of list
    return list.size();
}

template <class DataType>
bool miniListStack<DataType>::isEmpty() const{
    //checks if header next is equal to trailer and if not list isn't empty
    if(list.header->next != list.trailer){
        return false;
    }
    return true;
}

template <class DataType>
const DataType& miniListStack<DataType>::getTop() const{
    //return minidlist function back on list to return the top element in the stack
    return list->back();
}

template <class DataType>
void miniListStack<DataType>::push(const DataType &l){
    //add l to the top of the stack using minidlist function addback
    list->addBack(l);
}

template <class DataType>
void miniListStack<DataType>::pop(){
    //use minidlist removeback functino to pop top element
    list->removeBack();
}

template <class DataType>
void miniListStack<DataType>::printStack() const{
    //using minidlist function display print the list stack
   list->display();
}

template <class DataType>
miniListStack<DataType>& miniListStack<DataType>::operator=(const miniListStack<DataType> &l){
    //overloading operator = so you can set two different things equal to eachother
if (this != &l){
        cout<<"These List is the same as the Old List" << endl;

        if (!(this->isEmpty())){
            delete this->list;
        }

    }
    while(this->list.header->next!=NULL){
        this->addBack(this->list.header);
        this->list.header=this->list.header->next;
    }
    return *this;
}

