// Name: Joshua Williams-Jack
// Assignment 5: search_count.cpp

#include <iostream> // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() { // Main function entry point
    const int SIZE = 10; // Define a constant size of 10 for the data array
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Initialize the fixed array with specified values
    
    int target; // Declare a variable to store the number the user wants to search for
    cout << "Enter a number to search for: "; // Prompt the user for the target number
    cin >> target; // Read the target number from user input
    
    int foundIndex = -1; // Initialize foundIndex sentinel to -1 (indicating not found yet)
    int count = 0; // Initialize occurrence counter to 0
    
    // Loop through each element in the array to search for the target
    for (int i = 0; i < SIZE; i++) { // Iterate from index 0 to SIZE - 1
        if (data[i] == target) { // Check if the current array element matches the target
            count++; 
            if (foundIndex == -1) { // Check if this is the first time the target has been matched
                foundIndex = i; // Record the index of the first match and do not overwrite it later
            }
        }
    }
    
    // Check if the target was found in the array
    if (foundIndex != -1) { // If foundIndex is not -1, the target exists in the array
        cout << target << " first found at index " << foundIndex << endl; // Print the first occurrence index
        cout << target << " appears " << count << " time(s)" << endl; // Print total number of occurrences
    } else { // If foundIndex is still -1, the target was never matched
        cout << target << " was not found." << endl; // Print message indicating target is missing
    }
    
    return 0; 
}
