
#ifndef PROJECT_4_2_EMPLOYEE_H
#define PROJECT_4_2_EMPLOYEE_H

#include "Address.h"

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

    Employee() : name("unknown"), id("unknown"),
                 hourWork(0), salaryPerHour(0), workDone(0), workToDo(0) {};

    Employee(string name, string id, Address address, int hourWork,
             int salaryPerHour, int workToDo, int workDone) :
            name(name), id(id), address(address), hourWork(hourWork),
            salaryPerHour(salaryPerHour), workToDo(workToDo), workDone(workDone) {};


    Employee(const Employee &other) : name(other.name), id(other.id), address(other.address),
                                      hourWork(other.hourWork), salaryPerHour(other.salaryPerHour),
                                      workToDo(other.workToDo),
                                      workDone(other.workDone) {};
};


#endif
