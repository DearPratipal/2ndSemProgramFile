#include <iostream>

using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw "Division by zero error!";
        }

        result = static_cast<double>(numerator) / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const char* errorMessage) {
        cerr << "Error: " << errorMessage << endl;
    }

    return 0;
}
