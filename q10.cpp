#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

void multiplyMatrices(int matA[][MAX], int matB[][MAX], int result[][MAX], int m, int n, int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    int matA[MAX][MAX], matB[MAX][MAX], result[MAX][MAX];
    int m, n, p;

    cout << "Enter the number of rows of matrix A: ";
    cin >> m;
    cout << "Enter the number of columns of matrix A: ";
    cin >> n;

    cout << "Enter the number of rows of matrix B (which should be equal to the number of columns of matrix A): ";
    cin >> p;

    cout << "Enter elements of matrix A: " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matA[i][j];
        }
    }

    cout << "Enter elements of matrix B: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> matB[i][j];
        }
    }

    multiplyMatrices(matA, matB, result, m, n, p);

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
