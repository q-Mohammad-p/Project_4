#include "address.cpp"
#include "person.cpp"
#include "employee.cpp"


int main() {
    Address a;
//    Person p1;
    a.set_city("ali");
    Employee b("ali","84*88888",a,10,10,1,4);
//    cin>>b;
//    cout<<b;
    cout<<b.calculateSalary();
//    b.validate();
//    Person p1("ali","84b..30179",a);
//    p1.validate();
//    cin>>p1;
//    cout<<p1;
    return 0;
}