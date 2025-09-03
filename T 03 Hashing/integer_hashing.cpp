#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-computation here for storing the values according to hashed (mapped) values
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int query;
    cin >> query;
    while(query--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }

    return 0;
}