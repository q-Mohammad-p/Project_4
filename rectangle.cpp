
#include "rectangle.h"

Rectangle& Rectangle::operator+=(const Rectangle &rect) {
    if(startPoint.x == rect.startPoint.x and startPoint.y == rect.startPoint.y){  //The start points must be the
                                                                                  // same in both rectangles
    if(rect.height > height)   //assigns the bigger height
        height = rect.height;
    if(rect.width > width)     //assigns the bigger width
        width = rect.width;
    return *this;
    } else {                    //prints an error if the start point were not the same
        cout << "error";
        return *this;
    }
}

Rectangle &Rectangle::operator-=(const Rectangle &rect) {
    if(startPoint.x == rect.startPoint.x and startPoint.y == rect.startPoint.y){   //The start points must be the
                                                                                   // same in both rectangles
        if(rect.height < height)   //assigns the smaller height
            height = rect.height;
        if(rect.width < width)     //assigns the smaller width
            width = rect.width;
        return *this;
    } else {
        cout << "error";      //prints an error if the start point were not the same
        return *this;
    }
}
