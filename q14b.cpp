/* b.	Member Functions: To assign initial values, to deposit an amount, to withdraw an amount after checking the amount , to display the balance along with account details.  */

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
    // Constructor to assign initial values
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

    // Member function to withdraw money after checking the amount
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } else {
            balance -= amount;
        }
    }

    // Inline member function to display account details along with balance
    inline void displayBalance() {
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

    // Displaying initial account details and balance
    myAccount.displayBalance();

    // Deposit some money
    myAccount.deposit(500.0);

    // Displaying updated account details and balance
    myAccount.displayBalance();

    // Withdraw some money
    myAccount.withdraw(2000.0);

    // Displaying updated account details and balance
    myAccount.displayBalance();

    return 0;
}
