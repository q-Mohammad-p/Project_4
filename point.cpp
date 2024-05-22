
#include "point.h"


void Point::operator/=(int num) {
    if (num == 0) {
        cout << "Can't divide by 0";   //prints an error if the num = 0
        return;
    }
    x = x / num;
    y = y / num;
}

Point& Point::operator=(const Point &point) {
    x = point.x;
    y = point.y;
    return *this;
}
