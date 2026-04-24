#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << "I like to eat " << meal << endl;

    meal = "Pasta";

    cout << "I also like to eat " << food << endl;

    return 0;
}