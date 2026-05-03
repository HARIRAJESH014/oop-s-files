#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Normal";
    }
};

int main() {
    A a;
    a.show();
}
