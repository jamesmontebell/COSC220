#include "miniDList.h"
template <class DataType>
class miniArrStack
{
private:
    enum {DEF_CAPACITY =100};  //default stack capacity
    DataType* arr; // The array of items
    int capacity; // The size of the current array
    int top; // The location of the top element
public:
    miniArrStack(int cap = DEF_CAPACITY);                              // Constructor for ArrStack
    //miniArrStack();                                                    // Constructor for ListStack
    miniArrStack(const miniArrStack &l);                                // Copy contstructor
    ~miniArrStack();                                                   // Destructor
    int size() const;                                                  // get the number of elements in the stack
    bool isEmpty() const;                                              // Check if the stack is empty
    const DataType &getTop() const; //throw(StackEmpty);                     // get the top emement without popping it
    void push(const DataType &l); //throw(StackFull);                      // Pushes  an  object  onto  the  stack
    void pop(); //throw(StackEmpty);                                      // Pop an object off the stack
    void printStack() const;                                           // Prints the stack from the top, down
    miniArrStack<DataType> &operator=(const miniArrStack<DataType> &l); //  Assignment  operator
};

template <class DataType>
class miniListStack
{
private:
    miniDList<DataType>* list;
public:                        
    miniListStack();                                                    // Constructor for ListStack
    miniListStack(const miniListStack &l);                                // Copy contstructor
    ~miniListStack();                                                   // Destructor
    int size() const;                                                  // get the number of elements in the stack
    bool isEmpty() const;                                              // Check if the stack is empty
    const DataType &getTop() const; //throw(StackEmpty);                     // get the top emement without popping it
    void push(const DataType &l); //throw(StackFull);                      // Pushes  an  object  onto  the  stack
    void pop(); //throw(StackEmpty);                                      // Pop an object off the stack
    void printStack() const;                                           // Prints the stack from the top, down
    miniListStack<DataType> &operator=(const miniListStack<DataType> &l); //  Assignment  operator
};
#include "miniStack.cpp"