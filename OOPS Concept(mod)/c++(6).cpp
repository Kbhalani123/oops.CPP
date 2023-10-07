//Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

// Inline function to calculate the multiplication value
inline double multiply(double x, double y) {
    return x * y;
}

// Inline function to calculate the cubic value
inline double cube(double x) {
    return x * x * x;
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double multiplicationResult = multiply(number, 2.0);
    double cubicResult = cube(number);

    cout << "Multiplication Result: " << multiplicationResult << endl;
    cout << "Cubic Result: " << cubicResult << endl;

    return 0;
}