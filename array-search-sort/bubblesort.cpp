/* Repeatedly swap two adjascent elements if they are in wrong order */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 1;
    while(count < n){
        for(int i = 0; i <= n - count; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}