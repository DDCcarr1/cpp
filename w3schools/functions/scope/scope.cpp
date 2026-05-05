#include <iostream>
using namespace std;

int y = 20; // Global variable

void myFunction() {
  int x = 10; // Local variable
  cout << "Value of x inside the function: " << x << endl;
}

void myFunction2() {
  cout << "Value of y inside the function: " << y << endl;
}

int main() {
  myFunction();
  // cout << "Value of x outside the function: " << x << endl;

    myFunction2();
    cout << "Value of y outside the function: " << y << endl;

  return 0;
}