#include <iostream>
using namespace std;

int main(){
    int myInt = 10;
    float myFloat = 3.14;
    double myDouble = 3.14159265358979323846;
    char myChar = 'A';
    
    cout << "Int: " << sizeof(myInt) << endl;
    cout << "Float: " << sizeof(myFloat) << endl;
    cout << "Double: " << sizeof(myDouble) << endl;
    cout << "Char: " << sizeof(myChar) << endl;

    return 0;
}