/* If the key element is equal to the array index then return index */

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "enter the size of the elements: ";
    cin >> size;

    int arr[size];
    cout << "enter the element into the array: "; 
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "enter the element to be found: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    cout << "position : " << result << endl;
    return 0;
}