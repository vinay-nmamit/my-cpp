// This C++ program converts a hexadecimal number to a decimal number.

#include <iostream>
using namespace std;

// Function to convert a hexadecimal string to a decimal integer
int hexToDec(string n) {
    int ans = 0;                // Variable to store the answer
    int x = 1;                  // Temporary variable to store the current positional value
    int s = n.size();               // Get the length of the input hexadecimal string

    // Traverse the input string from right to left
    for (int i = s - 1; i >= 0; i--) {
        if (n[i] >= '0' && n[i] <= '9') {           // If the current character is a digit ('0' to '9'), convert and add it to the answer
            ans += x * (n[i] - '0');                    // Convert character to integer by subtracting '0'
        } else if (n[i] >= 'A' && n[i] <= 'F') {        // If the current character is an uppercase letter ('A' to 'F'), convert and add it to the answer
            ans += x * (n[i] - 'A' + 10);         // Convert character to integer, adjusting for hexadecimal values
        }
        x *= 16;                          // Increment the positional value by a factor of 16 for the next iteration
    }

    return ans;             // Return the decimal result
}

int main() {
    string n;
    cout << "Enter a hexadecimal number: ";
    cin >> n;

    // Call the hexToDec function to convert the input and print the result
    cout << "Decimal equivalent: " << hexToDec(n) << endl;
    return 0;
}
