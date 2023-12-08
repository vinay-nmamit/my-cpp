/*Find the minimum element in the unsorted array and swap it with the beginning*/

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

    for(int i = 0; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "The sorted array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}