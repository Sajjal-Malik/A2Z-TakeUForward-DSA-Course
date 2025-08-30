#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int size) {

    if(i >= size / 2){
        return;
    }

    swap(arr[i], arr[size - i - 1]);
    reverseArray(i + 1, arr, size);
}

int main(){

    int arr[] = {2, 5, 7, 3, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(0, arr, size);
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}