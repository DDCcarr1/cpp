#include <iostream>
using namespace std;

void hello(string name = " "){
    cout << "Hello " << name << endl;
}

int main(){
    hello("John");
    hello();

    return 0;
}