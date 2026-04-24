#include <iostream>
using namespace std;
#include <string>

int main(){
    int myNum = 5;//declares myNum is 5, an int
    float myFloatNum = 5.99;//declares myFloatNum is 5.99, a float
    double myDoubleNum = 9.98;//declares myDoubleNum is 9.98, a double
    char myLetter = 'D';//declares myLetter is 'D', a char
    bool myBoolean = true;//declares myBoolean is true, a bool
    string myText = "Hello";//declares myText is "Hello", a string

    cout << "Integer: " << myNum << endl << "Float: " << myFloatNum << endl << "Double: " << myDoubleNum << endl;//prints myNum, myFloatNum, myDoubleNum each followed by a newline
    cout << "Character: " << myLetter << endl << "Boolean: " << myBoolean << endl << "String: " << myText << endl;//prints myLetter, myBoolean, myText each followed by a newline
    return 0;
}