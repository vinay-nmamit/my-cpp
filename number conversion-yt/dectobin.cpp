// decimal to binary conversion 

#include <iostream>
using namespace std;

string dectobin(int a){
    string binaryrep = "";

    if(a == 0)
        return 0;
    
    while(a > 0){
        int rem = a % 2;
        binaryrep = to_string(rem) + binaryrep;
        a /= 2;
    }
    return binaryrep;
}

int main(){
    int a;
    cout << "Enter decimal number: ";
    cin >> a;

    if(a < 0){
        cout << "Negative number!!! not supported" << endl;
    } else {
        string binary = dectobin(a);
        cout << "Binary representation: " << binary << endl;
    }
    return 0;
}