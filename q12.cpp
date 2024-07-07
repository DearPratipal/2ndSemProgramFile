#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function to insert an element into an array
void insertElement(int arr[], int& size, int element, int position) {
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Increase the size of the array
    ++size;

    cout << "Element " << element << " inserted at position " << position << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Insertion
    insertElement(arr, size, 10, 0); // Insert 10 at position 0
    insertElement(arr, size, 20, 1); // Insert 20 at position 1
    insertElement(arr, size, 30, 2); // Insert 30 at position 2

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


