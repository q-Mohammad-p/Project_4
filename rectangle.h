#ifndef PROJECT_4_2_RECTANGLE_H
#define PROJECT_4_2_RECTANGLE_H

#include "point.h"

class Rectangle {
private:
    Point startPoint;
    int width;
    int height;
public:
    Rectangle() : width(0), height(0), startPoint(0, 0) {};

    Rectangle(Point sp, int w, int h) : startPoint(sp), width(w), height(h) {};

    Rectangle(const Rectangle &rect) : startPoint(rect.startPoint), width(rect.width), height(rect.height) {};

    Rectangle &operator+=(const Rectangle &rect);

    Rectangle &operator-=(const Rectangle &rect);

    int get_width() const { return width; };

    int get_height() const { return height; };
};

#endif
