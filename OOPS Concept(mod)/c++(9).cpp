/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Member function to initialize data
    void initializePersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    // Member function to display data
    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    double percentage;

public:
    // Member function to initialize student data
    void initializeStudentData() {
        initializePersonData();
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    // Member function to display student data
    void displayStudentData() {
        displayPersonData(); // Call base class member function to display name and age
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    // Member function to initialize teacher data
    void initializeTeacherData() {
        initializePersonData(); 
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Member function to display teacher data
    void displayTeacherData() {
        displayPersonData(); 
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter Student Information:" << endl;
    student.initializeStudentData();

    cout << "\nEnter Teacher Information:" << endl;
    teacher.initializeTeacherData();

    cout << "\nStudent Information:" << endl;
    student.displayStudentData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacherData();

    return 0;
}