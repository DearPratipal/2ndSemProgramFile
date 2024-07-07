#include <iostream>
#include <windows.h> // For playing sound

using namespace std;

// Function to play sound corresponding to a piano key
void playSound(int key) {
    switch (key) {
        case 'a':
            Beep(261.63, 300); // C note
            break;
        case 's':
            Beep(293.66, 300); // D note
            break;
        case 'd':
            Beep(329.63, 300); // E note
            break;
        case 'f':
            Beep(349.23, 300); // F note
            break;
        case 'g':
            Beep(392.00, 300); // G note
            break;
        case 'h':
            Beep(440.00, 300); // A note
            break;
        case 'j':
            Beep(493.88, 300); // B note
            break;
        case 'k':
            Beep(523.25, 300); // C note (octave higher)
            break;
        default:
            cout << "Invalid key. Please try again." << endl;
    }
}

int main() {
    cout << "Press the following keys to play piano notes:" << endl;
    cout << "a - C" << endl;
    cout << "s - D" << endl;
    cout << "d - E" << endl;
    cout << "f - F" << endl;
    cout << "g - G" << endl;
    cout << "h - A" << endl;
    cout << "j - B" << endl;
    cout << "k - High C" << endl;
    cout << "Press 'q' to quit." << endl;

    char key;
    do {
        cin >> key;
        if (key != 'q') {
            playSound(tolower(key)); // Convert to lowercase to handle uppercase input
        }
    } while (key != 'q');

    return 0;
}
