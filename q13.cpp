/* Write a program to show the use of string manipulation functions : strcpy(), strlen(), strcat(), strrev(), strlwr(). */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];
    char combinedStr[200];

    // strcpy() - Copying a string
    strcpy(str1, "Hello");
    cout << "str1 after strcpy(): " << str1 << endl;

    // strlen() - Getting the length of a string
    int length = strlen(str1);
    cout << "Length of str1: " << length << endl;

    // strcat() - Concatenating two strings
    strcpy(str2, " World!");
    strcat(str1, str2);
    cout << "str1 after strcat(): " << str1 << endl;

    // strrev() - Reversing a string
    cout << "Reversing str1 using strrev(): ";
    for (int i = length - 1; i >= 0; --i) {
        cout << str1[i];
    }
    cout << endl;

    // strlwr() - Converting string to lowercase
    cout << "Converting str1 to lowercase using strlwr(): ";
    for (int i = 0; i < length; ++i) {
        cout << (char)tolower(str1[i]);
    }
    cout << endl;

    return 0;
}
