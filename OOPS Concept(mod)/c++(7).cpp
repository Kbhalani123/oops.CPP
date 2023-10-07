// program for Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the two numbers
    Calculator(int x, int y) {
        num1 = x;
        num2 = y;
    }

    // Member function to perform addition
    int add() {
        return num1 + num2;
    }

    // Member function to perform subtraction
    int subtract() {
        return num1 - num2;
    }

    // Member function to perform division (checks for division by zero)
    int divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0; // Return a default value
        }
    }

    // Member function to perform multiplication
    int multiply() {
        return num1 * num2;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create a Calculator object and initialize it with the entered numbers
    Calculator calculator(num1, num2);

    cout << "Addition: " << calculator.add() << endl;
    cout << "Subtraction: " << calculator.subtract() << endl;
    cout << "Multiplication: " << calculator.multiply() << endl;
    cout << "Division: " << calculator.divide() << endl;

    return 0;
}