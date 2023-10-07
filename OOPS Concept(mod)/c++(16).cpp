//  program for find the max number from given two numbers using friend function


#include <iostream>
using namespace std;

class MaxNumber {
private:
int num1, num2;

public:
MaxNumber(int n1, int n2) {
num1 = n1;
num2 = n2;
}

friend int findMax(MaxNumber obj);

};

int findMax(MaxNumber obj) {
if (obj.num1 > obj.num2) {
return obj.num1;
} else {
return obj.num2;
}
}

int main() {
int num1, num2;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

MaxNumber obj(num1, num2);
int maxNum = findMax(obj);

cout << "The maximum number is: " << maxNum << endl;

return 0;
}