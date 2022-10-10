/*-
----------------------------------------------------------------------------
This cpp file will create a queue that will be filled by the student type
It will perfrom the functions inside of the miniQueue.h file when called upon
----------------------------------------------------------------------------

Brody Channell & James Montebell
-*/
#include "miniDList.h"
#include <iostream>
using namespace std;

//Constructor for the miniArrQueue that will 
//set the capacity to 1 and the rear/front to -1
template <class DataType>
miniArrQueue<DataType>::miniArrQueue()
{
    capacity = 1;
    arr = new DataType[capacity];
    front = -1;
    rear = -1;
}

//Copy constructor for the miniArrQueue
template <class DataType>
miniArrQueue<DataType>::miniArrQueue(const miniArrQueue &l)
{
    arr = new DataType[l.capacity];

    capacity = l.capacity;
    front = l.front;
    rear = l.rear;
    for (int i = 0; i <= capacity; i++)
    {
        arr[i] = l.arr[i];
    }
}

//Deconstructor for the miniArrQueue
template <class DataType>
miniArrQueue<DataType>::~miniArrQueue()
{
    delete[] arr;
}

//Returns the size of the Queue
template <class DataType>
int miniArrQueue<DataType>::size() const
{
    return (rear - front);
}

//returns wether or not the queue is empty
template <class DataType>
bool miniArrQueue<DataType>::isEmpty() const
{
    if (rear != 0)
    {
        return false;
    }
    else
        return true;
}

//Adds a datatype to the queue
template <class DataType>
void miniArrQueue<DataType>::enqueue(const DataType &e)
{
    rear = rear + 1;
    arr[rear] = e;
}

//Deletes the first element in the queue
template <class DataType>
void miniArrQueue<DataType>::dequeue()
{
    front = front++;
}

//Returns a pointer to the first element in the queue
template <class DataType>
const DataType& miniArrQueue<DataType>::getFront() const
{
    return arr[front];
}

//Prints out the queue
template <class DataType>
void miniArrQueue<DataType>::printQueue() const
{
    for (int i = 0; i <= rear; i++)
    {
        cout << " " << arr[i];
    }
}

//Operator that allows us to use the Student and miniArrQueue inside of the main
template <class DataType>
miniArrQueue<DataType> &miniArrQueue<DataType>::operator=(const miniArrQueue<DataType> &l)
{
    if (this != &l)
    {
        if (this->arr)
            delete[] this->arr;

        this->capacity = l.capacity;
        this->arr = new double[l.capacity];
        for (int i = 0; i < l.rear; i++)
        {
            arr[i] = l.arr[i];
        }
    }
    return *this;
}

//Construsts a queue of miniDLists
template<class DataType>
miniListQueue<DataType>::miniListQueue(){
    miniDList<DataType> list;
}

//Copys the Queue
template<class DataType>
miniListQueue<DataType>::miniListQueue(const miniListQueue &l){
    
}

//Deconstructs the Queue
template<class DataType>
miniListQueue<DataType>::~miniListQueue(){
    
}

//Returns the size of the queue by going from element to element
//inside of the linked list
template<class DataType>
int miniListQueue<DataType>::size() const{
    miniDList<DataType>* temp = list;
    int count = 0;
    while(temp.header->next != temp->trailer){
        count++;
        temp.header->next = temp.header->next->next;
    }
    return count;
}

template<class DataType>
bool miniListQueue<DataType>::isEmpty() const{
    //if header next points to trailer the list is empty
    if(list.header->next != list.trailer){
        return false;
    }
    return true;
}

template<class DataType>
void miniListQueue<DataType>::enqueue(const DataType &e){
    //using minidlist add back function to add e to the back of the queue
    list.addBack(e);
}

template<class DataType>
void miniListQueue<DataType>::dequeue(){
    //using removefront from minidlist to get rid of front element of the queue
    list.removeFront();
}

template<class DataType>
const DataType& miniListQueue<DataType>::getFront() const{
    //using minidlist function front ot return the front element in the queue
return list.front();
}

template<class DataType>
void miniListQueue<DataType>::printQueue() const{
    //using minidlist function display to print the queue
    list.display();
    cout << endl;
}

template<class DataType>
miniListQueue<DataType> &miniListQueue<DataType>::operator=(const miniListQueue<DataType> &l)
{//overloading operator = to be able to set an object = to another
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
