#include "d_rect.h"
#include "ex5_36Aux.h"
#include <iostream>

using namespace std;

rectangle ** getRoomArray(){
    int rooms;
    cout << "How many rooms? " << endl;
    cin >> rooms;
    rooms = rooms + 1;

    rectangle **ptr = new rectangle*[rooms]; 
    ptr[rooms] = NULL;
    return ptr;
}

void getRoomData(rectangle ** rooms) {
    int i = 0;
    double width=0;
    double length=0;
    while(rooms[i] != NULL){
        cout << "What is the width of the rooms?" << endl;
        cin >> width;
        cout << "What is the length of the rooms?" << endl;
        cin >> length;
        rooms[i]->setSides(length, width);
        i++;
    }
}

double getTotalArea(rectangle ** rooms){
    double area = 0;
    int i = 0;
    while(rooms[i] != NULL){
        area += rooms[i]->area();
        i++;
    }
    return area;
}
rectangle largestPerimeter(rectangle ** rooms){
    rectangle Large(0,0);
    int i;
    while (rooms[i]!=NULL)
    {
        if (2*(rooms[i]->getLength())+(2*(rooms[i]->getWidth()))
        >(2*(Large.getLength())+(2*(Large.getWidth()))))
        {
            Large.setSides(rooms[i]->getLength(),rooms[i]->getWidth());
        }
        i++;
    }
    return Large;
    
}

void reportOnLargest(rectangle & bigroom){
    cout << "The largest perimeter is " << (2*(bigroom.getLength())+(2*(bigroom.getWidth())))<<endl;
    cout << "It's length is " << bigroom.getLength()<<endl;
    cout << "It's width is " << bigroom.getWidth()<<endl;
}

void reportOnTotalArea(rectangle ** rooms){
    int i;
    while (rooms[i] != NULL)
    {
        getTotalArea(rooms[i]);
        i++;
    }
    
}