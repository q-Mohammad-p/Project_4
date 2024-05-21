
#include "point.h"


void Point::operator/=(int num) {
    if (num == 0) {
        cout << "Can't divide by 0";
        return;
    }
    x = x / num;
    y = y / num;
}