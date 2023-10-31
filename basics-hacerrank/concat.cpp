#include <iostream>
using namespace std;

int main() {
    string fname = "vinay";
    string lname = "kumar";
    string fullname = fname + " " + lname;
    string full = fname.append(lname);
    cout << "" << fullname << endl;
    cout << "" << full << endl;
    return 0;
}