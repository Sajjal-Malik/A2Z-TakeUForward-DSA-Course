#include<bits/stdc++.h>
using namespace std;

// *********
//  *******
//   *****
//    ***
//     *

void invertedStarPyramidPattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i - 1; j++){
            cout << " ";
        }

        for(int j = 1; j <= 2 * n - (2 * i - 1); j++){
            cout << "*";
        }

        for(int j = 1; j <= i - 1; j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the inverted star pyramid pattern: ";
    cin >> n;

    invertedStarPyramidPattern(n);
    
    return 0;
}