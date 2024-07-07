#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void bubbleSort(vector<T>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    // Test with integer values
    vector<int> intArr = {5, 2, 9, 1, 6};
    cout << "Original array (integer): ";
    for (int num : intArr) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(intArr);

    cout << "Sorted array (integer): ";
    for (int num : intArr) {
        cout << num << " ";
    }
    cout << endl;

    // Test with double values
    vector<double> doubleArr = {3.5, 2.2, 1.1, 5.5, 4.4};
    cout << "Original array (double): ";
    for (double num : doubleArr) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(doubleArr);

    cout << "Sorted array (double): ";
    for (double num : doubleArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
