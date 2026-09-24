// Joshua Williams-Jack
// Assignment 3
#include <iostream>
using namespace std;

int main() {
    int age; // Variable to store user's age
    int isMember; // Variable to store membership status (1 for yes, 0 for no)

    cout << "Enter your age: "; // Asks user for their age
    cin >> age; // Reads age input

    cout << "Are you a member? (1 = yes, 0 = no): "; // Asks user for membership status
    cin >> isMember; // Reads membership input

    // Checks if age is 60+ OR if age is 18+ and a member
    if (age >= 60 || (age >= 18 && isMember == 1)) {
        cout << "You qualify for the discount." << endl; // Prints success message if condition passes
    } else {
        cout << "You do not qualify for the discount." << endl; // Prints message if condition fails
    } // Closes if/else block

    return 0; // Signals successful program completion
}
