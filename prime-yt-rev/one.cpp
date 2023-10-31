#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if n is less than 2
    if (n < 2) {
        cout << "Not a Prime Number" << endl;
        return 0;                    // Exit the program
    }

    bool flag = false;          // Initialize a flag to track whether n is prime

    // Iterate from 2 to the square root of n to check for factors
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "Not a Prime Number" << endl;
            flag = true;            // Set the flag to true if a factor is found
            break;              // Exit the loop since n is not prime
        }
    }

    // Check the flag to determine if n is prime or not
    if (!flag) {
        cout << "Prime Number" << endl;
    }

    return 0;
}
