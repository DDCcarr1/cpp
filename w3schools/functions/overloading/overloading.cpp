#include <iostream>
using namespace std;

void print(int i){
    cout << i << endl;
}

void print(string i){
    cout << i << endl;
}

int main() {
    print(5);
    print("Hello");
    return 0;
}