#include <iostream>
using namespace std;

class B;

class A {
    int x = 5;
public:
    friend void add(A, B);
};

class B {
    int y = 7;
public:
    friend void add(A, B);
};

void add(A a, B b) {
    cout << a.x + b.y;
}

int main() {
    A a;
    B b;
    add(a, b);
}
