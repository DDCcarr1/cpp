#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
            cout << "A new car has been created: " << brand << " " << model << " (" << year << ")" << endl;
        }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2019);

    cout << car1.brand << "\t" << car2.brand << endl;

    return 0;
}