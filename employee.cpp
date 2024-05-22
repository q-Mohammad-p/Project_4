#include "employee.h"


Employee::Employee(string name, string id, Address address, int hourWork,
                   int salaryPerHour, int workToDo, int workDone) :
        name(name), id(id), address(address), hourWork(hourWork),
        salaryPerHour(salaryPerHour), workToDo(workToDo), workDone(workDone) {
    if (!validate()) {
        cout << "Invalid id";
        exit(0);
    }
};


Employee::Employee(const Employee &other) : name(other.name), id(other.id), address(other.address),
                                            hourWork(other.hourWork), salaryPerHour(other.salaryPerHour),
                                            workToDo(other.workToDo),
                                            workDone(other.workDone) {};

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

Employee &Employee::operator=(const Employee &e1) {
    name = e1.name;
    id = e1.id;
    address = e1.address;
    workToDo = e1.workToDo;
    workDone = e1.workDone;
    hourWork = e1.hourWork;
    salaryPerHour = e1.salaryPerHour;
    return *this;
}

bool Employee::validate() const {
    if (id.length() < 8 or id.length() > 10)
        return false;
    if (id[0] > '9' or id[0] < '8')
        return false;
    else if (id[1] < '4' and id[0] == '8') {
        return false;
    }
    if (id[2] != '*')
        return false;
    int i = 3;
    for (; i < id.length() - 5; ++i) {
        if (id[i] >= '0' and id[i] <= '9')
            return false;
    }
    for (; i < id.length(); i++) {
        if ((id[i] > '9' or id[i] < '0') or (id[i] > '3' and id[i] <= '6'))
            return false;
    }

    return true;
}

float Employee::calculateSalary() const {
    float percent = (float(workToDo) / float(workDone + workToDo)) * 100;
    float salary = float(hourWork * salaryPerHour);
    salary = salary - salary * percent / 100;
    return salary;
}

float Employee::efficiency() const {
    float percent = (float(workDone) / float(workDone + workToDo)) * 100 / float(hourWork);
    return percent;
}
