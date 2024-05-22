
#ifndef PROJECT_4_2_EMPLOYEE_H
#define PROJECT_4_2_EMPLOYEE_H

#include "address.h"

class Employee {
private:
    int hourWork;
    int salaryPerHour;
    int workToDo;
    int workDone;
public:
    string name;
    string id;
    Address address;

    Employee() : name("unknown"), id("unknown"),      //No arg constructor
                 hourWork(0), salaryPerHour(0), workDone(0), workToDo(0) {};

    Employee(string name, string id, Address address, int hourWork,
             int salaryPerHour, int workToDo, int workDone);


    Employee(const Employee &other);    // Copy constructor

    friend ostream &operator<<(ostream &os, const Employee &e1);  //overloading << operator

    friend istream &operator>>(istream &istream1, Employee &e1);  //overloading >> operator

    Employee &operator=(const Employee &e1);   // overloading assigment operator

    void set_name(const string& Name){name = Name;};     //setter functions

    void set_id(const string& ID){id = ID;};

    void set_address(const Address& ad){address = ad;};

    void set_hourWork(int num){hourWork = num;};

    void set_salaryPerHour(int salary){salaryPerHour = salary;};

    void set_workToDo(int work){workToDo = work;};

    void set_workDone(int done){workDone = done;};

    string get_name() const{return name;};             //getter functions

    string get_id()const {return id;};

    Address get_address()const {return address;};

    int get_hourWork()const {return hourWork;};

    int get_salaryPerHour()const {return salaryPerHour;};

    int get_workToDo()const {return workToDo;};

    int get_workDone()const {return workDone;};

    bool validate()const;             //Checks out id

    float calculateSalary() const;

    float efficiency() const;
};


#endif
