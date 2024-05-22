#include "address.cpp"
#include "person.cpp"
#include "employee.cpp"
#include "point.cpp"
#include "rectangle.cpp"

int main() {
    Address a;
//    Person p1;
//    a.set_city("ali");
    Employee b("ali","91*88888",a,10,10,1,4);
////    cin>>b;
    cout<<b;
//    cout<<b.calculateSalary();
//    b.validate();
//    Person p1("ali","84b..30179",a);
//    p1.validate();
//    cin>>p1;
//    cout<<p1;
//    Point p1(-1,1);
//    Point p2(0,-1);
////    Point p3 = p1 - p2;
////    cout<<p3.get_x()<<endl;
////    cout<<p3.get_y();
////    cout<<(p2>=p1);
//Rectangle r1(p2,5,10);
//Rectangle r2(p2,2,15);
//Rectangle r3 = r1-=r2;
//cout<<r3.get_width();
//cout<<r3.get_height();
    return 0;
}