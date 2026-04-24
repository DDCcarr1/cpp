#include <iostream>
using namespace std;

int main(){
    const int myNum = 15;//declares myNum is 15, an int, and is a constant, which means it cannot be changed
    //myNum = 20;           //this will cause an error because myNum is constant
    cout << myNum << endl;//prints myNum, then adds a newline
    return 0;
}