// Joshua Williams-Jack
// Assignment 4

#include <iostream>
using namespace std;

int main() {
    // Variable to store the person's menu choice
    int choice;

    // do...while loop ensures the message displays at least once
    do {
        // Tells the person to enter a choice
        cout << "Enter a menu choice (1, 2, or 3): ";
        cin >> choice;

        // Check if the input is outside the valid range [1, 3]
        if (choice < 1 || choice > 3) {
            cout << "Invalid choice, try again." << endl;
        }

    // Keep repeating as long as the person enters an invalid number
    } while (choice < 1 || choice > 3);

    // Output confirmation after a valid choice is entered
    cout << "You selected option " << choice << "." << endl;

    return 0;
}

