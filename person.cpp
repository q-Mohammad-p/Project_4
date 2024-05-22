
#include "person.h"

Person &Person::operator=(const Person &p1) { // overloading assigment operator
    if (&p1 == this)
        return *this;        //self assignment;
    name = p1.name;
    id = p1.id;
    address = p1.address;
    return *this;
}

inline ostream &operator<<(ostream &os, const Person &p1) {        //overloading << operator
    os << p1.name << " / " << p1.id << " / " << p1.address << endl;
    return os;
}

inline istream &operator>>(istream &is, Person &p1) {   //overloading >> operator
    cout << "Enter Name : ";
    is >> p1.name;
    cout << "Enter ID : ";
    is >> p1.id;
    is >> p1.address;
    return is;
}

bool Person::validate() {                      // Checks out the id
    if (id.length() < 8 or id.length() > 10)   // Checks the id length
        return false;
    if (id[0] > '9' or id[0] < '8')            // First char must be 8 or 9
        return false;

    if ((id[0] == '9' and (id[1] > '9' or id[1] < '0')) or  // Checks the second char
    (id[0] == '8' and (id[1] > '9' or id[1] < '4')))
        return false;

    int i = 2;
    for (; i < id.length() - 5; ++i) {        //Checks the non-numeric chars after join year
        if (id[i] >= '0' and id[i] <= '9')
            return false;
    }

    for (; i < id.length(); i++) {             //Checks 5 last numbers
        if ((id[i] > '9' or id[i] < '0') or (id[i] > '3' and id[i] < '7'))
            return false;
    }


    return true;
}
