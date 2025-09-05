#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    
    // Pre-computation here for storing the values according to hashed (mapped) values
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int query;
    cin >> query;
    while(query--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}