#include <iostream>
using namespace std;

class MyClass{
    public:
        int myInt;
        string myString;
        MyClass(int x, string y){
            myInt = x;
            myString = y;
            cout << "All values provided." << endl;
        }
        MyClass(int x){
            myInt = x;
            cout << "String value not provided." << endl;
        }
        MyClass(string y){
            myString = y;
            cout << "Integer value not provided." << endl;
        }
        MyClass(){
            cout << "No information provided." << endl;
        }
};

int main() {
    MyClass obj1(10, "Hello");
    MyClass obj2(20);
    MyClass obj3("World");
    MyClass obj4;
    return 0;
}