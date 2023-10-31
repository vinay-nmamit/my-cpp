#include <iostream>
using namespace std;

int main() {
    int mynumbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(mynumbers);
    cout << size << endl;
    int length = sizeof(mynumbers) / sizeof(int);
    cout << length << endl;
}