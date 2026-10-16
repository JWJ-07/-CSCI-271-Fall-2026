#include <iostream> // Include the input-output stream library for cin and cout

using namespace std; // Use the standard namespace to avoid prefixing std::

int main() { // Main function where program execution begins
    const int SIZE = 5; // Define a constant size of 5 for the array
    int scores[SIZE]; // Declare an integer array of size 5 to store test scores
    int sum = 0; // Initialize sum accumulator variable to 0
    
    // Loop to read 5 scores from the user
    for (int i = 0; i < SIZE; i++) { // Iterate from index 0 to SIZE - 1
        cout << "Enter score " << i + 1 << ": "; // Tells the user to put the current score number
        cin >> scores[i]; // Read user input into the array at the current index
        sum += scores[i]; // Add the entered score to the running total sum
    }
    
    int highest = scores[0]; // Initialize highest score to the first element
    int lowest = scores[0]; // Initialize lowest score to the first element
    
    // Loop through the rest of the array to find max and min
    for (int i = 1; i < SIZE; i++) { // Start loop from index 1 since index 0 is already checked
        if (scores[i] > highest) { // Check if the current score is greater than the current highest
            highest = scores[i]; // Update highest if a larger score is found
        }
        if (scores[i] < lowest) { // Check if the current score is less than the current lowest
            lowest = scores[i]; // Update lowest if a smaller score is found
        }
    }
    
    double average = static_cast<double>(sum) / SIZE; // Calculate average as a double to preserve decimals
    
    cout << "Scores: "; // Print label for the scores list
    for (int i = 0; i < SIZE; i++) { // Loop to print each score separated by a space
        cout << scores[i] << (i < SIZE - 1 ? " " : ""); // Print space between scores but not at the end
    }
    cout << endl; 
    
    cout << "Sum: " << sum << endl; // Print the total sum of the scores
    cout << "Average: " << average << endl; // Print the calculated average
    cout << "Highest: " << highest << endl; // Print the highest score found
    cout << "Lowest: " << lowest << endl; // Print the lowest score found
    
    return 0; 
}
