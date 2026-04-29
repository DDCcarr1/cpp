#include <iostream>
using namespace std;

struct Variables{
    int int1;
    float float1;
    double double1;
    char char1;
    bool bool1;
    string string1;
};

void myFunction(Variables var) {
  cout << var.int1 << "\n";
  cout << var.float1 << "\n";
  cout << var.double1 << "\n";
  cout << var.char1 << "\n";
  cout << var.bool1 << "\n";
  cout << var.string1 << "\n";
}

int main() {
  Variables var = {10, 3.14f, 3.14159, 'A', true, "Hello"};
  myFunction(var);
  return 0;
}