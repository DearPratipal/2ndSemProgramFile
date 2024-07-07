#include <iostream>
#include <string>

using namespace std;

class MyClass {
private:
    int number;
    string text;

public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
        number = 0;
        text = "Default";
    }

    // Parameterized constructor
    MyClass(int num, const string& txt) {
        cout << "Parameterized constructor called" << endl;
        number = num;
        text = txt;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
        number = other.number;
        text = other.text;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called for " << text << endl;
    }

    // Function to display object details
    void display() {
        cout << "Number: " << number << ", Text: " << text << endl;
    }
};

int main() {
    // Creating objects using different types of constructors
    MyClass obj1; // Default constructor
    MyClass obj2(10, "Hello"); // Parameterized constructor
    MyClass obj3 = obj2; // Copy constructor

    // Displaying object details
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();
    cout << "Object 3: ";
    obj3.display();

    return 0;
}
