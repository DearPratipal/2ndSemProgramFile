#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overridden function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Overridden function
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptr; // Pointer to base class

    Dog dog; // Object of derived class Dog
    Cat cat; // Object of derived class Cat

    ptr = &dog; // Assigning address of dog object to base class pointer
    ptr->makeSound(); // Calls Dog's version of makeSound

    ptr = &cat; // Assigning address of cat object to base class pointer
    ptr->makeSound(); // Calls Cat's version of makeSound

    return 0;
}
