#include <iostream>
using namespace std;

class A {
public:
    int x = 100;
};

int main() {
    A a;
    A *p = &a;
    cout << (*p).x;
}
