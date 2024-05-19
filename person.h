
#ifndef PROJECT_4_2_PERSON_H
#define PROJECT_4_2_PERSON_H

#include <iostream>
#include "address.h"
using namespace std;

class Person {
private:
    string name;
    string id;
    Address address;
public:
    Person() : name("unknown"), id("unknown") {};

    Person(string &name, string &id, const Address &address) :
            name(name), id(id), address(address) {};

    Person(const Person &p1) : name(p1.name), id(p1.id), address(p1.address) {};

    friend ostream &operator<<(ostream &, const Person &);

    friend istream &operator>>(istream &, Person &);

    Person &operator=(const Person &p1);
};


#endif //PROJECT_4_2_PERSON_H
