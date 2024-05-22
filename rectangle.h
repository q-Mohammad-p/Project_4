#ifndef PROJECT_4_2_RECTANGLE_H
#define PROJECT_4_2_RECTANGLE_H

#include "point.h"

#include <cmath>

class Rectangle {
private:
    Point startPoint;
    int width;
    int height;
public:
    Rectangle() : width(0), height(0), startPoint(0, 0) {};  //no arg construvtor

    Rectangle(Point sp, int w, int h) : startPoint(sp), width(w), height(h) {};
    //copy constructor
    Rectangle(const Rectangle &rect) : startPoint(rect.startPoint), width(rect.width), height(rect.height) {};

    Rectangle &operator+=(const Rectangle &rect);  //overloading += operator

    Rectangle &operator-=(const Rectangle &rect); //overloading -= operator

    friend Rectangle operator/(const Rectangle &r1, const Rectangle &r2) {   //overloading / operator
        Point temPoint((r1.startPoint.x + r2.startPoint.x) / 2,           // calculates the average of two points
                       (r1.startPoint.y + r2.startPoint.y) / 2);          // and assign it tow a new point
        int tempWidth = r1.width / r2.width;  //new width
        int tempHeight = r1.height / r2.height;  //new height

        return Rectangle(temPoint, tempWidth, tempHeight);   //returns a new rectangle whit new data
    }

    int get_width() const { return width; };

    int get_height() const { return height; };

    Point get_startPoint() const { return startPoint; };

    void set_width(int num) { width = num; };

    void set_height(int num) { height = num; };

    void set_startPoint(const Point &p) { startPoint = p; };

    friend bool collisionDetection(const Rectangle& r1, const Rectangle& r2){    //checks the rectangle collision
        if (r1.startPoint.x < r2.startPoint.x + r2.width and
            r1.startPoint.x + r1.width > r2.startPoint.x and
            r1.startPoint.y <r2.startPoint.y + r2.height and
            r1.height + r1.startPoint.y > r2.startPoint.y) {
            return true;
        }
        return false;
    }
};

#endif
