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
    Rectangle() : width(0), height(0), startPoint(0, 0) {};

    Rectangle(Point sp, int w, int h) : startPoint(sp), width(w), height(h) {};

    Rectangle(const Rectangle &rect) : startPoint(rect.startPoint), width(rect.width), height(rect.height) {};

    Rectangle &operator+=(const Rectangle &rect);

    Rectangle &operator-=(const Rectangle &rect);

    friend Rectangle operator/(const Rectangle &r1, const Rectangle &r2) {
        Point temPoint((r1.startPoint.x + r2.startPoint.x) / 2,
                       (r1.startPoint.y + r2.startPoint.y) / 2);
        int tempWidth = r1.width / r2.width;
        int tempHeight = r1.height / r2.height;

        return Rectangle(temPoint, tempWidth, tempHeight);
    }

    int get_width() const { return width; };

    int get_height() const { return height; };

    Point get_startPoint() const { return startPoint; };

    void set_width(int num) { width = num; };

    void set_height(int num) { height = num; };

    void set_startPoint(const Point &p) { startPoint = p; };


};

#endif
