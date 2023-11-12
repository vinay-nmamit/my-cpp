#include <iostream>
using namespace std;

// Function to add two binary numbers
int addBinary(int a, int b) {
    int ans = 0;          // Initialize the result
    int carry = 0;        // Initialize the carry
    int multiplier = 1;   // Used to determine the position of the current bit

    // Continue the loop until both input numbers and any carry are processed
    while (a > 0 || b > 0 || carry > 0) {
        int bitA = a % 10;  // Extract the rightmost bit of a
        int bitB = b % 10;  // Extract the rightmost bit of b

        // Calculate the sum of the current bits and the carry
        int sum = bitA + bitB + carry;

        // Update the result by adding the current bit to the appropriate position
        ans = ans + (sum % 2) * multiplier;

        // Update the carry for the next iteration
        carry = sum / 2;

        // Move to the next bit in both input numbers
        a /= 10;
        b /= 10;

        // Move to the next bit position in the result
        multiplier *= 10;
    }

    return ans;  // Return the final result
}

// Main function
int main() {
    int a, b;

    // Input two binary numbers
    cout << "Enter two binary numbers: ";
    cin >> a >> b;

    // Add the binary numbers and display the result
    int res = addBinary(a, b);
    cout << "Sum of binary numbers: " << res << endl;

    return 0;
}
