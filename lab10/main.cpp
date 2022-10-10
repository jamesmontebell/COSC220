#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

int main(){
    Executive emp0("Doe", "John", 100000, "VP", 1000000, 2000); 
    Software emp1("billy", "bob", 500000, "janitor", 5000000, 5000);
    Test emp2("sammy", "sam", 600000, "teacher", 6000000);

    Employee arr[3];
    arr[0] = emp0;
    arr[1] = emp1;
    arr[2] = emp2;

    arr[0].displayInfo();
    arr[1].displayInfo();
    arr[2].displayInfo();

    cout << "---------------------" << endl;

    emp0.displayInfo();
    emp1.displayInfo();
    emp2.displayInfo();

    cout << "---------------------" << endl;

    Employee *empptr;
    empptr = new Employee("justin", "just", 700000, "tutor"); 
    empptr->displayInfo(); 

    empptr = new Executive("mike", "mikey", 800000, "principle", 8000000, 8000); 
    empptr->displayInfo(); 

    empptr = new Software("bradley", "brad", 900000, "mentor", 9000000, 9000); 
    empptr->displayInfo();

    return 0;
}