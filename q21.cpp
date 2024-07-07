#include <iostream>

using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    int side = 5;
    int length = 6;
    int width = 4;
    double radius = 3.5;

    // Calculate and display the area of a square
    cout << "Area of square with side " << side << ": " << area(side) << endl;

    // Calculate and display the area of a rectangle
    cout << "Area of rectangle with length " << length << " and width " << width << ": " << area(length, width) << endl;

    // Calculate and display the area of a circle
    cout << "Area of circle with radius " << radius << ": " << area(radius) << endl;

    return 0;
}
