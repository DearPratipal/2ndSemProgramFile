#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function to delete an element from an array
void deleteElement(int arr[], int& size, int position) {
    if (size <= 0) {
        cout << "Array is empty. Cannot delete element." << endl;
        return;
    }

    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    // Shift elements to fill the gap created by deletion
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;

    cout << "Element at position " << position << " deleted successfully." << endl;
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5;

    // Deletion
    deleteElement(arr, size, 2); // Delete element at position 2

    cout << "Array after deletion:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
