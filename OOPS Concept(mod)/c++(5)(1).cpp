/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(std::string name, long accNumber, std::string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of ?" << amount << " successful. New balance: ?" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive amount." << endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of ?" << amount << " successful. New balance: ?" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Member function to display account information
    void display() {
        cout << "Account Information:" << endl;
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: ?" << balance << endl;
    }
};

int main() {
    // Example usage of the BankAccount class
    BankAccount myAccount("keyur", 1234567890, "Savings", 1000.00);

    myAccount.display();
    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.display();

    return 0;
}