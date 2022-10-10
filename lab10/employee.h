#include <iostream>
using namespace std;
#include <string>

class Employee{
    private:
        string lastName;
        string firstName;
        int baseSalary;
        string jobTitle;
    public:
        Employee(){
            firstName = " ";
            lastName = " ";
            baseSalary = 0;
            jobTitle = " ";
        }
        Employee(string lN, string fN, int s, string jT) 
            : lastName(lN), firstName(fN), baseSalary(s), jobTitle(jT){
        }
        void displayName(){
            cout << " " << firstName << " " << lastName << endl;
        }
        void displayTitle(){
            cout << " " << jobTitle << endl;
        }
        void displayBaseSalary(){
            cout << " " << baseSalary << endl;
        }
        virtual void displayInfo(){
            Employee::displayName();
            Employee::displayTitle();
            Employee::displayBaseSalary();
        }
        virtual int calcSal(){
            return baseSalary;
        }
};

class Manager: public Employee{
    private:
        int bonusPaymant;
    public:
        Manager(){}
        Manager(string lN, string fN, int s, string jT, int bP) 
            : Employee(lN, fN, s, jT), bonusPaymant(bP) {}
        virtual int calcSal(){
            return Employee::calcSal() + bonusPaymant;
        }
        virtual void displayInfo(){
            Employee::displayInfo();
            Manager::displayBonus();
        }
        void displayBonus(){
            cout << " " << bonusPaymant << endl;
        }
};

class Executive: public Manager{
    private:
        int stockOption;
    public: 
        Executive(){}
        Executive(string lN, string fN, int s, string jT, int bP, int sO)
            : Manager(lN, fN, s, jT, bP), stockOption(sO){}

        virtual int calcSal(){
            return Manager::calcSal() + stockOption;
        }
        void displayInfo(){
            Manager::displayInfo();
            Executive::displayStock();
        }
        void displayStock(){
            cout << " " << stockOption << endl;
        }
};

class Technical: public Employee{
    private:
        int profitSharing;
    public: 
        Technical(){}
        Technical(string lN, string fN, int s, string jT, int pS)
            : Employee(lN, fN, s, jT), profitSharing(pS){}
        virtual int calcSal(){
            return Employee::calcSal() + profitSharing;
        }
        virtual void displayInfo(){
            Employee::displayInfo();
            Technical::displayProfit();
        }
        void displayProfit(){
            cout << " " << profitSharing << endl;
        }
};

class Software: public Technical{
    private:
        int overtime;
    public: 
        Software(){}
        Software(string lN, string fN, int s, string jT, int pS, int oT)
            : Technical(lN, fN, s, jT, pS), overtime(oT){}
        virtual int calcSal(){
            return Technical::calcSal() + overtime;
        }
        virtual void displayInfo(){
            Technical::displayInfo();
            Software::displayOvertime();
        }
        void displayOvertime(){
            cout << " " << overtime << endl;
        }
};

class Test: public Employee{
    private:
        int profitSharing;
    public: 
        Test(){}
        Test(string lN, string fN, int s, string jT, int pS)
            : Employee::Employee(lN, fN, s, jT), profitSharing(pS){}
        virtual int calcSal(){
            return Employee::calcSal() + profitSharing;
        }
        virtual void displayInfo(){
            Employee::displayInfo();
            displayProfit();
        }

        void displayProfit(){
            cout << " " << profitSharing << endl;
        }
}; 

