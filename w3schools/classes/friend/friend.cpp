#include <iostream>
using namespace std;

class Employee{
    private:
        int salary = 50000;
    public:
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Employee Salary: $" << emp.salary << endl;
}

int main(){
    Employee emp1;
    displaySalary(emp1);

    return 0;
}