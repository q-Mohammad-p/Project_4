
#include "person.h"

inline Person &Person::operator=(const Person &p1) {
    name = p1.name;
    id = p1.id;
    address = p1.address;
    return *this;
}

inline ostream &operator<<(ostream &os, const Person &p1) {
    os << p1.name << " / " << p1.id << " / " << p1.address << endl;
    return os;
}

inline istream &operator>>(istream &is, Person &p1) {
    cout << "Enter Name : ";
    is >> p1.name;
    cout << "Enter ID : ";
    is >> p1.id;
    is >> p1.address;
    return is;
}