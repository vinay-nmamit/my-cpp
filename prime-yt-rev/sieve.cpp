#include <iostream>
#include <vector>

using namespace std;

// Function to find prime numbers up to the given limit 'n'
void sieveOfEratosthenes(int n) {
    // Create a boolean vector to mark numbers as prime or not
    vector<bool> isPrime(n + 1, true);

    // Loop to mark multiples of primes as not prime
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            // Mark multiples of 'p' as not prime
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Print the prime numbers
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number to find prime numbers up to that limit: ";
    cin >> n;
    sieveOfEratosthenes(n);

    return 0;
}
