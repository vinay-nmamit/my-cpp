#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int myarray[size];

    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }

    if (myarray[size - 1] % 10 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
