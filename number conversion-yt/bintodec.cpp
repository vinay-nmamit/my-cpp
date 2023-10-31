//conversion of binary to decimal

#include <iostream>
using namespace std;

int bintodec(string& binary){
    int dec = 0;
    int base = 1;                 //initialise base value to 2^0

    for(int i = binary.length() - 1; i >=0; i--){       //loop through binary string from right to left i,e least significant bit(rightmost) to most significant bit(leftmost)
        if(binary[i] == '1'){                       //for each bit in binary string if the bit is '1' add the current base to dec
            dec += base;
        }
        base *= 2;                //double the base by 2 for next bit position
    }
    return dec;                 //returns the decimal representation of the binary number;
}

int main(){
    string binary;

    cout << "Enter the binary number: ";
    cin >> binary;

    bool valid = true;

    for(char bit : binary){
        if(bit != '0' && bit != '1'){
            cout << "Invalid binary input" << endl;
            valid = false;
            break;
        }
    }

    if(valid){
        int decimal = bintodec(binary);
        cout << "Decimal representation: " << decimal << endl;
    }

    return 0;
}