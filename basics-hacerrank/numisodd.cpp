#include <iostream>
using namespace std;
bool numisodd(int a);

bool numisodd(int a){
    
    return (a & 1) == true;
}

int main(){
    int a;

    cin >> a;

    bool res = numisodd(a);

    if(numisodd(a)){
        cout << "The number is an odd number" << endl;
    } else {
        cout << "The number is not an odd number" << endl;
    }

    return 0;
}