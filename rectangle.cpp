
#include "rectangle.h"

Rectangle& Rectangle::operator+=(const Rectangle &rect) {
    if(startPoint.x == rect.startPoint.x and startPoint.y == rect.startPoint.y){
    if(rect.height > height)
        height = rect.height;
    if(rect.width > width)
        width = rect.width;
    return *this;
    } else {
        cout << "error";
        return *this;
    }
}

Rectangle &Rectangle::operator-=(const Rectangle &rect) {
    if(startPoint.x == rect.startPoint.x and startPoint.y == rect.startPoint.y){
        if(rect.height < height)
            height = rect.height;
        if(rect.width < width)
            width = rect.width;
        return *this;
    } else {
        cout << "error";
        return *this;
    }
}
