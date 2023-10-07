/*Assume that the test results of a batch ofstudents are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marksobtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include <iostream>
#include <string>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    // Member function to initialize student data
    void initializeStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    // Member function to display student data
    void displayStudentData() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students {
protected:
    double subject1Marks;
    double subject2Marks;

public:
    // Member function to initialize test data
    void initializeTestData() {
        initializeStudentData(); 
        cout << "Enter Marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter Marks for Subject 2: ";
        cin >> subject2Marks;
    }

    // Member function to display test data
    void displayTestData() {
        displayStudentData();
        cout << "Marks for Subject 1: " << subject1Marks << endl;
        cout << "Marks for Subject 2: " << subject2Marks << endl;
    }
};

class Result : public Test {
private:
    double totalMarks;

public:
    // Member function to calculate and initialize total marks
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    // Member function to display result data
    void displayResultData() {
        displayTestData(); // Call base class member function to display test data
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    cout << "Enter Student Test Results:" << endl;
    studentResult.initializeTestData();
    studentResult.calculateTotalMarks();

    cout << "\nStudent Result Information:" << endl;
    studentResult.displayResultData();

    return 0;
}