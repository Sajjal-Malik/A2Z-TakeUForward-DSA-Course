#include<bits/stdc++.h>
using namespace std;

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void halfDiamondStarPyramidPattern(int n)
{
    for(int i = 1; i <= 2 * n - 1; i++) {

        int stars = i;

        if(i > n)
            stars = 2 * n - i;

        for(int j = 1; j <= stars; j++){

            cout << "*";
        }

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the Half Diamond star pyramid pattern: ";
    cin >> n;

    halfDiamondStarPyramidPattern(n);
    
    return 0;
}