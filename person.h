
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
    Person() : name("unknown"), id("unknown") {};   //No arg constructor

    Person(string Name, string ID, const Address &address1) :  // Three arg constructor
            name(Name), id(ID), address(address1) {
        if (!validate()) {
            cout << "Invalid id";
            exit(0);
        }
    };

    Person(const Person &p1) : name(p1.name), id(p1.id), address(p1.address) {};  //Copy constructor

    friend ostream &operator<<(ostream &, const Person &);  //overloading << operator

    friend istream &operator>>(istream &, Person &);   //overloading >> operator

    Person &operator=(const Person &p1);  // overloading assigment operator

    bool validate();     // Checks out the id
};


#endif
