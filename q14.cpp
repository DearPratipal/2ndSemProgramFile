#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    BankAccount(string name, string number, string type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        balance += amount;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } else {
            balance -= amount;
        }
    }

    // Inline member function to display account details
    inline void displayAccountDetails() {
        cout << "Account Details:" << endl;
        cout << "Name of Depositor: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Type of Account: " << accountType << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("Pratipal Maurya", "MMU1323607", "Savings", 1000.0);

    // Displaying initial account details
    myAccount.displayAccountDetails();

    // Deposit some money
    myAccount.deposit(500.0);

    // Displaying updated account details
    myAccount.displayAccountDetails();

    // Withdraw some money
    myAccount.withdraw(200.0);

    // Displaying updated account details
    myAccount.displayAccountDetails();

    return 0;
}
