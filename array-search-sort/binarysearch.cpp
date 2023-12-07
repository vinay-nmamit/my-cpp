#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            end = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key element to be found: ";
    cin >> key;

    cout << "Element found at the position: "<< binarySearch(arr, n, key) << endl;

    return 0;
}