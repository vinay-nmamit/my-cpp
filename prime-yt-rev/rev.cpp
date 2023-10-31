#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;       //taking user input

    int rev = 0;    //initialise variable to store the revers number

    while(n > 0){
        int lastdig = n % 10;       //get the last digit
        rev = rev * 10 + lastdig;   //append the last digit to reversed number
        n = n / 10;         //remove the last digit from the original number
    }

    cout << rev << " " << endl;
    return 0;
}