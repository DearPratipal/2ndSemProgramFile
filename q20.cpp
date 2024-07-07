#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overloading + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overloading - operator for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overloading * operator for multiplication
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imaginary * other.imaginary,
                       real * other.imaginary + imaginary * other.real);
    }

    // Overloading / operator for division
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        return Complex((real * other.real + imaginary * other.imaginary) / denominator,
                       (imaginary * other.real - real * other.imaginary) / denominator);
    }

    // Function to display complex number
    friend ostream& operator<<(ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }
};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2(1.0, 4.0);

    // Addition
    Complex addition = c1 + c2;
    cout << "Addition: " << addition << endl;

    // Subtraction
    Complex subtraction = c1 - c2;
    cout << "Subtraction: " << subtraction << endl;

    // Multiplication
    Complex multiplication = c1 * c2;
    cout << "Multiplication: " << multiplication << endl;

    // Division
    Complex division = c1 / c2;
    cout << "Division: " << division << endl;

    return 0;
}
