#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string lName;
    string fName;
    double salary;
    string jTitle;

public:
    Employee();
    Employee(string lN, string fN, double s, string jT);
    void setLN(string ln);
    void setFN(string fn);
    void setSal(double s);
    void setTit(string jt);
    void printName();
    void printSalary();
    void printTitle();
    void printInfo();
};
Employee ::Employee() {}

Employee ::Employee(string lN, string fN, double s, string jT) : lName(lN), fName(fN), salary(s), jTitle(jT)
{
}

void Employee ::setLN(string ln)
{
    lName = ln;
}

void Employee ::setFN(string fn)
{
    fName = fn;
}

void Employee ::setSal(double s)
{
    salary = s;
}

void Employee ::setTit(string jt)
{
    jTitle = jt;
}

void Employee ::printName()
{
    cout << "Name: " << fName << " " << lName << endl;
}

void Employee ::printSalary()
{
    cout << "Salary: " << salary << endl;
}

void Employee ::printTitle()
{
    cout << "Job Title: " << jTitle << endl;
}

void Employee ::printInfo()
{
    printName();
    printSalary();
    printTitle();
}

class Manager : public Employee
{
private:
    double bonusPay;

public:
    Manager();
    Manager(string lN, string fN, double s, string jT, double bP);
    void setbP(double bP);
    void getbP();
    double calcSal();
    void printInfo();
};

Manager ::Manager(string lN, string fN, double s, string jT, double bP)
{
    setLN(lN);
    setFN(fN);
    setSal(s);
    setTit(jT);
    bonusPay = bP;
}

void Manager ::setbP(double bP)
{
    bonusPay = bP;
}

void Manager ::getbP()
{
    cout << "Bonus pay: " << bonusPay << endl;
}

double Manager ::calcSal()
{
    double sal = salary + bonusPay;
    cout << "Manager salary for " << fName << " " << lName << ": " << sal << endl;
    return sal;
}

void Manager ::printInfo()
{
    printName();
    printSalary();
    printTitle();
    getbP();
}

class Executive : public Manager
{
private:
    double stockOp;

public:
    Executive(string lN, string fN, double s, string jT, double bP, double sO);
    void getSO();
    void calcSalE();
    void printInfo();
};

Executive ::Executive(string lN, string fN, double s, string jT, double bP, double sO)
{
    setLN(lN);
    setFN(fN);
    setSal(s);
    setTit(jT);
    setbP(bP);
    stockOp = sO;
}

void Executive::getSO()
{
    cout << "Stock Option: " << stockOp << endl;
}

void Executive ::calcSalE()
{
    double sal = calcSal() + stockOp;
    cout << "Executive salary for " << fName << " " << lName << ": " << sal << endl;
}

void Executive ::printInfo()
{
    printName();
    printSalary();
    printTitle();
    getbP();
    getSO();
}

class TechStaff : public Employee
{
private:
    double pShare;

public:
    TechStaff();
    TechStaff(string lN, string fN, double s, string jT, double pS);
    void setPS(double pS);
    void getPS();
    double calcSalT();
    void printInfo();
};

TechStaff::TechStaff(string lN, string fN, double s, string jT, double pS)
{
    setLN(lN);
    setFN(fN);
    setSal(s);
    setTit(jT);
    pShare = pS;
}

void TechStaff ::setPS(double pS)
{
    pShare = pS;
}

void TechStaff ::getPS()
{
    cout << "Profit sharing: " << pShare << endl;
}

double TechStaff ::calcSalT()
{
    double sal = salary + pShare;
    cout << "Technical Staff salary for " << fName << " " << lName << ": " << sal << endl;
    return sal;
}

void TechStaff ::printInfo()
{
    printName();
    printSalary();
    printTitle();
    getPS();
}

class SoftEngin : public TechStaff
{
private:
    double overTP;

public:
    SoftEngin(string lN, string fN, double s, string jT, double pS, double oP);
    void getOP();
    void calcSalS();
    void printInfo();
};

SoftEngin ::SoftEngin(string lN, string fN, double s, string jT, double pS, double oP)
{
    setLN(lN);
    setFN(fN);
    setSal(s);
    setTit(jT);
    setPS(pS);
    overTP = oP;
}

void SoftEngin::getOP()
{
    cout << "Overtime Pay: " << overTP << endl;
}

void SoftEngin ::calcSalS()
{
    double sal = calcSalT() + overTP;
    cout << "Software Engineer salary for " << fName << " " << lName << ": " << sal << endl;
}

void SoftEngin ::printInfo()
{
    printName();
    printSalary();
    printTitle();
    getPS();
    getOP();
}

class TestEngin : public TechStaff
{
private:
    double overTP;

public:
    TestEngin(string lN, string fN, double s, string jT, double pS);
    void calcSalS();
    void printInfoS();
};

TestEngin ::TestEngin(string lN, string fN, double s, string jT, double pS)
{
    setLN(lN);
    setFN(fN);
    setSal(s);
    setTit(jT);
    setPS(pS);
}

void TestEngin ::calcSalS()
{
    double sal = calcSalT() + overTP;
    cout << "Test Engineer salary for " << fName << " " << lName << ": " << sal << endl;
}

void TestEngin ::printInfoS()
{
    printInfo();
    getPS();
}

int main()
{

    Employee empArr[3];
    Executive emp0("John", "Doe", 100000, "VP", 1000000, 200);
    SoftEngin emp1("Laytyn", "Addison", 300000, "SE", 10000, 10);
    TestEngin emp2("Jameis", "Winston", 150000, "TE", 50000);
    empArr[0] = emp0;
    empArr[1] = emp1;
    empArr[2] = emp2;

    empArr[0].printInfo();
    empArr[1].printInfo();
    empArr[2].printInfo();

    emp0.printInfo();
    emp1.printInfo();
    emp2.printInfo();

    Employee *empptr;
    empptr = new Employee("Josh", "Priebe", 1000, "GUY");
    empptr->printInfo();

    empptr = new Executive("John","Cena", 2000000, "P",1000000,300); 
    empptr->printInfo();  

    empptr = new TestEngin("Steve","harold", 150000, "TE",10000); 
    empptr->printInfo();  
    return 0;
}