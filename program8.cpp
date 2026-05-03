#include <iostream>
using namespace std;

class A {
public:
    int x;
    void set(int a) {
        x = a;
    }
};

int main() {
    A *p = new A;
    p->set(50);
    cout << p->x;
}
