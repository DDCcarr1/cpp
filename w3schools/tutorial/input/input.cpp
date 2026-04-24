#include <iostream>
using namespace std;

int main(){
    int inputNum;//declares inputNum is an int
    cout << "Type a number: ";//asks user to type a number
    cin >> inputNum;//gets user input and stores it in inputNum

    int inputNum2;//declares inputNum2 is an int
    cout << endl << "Type another number: ";//asks user to type another number
    cin >> inputNum2;//gets user input and stores it in inputNum2
    
    cout << endl << "The sum of the two numbers is: " << inputNum + inputNum2 << endl;//prints the sum of inputNum + inputNum2, then adds a newline
    return 0;
}