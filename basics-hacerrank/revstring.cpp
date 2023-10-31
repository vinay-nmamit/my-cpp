#include <iostream>
#include <string>
using namespace std;
void swapcharacter(string &myString1, string &myString2);

int main(){
    string myString1, myString2;

    cin >> myString1 >> myString2;

    cout << myString1.length() << " " << myString2.length() << "\n";

    cout << myString1 + myString2 << "\n";

    swapcharacter(myString1, myString2);
    
    cout << myString1 << " " << myString2;

    return 0;
}

void swapcharacter(string &myString1, string &myString2){
    if(!myString1.empty() && !myString2.empty()){
        char temp = myString1[0];
        myString1[0] = myString2[0];
        myString2[0] = temp;
    }
}