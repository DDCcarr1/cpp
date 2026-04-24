#include <iostream>
using namespace std;

int main(){
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;//concatenates firstName and lastName, and assigns it to fullName
    cout << fullName << endl;//prints fullName, then adds a newline
    cout << firstName.append(lastName) << endl;//appends lastName to firstName, and prints the result, then adds a newline

    return 0;
}