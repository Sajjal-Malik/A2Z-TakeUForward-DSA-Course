#include<bits/stdc++.h>
using namespace std;

// * * * * *
// * * * *
// * * *
// * *
// *

void invertedRightPyramidPattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i + 1; j++){

            cout << "* ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the inverted right pyramid pattern: ";
    cin >> n;

    invertedRightPyramidPattern(n);
    
    return 0;
}