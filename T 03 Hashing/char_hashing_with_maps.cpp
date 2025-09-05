#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    // pre-computationg here
    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;  // increment the count of the value searching for
    }

    // iterate on the map
    for(auto it: mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;

    while(q--) {
        char c;
        cin >> c;

        // fetch the occurence / frequency of the character
        cout << mpp[c];
    }

    return 0;
}