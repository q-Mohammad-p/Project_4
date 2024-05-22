#ifndef PROJECT_4_2_ADDRESS_H
#define PROJECT_4_2_ADDRESS_H

#include <iostream>

using namespace std;

class Address {
private:
    string country;
    string city;
    string street;
public:
    Address() : country("unknown"), city("unknown"), street("unknown ") {};

    Address(string country, string city, string street) :
            country(country), city(city), street(street) {};

    friend ostream &operator<<(ostream &os, const Address &object);

    friend istream &operator>>(istream &is, Address &object);

    void set_country(const string &name) { country = name; };

    void set_city(const string &name) { city = name; };

    void set_street(const string &name) { street = name; };

    string get_country() const { return country; };

    string get_city() const { return city; };

    string get_street() const { return street; };


};


#endif
