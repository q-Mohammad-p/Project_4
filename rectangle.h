#ifndef PROJECT_4_2_RECTANGLE_H
#define PROJECT_4_2_RECTANGLE_H

#include "point.cpp"

class Rectangle {
private:
    Point startPoint;
    int width;
    int height;
public:
    Rectangle() : width(0), height(0), startPoint(0, 0) {};

    Rectangle(Point sp, int w, int h) : startPoint(sp), width(w), height(h) {};

    Rectangle(const Rectangle &rect) : startPoint(rect.startPoint), width(rect.width), height(rect.height) {};


};

#endif
