#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createNewDocument() {
    cout << "Creating a new document..." << endl;
    // You can add code here to initialize a new document
}

void openDocument() {
    cout << "Opening an existing document..." << endl;
    // You can add code here to open an existing document
}

void editDocument() {
    cout << "Editing the document..." << endl;
    // You can add code here to allow the user to edit the document
}

void saveDocument() {
    cout << "Saving the document..." << endl;
    // You can add code here to save the document to a file
}

int main() {
    char choice;

    do {
        cout << "==== Word Editor ====" << endl;
        cout << "1. Create New Document" << endl;
        cout << "2. Open Document" << endl;
        cout << "3. Edit Document" << endl;
        cout << "4. Save Document" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                createNewDocument();
                break;
            case '2':
                openDocument();
                break;
            case '3':
                editDocument();
                break;
            case '4':
                saveDocument();
                break;
            case '5':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '5');

    return 0;
}
