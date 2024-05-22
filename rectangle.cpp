
#include "rectangle.h"

Rectangle& Rectangle::operator+=(const Rectangle &rect) {
    if(startPoint.get_x() == rect.startPoint.get_x() and startPoint.get_y() == rect.startPoint.get_y()){
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
    if(startPoint.get_x() == rect.startPoint.get_x() and startPoint.get_y() == rect.startPoint.get_y()){
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
