#include "employee.h"

inline ostream &operator<<(ostream &os, const Employee &e1) {
    os << e1.name << " / " << e1.id << " / " << e1.address << " \nWork to do :  "
       << e1.workToDo << "\nWork done" << e1.workDone << "\nWork hour : " << e1.hourWork
       << "\nSalary per hour : " << e1.salaryPerHour;
    return os;
}

inline istream &operator>>(istream &istream1, Employee &e1) {
    cout << "Name";
    istream1 >> e1.name;
    cout << "ID : ";
    istream1 >> e1.id;
    istream1 >> e1.address;
    cout << " \nWork to do :  ";
    istream1 >> e1.workToDo;
    cout << "\nWork done : ";
    istream1 >> e1.workDone;
    cout << "\nWork hour : ";
    istream1 >> e1.hourWork;
    cout << "\nSalary per hour : ";
    istream1 >> e1.salaryPerHour;
    return istream1;
}
