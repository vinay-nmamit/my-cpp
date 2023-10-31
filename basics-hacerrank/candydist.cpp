#include <iostream>
using namespace std;

int main() {
    int T, n , m;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> n >> m;
        if(n % m == 0){
            if((n / m) % 2 == 0){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
