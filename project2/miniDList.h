#ifndef MINIDLIST_H
#define MINIDLIST_H

template <class DataType>
class miniDList
{
private:
    struct DNode
    {                  // doubly linked list node
        DataType data; //  data stored in node
        DNode *next;   //  next node in list
        DNode *prev;   //  previous node  in list
    };

    DNode *header; // list sentinels
    DNode *trailer;

public:
    miniDList()
    { // constructor
        header = new DNode;
        trailer = new DNode; // have them point to each other
        header->next = trailer;
        trailer->prev = header;
    }
    miniDList(const miniDList &l);    // Copy constructor
    ~miniDList();                     // Destructor
    const DataType &front() const;    // get front element
    const DataType &back() const;     // get back element
    void removeFront();               // Remove & return the front
    void removeBack();                // Remove & return the back
    void addFront(const DataType &e); // Add to the front
    void addBack(const DataType &e);  // Add to the back
    int size() const;                 // Returns the number of elements in list
    bool contains(const DataType &e); // Tests for membership
    void display() const;             // Prints the elements of list
    miniDList<DataType> &operator=(const miniDList<DataType> &l);
    // Overloaded assignment

protected:                                 // local utilities
    void add(DNode *v, const DataType &e); // insert new node  before  v
    void remove(DNode *v);                 // remove node v
};
 //for template instantiation
#include "miniDList.cpp"
#endif