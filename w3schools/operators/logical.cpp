#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int z = 5;

    cout << "x > y && y > z: " << (x > y && y > z) << endl; //false
    cout << "z > y && y > x: " << (z > y && y > x) << endl; //false
    cout << "x > y || y > z: " << (x > y || y > z) << endl; //true
    cout << "z > y || y > x: " << (z > y || y > x) << endl; //true
    cout << "!(x > y): " << !(x > y) << endl; //true
    cout << "!(y > z): " << !(y > z) << endl; //false

    return 0;
}