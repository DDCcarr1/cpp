#include <iostream>
using namespace std;

int main(){
    int add = 10;
    add += 5;//add = add + 5
    int subtract = 10;
    subtract -= 3;//subtract = subtract - 3
    int multiply = 5;
    multiply *= 2;//multiply = multiply * 2
    int divide = 10;
    divide /= 2;//divide = divide / 2
    int modulo = 10;
    modulo %= 3;//modulo = modulo % 3
    int bitwiseAnd = 5;
    bitwiseAnd &= 3;//bitwiseAnd = bitwiseAnd & 3
    int bitwiseOr = 5;
    bitwiseOr |= 3;//bitwiseOr = bitwiseOr | 3
    int bitwiseRightShift = 8;
    bitwiseRightShift >>= 2;//bitwiseRightShift = bitwiseRightShift >>
    int bitwiseLeftShift = 2;
    bitwiseLeftShift <<= 3;//bitwiseLeftShift = bitwiseLeftShift <<
    int exponent = 2;
    exponent ^= 3;//exponent = exponent ^ 3
    
    cout << "add: " << add << endl;
    cout << "subtract: " << subtract << endl;
    cout << "multiply: " << multiply << endl;
    cout << "divide: " << divide << endl;
    cout << "modulo: " << modulo << endl;
    cout << "bitwiseAnd: " << bitwiseAnd << endl;
    cout << "bitwiseOr: " << bitwiseOr << endl;
    cout << "bitwiseRightShift: " << bitwiseRightShift << endl;
    cout << "bitwiseLeftShift: " << bitwiseLeftShift << endl;
    cout << "exponent: " << exponent << endl;

    return 0;
}