#include <iostream>
#include <string>  // FIX: Added missing string header
using namespace std;

class Employee{
    protected:
        int salary;
        string name;
    public:  // FIX: Changed constructor from protected to public
        Employee(int s, string n){
            salary = s;
            name = n;
        }
        string getName(){
            return name;
        }
        // FIX: Added public getter and setter for salary to allow access
        int getSalary(){
            return salary;
        }
        void setSalary(int s){
            salary = s;
        }
        void setName(string n){
            name = n;
        }
};

class Manager : public Employee{
    public:
        Manager(int s, string n) : Employee(s, n){  /*  Nothing */   }
        void getEmployeeDetails(Employee emp){
            cout << "Employee Name: " << emp.getName() << endl; 
            cout << "Employee Salary: " << emp.getSalary() << endl;  // FIX: Using public getter instead of accessing protected member
        }
        void setEmployeeDetails(Employee &emp, int s, string n){
            emp.setSalary(s);  // FIX: Using public setter instead of accessing protected member
            emp.setName(n);    // FIX: Using public setter instead of accessing protected member
        }
};

int main() {
    Employee emp1(50000, "John Doe");
    Manager mgr1(80000, "Jane Smith");

    cout << "Before updating employee details:" << endl;
    mgr1.getEmployeeDetails(emp1);

    mgr1.setEmployeeDetails(emp1, 55000, "John Doe Updated");

    cout << "\nAfter updating employee details:" << endl;
    mgr1.getEmployeeDetails(emp1);

    return 0;
}