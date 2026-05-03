#include <iostream>
using namespace std;

class Address {
public:
    string city;
};

class Student {
    Address a;
public:
    void set() {
        a.city = "Chennai";
    }
    void show() {
        cout << a.city;
    }
};

int main() {
    Student s;
    s.set();
    s.show();
}
