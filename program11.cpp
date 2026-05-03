#include <iostream>
using namespace std;

class A {
public:
    virtual void display() = 0;
};

class B : public A {
public:
    void display() {
        cout << "Abstract";
    }
};

int main() {
    B b;
    b.display();
}
