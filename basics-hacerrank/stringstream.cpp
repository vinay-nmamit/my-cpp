#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseNumbers(const string& input) {
    vector<int> parsedNumbers;
    istringstream ss(input);
    string token;

    // Parse integers delimited by commas and store them in the vector
    while (getline(ss, token, ',')) {
        int num;
        if (istringstream(token) >> num) {
            parsedNumbers.push_back(num);
        } else {
            cerr << "Invalid input: " << token << " is not a valid integer.\n";
        }
    }

    return parsedNumbers;
}

int main() {
    string input;
    getline(cin, input);

    vector<int> parsedNumbers = parseNumbers(input);

    // Print the parsed integers
    for (const int& num : parsedNumbers) {
        cout << num << "\n";
    }
    
    return 0;
}
