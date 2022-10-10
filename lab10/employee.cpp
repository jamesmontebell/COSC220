#include <iostream>
#include <string>
using namespace std;

Employee::Employee(){

}

Employee ::Employee(string lN, string fN, int s, string jT) : lastName(lN), firstName(fN), baseSalary(s), jobTitle(jT)
{
}

void Employee::displayName(){
    cout << " " << firstName << " " << lastName << endl;
}

void Employee::displayTitle(){
    cout << " " << jobTitle << endl;
}

void Employee::displayBaseSalary(){
    cout << " " << baseSalary << endl;
}

void Employee::displayInfo(){
    displayName();
    displayTitle();
    displayBaseSalary();
}

int Employee::calcSal(){
    cout << "Calculated Salary: " << " " << baseSalary << endl;
    return baseSalary;
}

Manager::Manager(){

}

Manager::Manager(string lN, string fN, int s, string jT, int bP){

}

int Manager::calcSal(){
    int newSal = Employee::calcSal() + bonusPaymant;
    cout << "Calculated Salary: " << " " << newSal << endl;
    return newSal;
}

void Manager::displayInfo(){
    Employee::displayInfo();
    displayBonus();
}

void Manager::displayBonus(){
    cout << " " << bonusPaymant << endl;
}

Executive::Executive(){

}

int Executive::calcSal(){
    int newSal = Manager::calcSal() + stockOption;
    cout << "Calculated Salary: " << " " << newSal << endl;
    return newSal;
}

void Executive::displayInfo(){
    Manager::displayInfo();
    displayStock();
}

void Executive::displayStock(){
    cout << " " << stockOption << endl;
}

Technical::Technical(){

}

int Technical::calcSal(){
    int newSal = Employee::calcSal() + profitSharing;
    cout << "Calculated Salary: " << " " << newSal << endl;
    return newSal;
}

void Technical::displayInfo(){
    Employee::displayInfo();
    displayProfit();
}

void Technical::displayProfit(){
    cout << " " << profitSharing << endl;
}

Software::Software(){

}

int Software::calcSal(){
    int newSal = Technical::calcSal() + overtime;
    cout << "Calculated Salary: " << " " << newSal << endl;
    return newSal;
}

void Software::displayInfo(){
    Technical::displayInfo();
    displayOvertime();
}

void Software::displayOvertime(){
    cout << " " << overtime << endl;
}

Test::Test(){

}

int Test::calcSal(){
    int newSal = Technical::calcSal() + profitSharing;
    cout << "Calculated Salary: " << " " << newSal << endl;
    return newSal;
}

void Test::displayInfo(){
    Technical::displayInfo();
}



