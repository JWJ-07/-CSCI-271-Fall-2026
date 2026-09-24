// Joshua Williams-Jack
// Assignment 3
#include <iostream> 
using namespace std;

int main() {
  int temp; 
  cout << "Enter the temperature (F): "; // Tells user to enter farenheit temp
  cin >> temp; //Puts # of temp user typed in

 if (temp < 32)
     cout << "That's freezing!" << endl;
   else if (temp <= 59)  // Checks if temperature is between 32 and 59 
        cout << "That's Cold." << endl; // Prints "That's Cold." if the condition is true
    else if (temp <= 75)  // Checks if temperature is between 60 and 75 
        cout << "That's Mild." << endl; // Prints "That's Mild." if the condition is true
    else { // Catches any temperature 76 and above
        cout << "That's Hot." << endl; // Prints "That's Hot." for everything else 
    } // Closes the if/else if/else block
    
    return 0; } // Signals that the program ended successfully
