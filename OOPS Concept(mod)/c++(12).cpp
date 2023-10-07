// Program for Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Overload the + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            throw invalid_argument("Matrix sizes must be the same for addition.");
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    // Display the matrix
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Enter elements for matrix 1:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> matrix1.data[i];
    }

    cout << "Enter elements for matrix 2:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> matrix2.data[i];
    }

    Matrix result = matrix1 + matrix2;

    cout << "Result of matrix addition:" << endl;
    result.display();

    return 0;
}