#include<bits/stdc++.h>
using namespace std;

// *
// * *
// * * *
// * * * *
// * * * * *

void printRightAngledTrianglePattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the right-angled triangle pattern: ";
    cin >> n;

    printRightAngledTrianglePattern(n);

    return 0;
}