// This C++ program converts a decimal number to a hexadecimal string.

#include <iostream>
using namespace std;

// Function to convert a decimal integer to a hexadecimal string
string decToHex(int n) {
    int x = 1;       // Temporary variable to determine the highest power of 16
    string ans = ""; // String to store the hexadecimal result

    // Find the highest power of 16 that is less than or equal to n
    while (x <= n)
        x *= 16;
    x /= 16;

    // Convert decimal to hexadecimal using repeated division
    while (x > 0) {
        int lastDigit = n / x; // Calculate the most significant 4-bit nibble
        n -= lastDigit * x;   // Update n to the remainder after subtracting the nibble
        x /= 16;              // Decrease x by a factor of 16 for the next nibble
        
        if (lastDigit <= 9) {
            // If the digit is 0-9, convert it to a character and append to the result
            ans += to_string(lastDigit);
        } else {
            // If the digit is 10-15 (A-F), convert it to the corresponding character
            // and append to the result
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans; // Return the hexadecimal result as a string
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    // Call the decToHex function to convert the input and print the result
    cout << "Hexadecimal equivalent: " << decToHex(n) << endl;
    return 0;
}
