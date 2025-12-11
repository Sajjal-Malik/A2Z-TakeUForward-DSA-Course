#include<bits/stdc++.h>
using namespace std;

void printName(int start, int n) {
    if(start > n) {
        return;
    }
    cout << "Malik" << endl;
    printName(start += 1, n);
}

int main(){

    int n;
    cin >> n;

    printName(1, n);

    return 0;
}