#include <iostream>
using namespace std;

string compareIfElse(int a, int b) {
    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";
}

int main() {
    int a, b;

    cin >> a >> b;

    string res = compareIfElse(a, b);

    cout << res << endl;

    return 0;
}
