// This C++ program converts a decimal number to a binary number.

#include <iostream>
using namespace std;

// Function to convert a decimal integer to a binary integer
int decToBin(int n) {
    int ans = 0;    // Variable to store the binary result
    int x = 1;      // Temporary variable to determine the highest power of 2

   
    while (x <= n)           // Find the highest power of 2 that is less than or equal to n
        x *= 2;
    x /= 2;

 
    while (x > 0) {            // Convert decimal to binary using repeated division
        int lastDigit = n / x;      // Calculate the most significant bit
        n -= lastDigit * x;         // Update n to the remainder after subtracting the bit
        x /= 2;                      // Decrease x by a factor of 2 for the next bit
        ans = ans * 10 + lastDigit;         // Build the binary result by appending bits
    }

    return ans; // Return the binary result
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    // Call the decToBin function to convert the input and print the result
    cout << "Binary equivalent: " << decToBin(n) << endl;
    return 0;
}
