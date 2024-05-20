
#ifndef PROJECT_4_2_PERSON_H
#define PROJECT_4_2_PERSON_H

#include <iostream>
#include "address.h"
#include <cstring>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string id;
    Address address;
public:
    Person() : name("unknown"), id("unknown") {};

    Person(string Name, string ID, const Address &address1) :
            name(Name), id(ID), address(address1) {validate();};

    Person(const Person &p1) : name(p1.name), id(p1.id), address(p1.address) {};

    friend ostream &operator<<(ostream &, const Person &);

    friend istream &operator>>(istream &, Person &);

    Person &operator=(const Person &p1);

    bool validate();
};


#endif //PROJECT_4_2_PERSON_H
