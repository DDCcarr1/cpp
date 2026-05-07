#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};//creates a list (vector) of ints. to init without values: vector<int> numbers;

    //loop through the vector
    for(int number : numbers){//similar to a foreach loop in java and python
        cout << number << endl;
    }

    cout << numbers[1] << endl;//accessing the element of the vector
    cout << numbers.at(2) << endl;//this is often used more as it throws better errors

    cout << numbers.front() << endl;//always prints the first element of the vector
    cout << numbers.back() << endl;//always prints the last element of the vector

    numbers[1] = 20;//modifying the element of the vector
    numbers.at(2) = 30;//this is often used more as it throws better errors

    numbers.push_back(6);//adds an element to the end of the vector
    numbers.pop_back();//removes the last element of the vector

    cout << numbers.size() << endl;//returns the number of elements in the vector
    cout << numbers.empty() << endl;//returns true if the vector is empty, false otherwise

    for(int i = 0; i < numbers.size(); i++){//loop through the vector using an index, better for data manipulation
        cout << numbers[i] << endl;
    }

    return 0;
}