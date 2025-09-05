#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre-computationg here
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;  // increment the count of the value searching for
    }

    // iterate on the map
    for(auto it: mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;

    while(q--) {
        int number;
        cin >> number;

        // fetch the occurence / frequency of the number
        cout << mpp[number];
    }

    return 0;
}