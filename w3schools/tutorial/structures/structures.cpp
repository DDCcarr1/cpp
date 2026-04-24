#include <iostream>
using namespace std;

int main() {
    struct Student{
        string name;
        int age;
        double grade;
    };

    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.grade = 85.5;

    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;
}