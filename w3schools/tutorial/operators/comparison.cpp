#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 10;
    int z = 5;

    cout << "x == y: " << (x == y) << endl;//false
    cout << "y != z: " << (y != z) << endl;//true
    cout << "x > z: " << (x > z) << endl;//false
    cout << "x < y: " << (x < y) << endl;//true
    cout << "y >= z: " << (y >= z) << endl;//true
    cout << "x <= z: " << (x <= z) << endl;//true

    return 0;
}