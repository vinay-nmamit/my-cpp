#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int original = n;

    // Extract digits, raise to the power, and add to sum
    while (n > 0) {
        int lastdig = n % 10;               // Get the last digit of the number
        sum += round(pow(lastdig, 3));      // Raise the digit to the power of 3 and add to the sum
        n = n / 10;                         // Remove the last digit from the original number
    }

    // Check if the sum of digits raised to the power of 3 is equal to the original number
    if (sum == original) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
}
