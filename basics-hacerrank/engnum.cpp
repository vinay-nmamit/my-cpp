#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> s = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    int size = 2;
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < size; i++) {
            if(arr[i] <= 9)
                cout << s[arr[i] - 1] << endl;

            if(arr[i] > 9){
                 if (arr[i] % 2 == 0){
                     cout << "even\n";
                  } else {
                    cout << "odd" << endl;
                  }
            }
               
    }

    return 0;
}
