#include "address.h"

inline ostream &operator<<(ostream &os, const Address &object) {
    os << object.country << " / " << object.city << " / " << object.street << endl;
    return os;
}

inline istream &operator>>(istream &is, Address &object) {
    cout << "Enter Country : ";
    is >> object.country;
    cout << "Enter City : ";
    is >> object.city;
    cout << "Enter Street : ";
    is >> object.street;
    return is;
}
