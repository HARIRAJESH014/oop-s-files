#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("b.txt");
    f << 123;
    f.close();
}
