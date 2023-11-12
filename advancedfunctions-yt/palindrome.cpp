#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool ispalindrome(const string& str ){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    return str == reversed;
}

int main(){
    string input;

    cout << "Enter the string: ";
    getline(cin, input);

    if(ispalindrome(input)){
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}