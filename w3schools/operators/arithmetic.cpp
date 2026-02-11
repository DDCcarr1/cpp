#include <iostream>
using namespace std;

int main() {
  int add = 6 + 4;//adds 6 and 4 to get 10
  int subtract = 6 - 4;//subtracts 4 from 6 to get 2
  int multiply = 6 * 4;//multiplies 6 and 4 to get 24
  int divide = 6 / 2;//divides 6 by 2 to get 3
  int mod = 6 % 4;//modulus of 6 divided by 4 to get 2
  int incr = 6; //initial value
  incr++;//increments value by 1 to get 7
  int decr = 6; //initial value
  decr--;//decrements value by 1 to get 5

  cout << "6 + 4 = " << add << endl;
  cout << "6 - 4 = " << subtract << endl;
  cout << "6 * 4 = " << multiply << endl;
  cout << "6 / 2 = " << divide << endl;
  cout << "6 % 4 = " << mod << endl;
  cout << "Incrementing 6 gives us: " << incr << endl;
  cout << "Decrementing 6 gives us: " << decr << endl;
  
  return 0;
}