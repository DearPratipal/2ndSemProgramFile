#include <iostream>

using namespace std;

class PersonB;
class PersonA {
private:
    double income;

public:
    PersonA(double inc) : income(inc) {}

    // Friend function declaration for PersonA class
    friend double calculateIncomeTax(const PersonA& personA, const PersonB& personB);
};

class PersonB {
private:
    double income;

public:
    PersonB(double inc) : income(inc) {}

    // Friend function declaration for PersonB class
    friend double calculateIncomeTax(const PersonA& personA, const PersonB& personB);
};

// Friend function definition for calculating income tax
double calculateIncomeTax(const PersonA& personA, const PersonB& personB) {
    double totalIncome = personA.income + personB.income;
    double tax = 0.0;

    // Calculate income tax based on total income
    if (totalIncome <= 50000) {
        tax = 0.05 * totalIncome;
    } else if (totalIncome <= 100000) {
        tax = 0.1 * totalIncome;
    } else {
        tax = 0.15 * totalIncome;
    }

    return tax;
}

int main() {
    // Create objects of PersonA and PersonB
    PersonA personA(45000);
    PersonB personB(55000);

    // Calculate and display income tax using friend function
    double tax = calculateIncomeTax(personA, personB);
    cout << "Total income tax: $" << tax << endl;

    return 0;
}
