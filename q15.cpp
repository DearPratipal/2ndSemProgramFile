#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class ShoppingList {
private:
    struct Item {
        int codeNo;
        double price;
    };

    vector<Item> items;

public:
    // Function to add an item to the list
    void addItem(int codeNo, double price) {
        Item newItem;
        newItem.codeNo = codeNo;
        newItem.price = price;
        items.push_back(newItem);
        cout << "Item added to the list." << endl;
    }

    // Function to delete an item from the list based on its code number
    void deleteItem(int codeNo) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->codeNo == codeNo) {
                items.erase(it);
                cout << "Item with code number " << codeNo << " deleted from the list." << endl;
                return;
            }
        }
        cout << "Item with code number " << codeNo << " not found in the list." << endl;
    }

    // Function to print the total value of the order
    void printTotalOrderValue() {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.price;
        }
        cout << "Total value of the order: $" << fixed << setprecision(2) << total << endl;
    }
};

int main() {
    ShoppingList shoppingList;

    // Adding items to the list
    shoppingList.addItem(101, 10.50);
    shoppingList.addItem(102, 20.75);
    shoppingList.addItem(103, 15.25);

    // Deleting an item from the list
    shoppingList.deleteItem(102);

    // Printing the total value of the order
    shoppingList.printTotalOrderValue();

    return 0;
}
