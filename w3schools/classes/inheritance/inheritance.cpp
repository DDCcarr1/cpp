#include <iostream>
using namespace std;

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "BEEP BEEP!" << endl;
        }
};

class Car: public Vehicle{
    public:
        string model = "Mustang";
};

int main(){
    Car car1;
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    car1.honk();

    return 0;
}