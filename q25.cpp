#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");

    if (!outFile.is_open()) {
        cerr << "Failed to open the file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a line written to the file." << endl;
    outFile << "This is another line." << endl;

    outFile.close();

    // Reading from a file
    ifstream inFile("example.txt");

    if (!inFile.is_open()) {
        cerr << "Failed to open the file!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
