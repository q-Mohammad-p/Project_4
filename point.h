

#ifndef PROJECT_4_2_POINT_H
#define PROJECT_4_2_POINT_H

#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() : x(0), y(0) {};  //no arg constructor

    Point(int x, int y) : x(x), y(y) {};  //two arg constructor

    Point(const Point &p) : x(p.x), y(p.y) {};  //copy constructor

    friend Point operator+(const Point &point1, const Point &point2) {  //overloading + operator
        return Point(point1.x + point2.x, point1.y + point2.y);
    }

    friend Point operator-(const Point &point1, const Point &point2) {  //overloading - operator
        return Point(point1.x - point2.x, point1.y - point2.y);
    }

    void operator/=(int);    //overloading /= operator

    Point &operator=(const Point &);  //overloading = operator

    friend bool operator>=(const Point &p1, const Point &p2) {
        return (&p1 == &p2) || ((p1.x * p1.x) + (p1.y * p1.y) >= (p2.x * p2.x) + (p2.y * p2.y));
    };

    int get_x() const { return x; };

    int get_y() const { return y; };

    void set_x(int num){x = num;};

    void set_y(int num){y = num;};

    friend class Rectangle;

};


#endif
