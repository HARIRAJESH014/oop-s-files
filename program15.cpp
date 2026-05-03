#include <iostream>
using namespace std;

int main() {
    try {
        throw 5.5;
    }
    catch(double x) {
        cout << x;
    }
}
