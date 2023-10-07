/*Define a class to represent a bank account. Include the following members:
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */


#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    double balance;

public:
    // Constructor to initialize the account with a name and initial balance
    BankAccount(std::string name, double initialBalance) {
        depositorName = name;
        balance = initialBalance;
    }

    // Member function to assign a new name to the account holder
    void assignName(std::string name) {
        depositorName = name;
    }

    // Member function to deposit an amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of ?" << amount << " successful. New balance: ?" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Member function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of ?" << amount << " successful. New balance: ?" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Member function to display the account holder's name and balance
    void display() {
        std::cout << "Account Holder: " << depositorName << std::endl;
        std::cout << "Balance: ?" << balance << std::endl;
    }
};

int main() {
    // Example usage of the BankAccount class
    BankAccount myAccount("jay", 1000.00);

    myAccount.display();
    myAccount.assignName("keyur");
    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.display();

    return 0;
}