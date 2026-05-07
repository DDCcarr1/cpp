#include <iostream>
using namespace std;

class Employee{
    private:
        double salary = 100000.00;
    protected:
        void setSalary(double s){
            salary = s;
        }
    public:
        double getSalary() const{
            return salary;
        }
};

int main(){
    Employee emp;
    cout << "Employee Salary: $" << emp.getSalary() << endl;

    return 0;
}