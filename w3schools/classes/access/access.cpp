#include <iostream>
using namespace std;

class Car{
    public:
        string brand = "Unknown";
        string model = "Unknown";
        int year = 0;

        Car(){
            cout << "A new car has been created!" << endl;
        }
        int getCarID() const{
            return id;
        }
    private:
        int id = 55;
};

int main(){
    Car car1;
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    cout << "Car ID: " << car1.getCarID() << endl;

    return 0;
}