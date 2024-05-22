
#include "person.h"

Person &Person::operator=(const Person &p1) {
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

bool Person::validate() {
    if (id.length() < 8 or id.length() > 10)
        return false;
    if (id[0] > '9' or id[0] < '8')
        return false;

    else if (id[1] < '4' and id[0] == '8')
        return false;

    int i = 2;
    for (; i < id.length() - 5; ++i) {
        if (id[i] >= '0' and id[i] <= '9')
            return false;
    }
    for (; i < id.length(); i++) {
        if ((id[i] > '9' or id[i] < '0') or (id[i] > '3' and id[i] < '7'))
            return false;
    }


    return true;
}
