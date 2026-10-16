// Name: Joshua Williams-Jack
// Assignment 5

#include <iostream> 

using namespace std; 

// Function prototypes for forward declaration
void printForward(const int arr[], int size); // Prototype to print array in order
void printReverse(const int arr[], int size); // Prototype to print array in reverse
int countAbove(const int arr[], int size, int limit); // Prototype to count elements greater than limit

int main() { // Main function execution block
    const int SIZE = 6; // Define constant array size of 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Initialize array with specified values
    
    cout << "Forward: "; // Print label for forward display
    printForward(values, SIZE); // Call function to print array elements forward
    
    cout << "Reverse: "; // Print label for reverse display
    printReverse(values, SIZE); // Call function to print array elements in reverse order
    
    int limit; // Declare variable to store the threshold limit input
    cout << "Count values above: "; // Prompt user for the limit value
    cin >> limit; // Read user input for the limit
    
    int count = countAbove(values, SIZE, limit); // Call function to count elements above limit and store result
    cout << "Count: " << count << endl; // Print the resulting count
    
    return 0; // Return 0 to indicate successful completion
}

// Function definition to print array elements in normal order
void printForward(const int arr[], int size) {
    for (int i = 0; i < size; i++) { // Loop from index 0 up to size - 1
        cout << arr[i] << (i < size - 1 ? " " : ""); // Print each element with a space separator
    }
    cout << endl; // Print newline after finishing the loop
}

// Function definition to print array elements in reverse order
void printReverse(const int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) { // Loop backwards from size - 1 down to 0
        cout << arr[i] << (i > 0 ? " " : ""); // Print each element with a space separator
    }
    cout << endl; // Print newline after finishing the loop
}

// Function definition to count how many elements are strictly greater than the limit
int countAbove(const int arr[], int size, int limit) {
    int count = 0; // Initialize local counter to 0
    for (int i = 0; i < size; i++) { // Loop through each element of the array
        if (arr[i] > limit) { // Check if the current element is greater than the limit
            count++; // Increment the counter if condition is met
        }
    }
    return count; // Return the final tally of matching elements
}
