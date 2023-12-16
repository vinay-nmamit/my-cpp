#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}