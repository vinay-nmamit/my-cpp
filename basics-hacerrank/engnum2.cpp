#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> s = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    int a, b;

    cin >> a >> b;

    cout << s[a - 1] << endl;

    for(int i = a+1 ; i <= b ; i++){
        if(i >= 10){
            if(i % 2 == 0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }

        else{
            cout << s[i - 1] << endl;
        }
    }

}