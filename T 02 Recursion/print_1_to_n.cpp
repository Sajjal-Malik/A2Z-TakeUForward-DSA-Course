#include<bits/stdc++.h>
using namespace std;

void printNum(int i, int n) {
    if(i > n) {
        return;
    }
    cout << i << endl;
    printNum(i += 1, n);
}

int main(){

    int n;
    cin >> n;

    printNum(1, n);

    return 0;
}