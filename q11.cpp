#include <iostream>

using namespace std;

const int MAX = 100;

void replaceDiagonalWithZero(int mat[][MAX], int n) {
    for (int i = 0; i < n; ++i) {
        mat[i][i] = 0; // Set diagonal elements to zero
    }
}

int main() {
    int mat[MAX][MAX];
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    cout << "Enter elements of the square matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    replaceDiagonalWithZero(mat, n);

    cout << "Matrix with diagonal elements replaced by zero:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
