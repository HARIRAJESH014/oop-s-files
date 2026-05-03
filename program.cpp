#include <iostream>
using namespace std;

class Engine {
public:
    void show() {
        cout << "Engine working";
    }
};

class Car {
    Engine e;
public:
    void display() {
        e.show();
    }
};

int main() {
    Car c;
    c.display();
}
