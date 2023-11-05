//to find the sum of n natural numbers

#include <iostream>
using namespace std;

int findsum(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    cout << findsum(n) << endl;
    return 0;
}