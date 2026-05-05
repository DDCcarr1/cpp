#include <iostream>
using namespace std;

void countdown(int n) {
  if (n < 0) {
    return; // Base case: stop recursion when n is negative
  }
  cout << n << endl;
  countdown(n - 1); // Recursive call with a smaller value
}

int main() {
  countdown(5);
  return 0;
}