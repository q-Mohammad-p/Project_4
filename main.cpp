#include "address.cpp"
#include "person.cpp"
#include "employee.cpp"
#include "point.cpp"
#include "rectangle.cpp"

int main() {
    Address a;
    cin >> a;
    cout << a;
    Person p1;
    cin >> p1;
    cout << p1;
    Employee b;
    cin >> b;
    cout << b;
    Point point1(-1, 1);
    Point point2(0, -1);
    Point p3 = point1 - point2;
    cout << p3.get_x() << endl;
    cout << p3.get_y();
    cout << (point2 >= point1);
    Rectangle r1(point2, 5, 10);
    Rectangle r2(point2, 2, 15);
    Rectangle r3 = r1 -= r2;
    cout << r3.get_width();
    cout << r3.get_height();
    return 0;
}