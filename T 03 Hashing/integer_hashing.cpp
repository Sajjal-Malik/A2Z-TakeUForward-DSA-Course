#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n]; // declaration of size n array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // input values in the array
    }

    // Pre-computation here for storing the values according to hashed (mapped) values
    int hash[13] = {0};   // {0,0,0,0,0,0,0,0,0,0,0,0,0}  // hash array with all zero values initialized
                        //   | | | | | | | | | | | | |
                        // 0 1 2 3 4 5 6 7 8 9 10 11 12  // indexes
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;  // increasing the number of occurence of the value from the array
    }

    int query;
    // input the query (number of elements you want to look for)
    cin >> query;

    while(query--) {
        int number;
        // input the number you want to check for in the hash array (if it's there increase it's count)
        cin >> number;
        
        cout << hash[number] << endl;
    }

    return 0;
}