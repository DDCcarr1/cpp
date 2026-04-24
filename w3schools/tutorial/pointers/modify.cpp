#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";
    cout << *ptr << "\n";

    cout << &food << "\n";
    cout << ptr << "\n";

    *ptr = "Hamburger";

    cout << food << "\n";
    cout << *ptr << "\n";

    return 0;
}