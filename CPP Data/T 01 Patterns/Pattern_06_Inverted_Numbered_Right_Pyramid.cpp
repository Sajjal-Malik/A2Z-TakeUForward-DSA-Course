#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

void invertedNumberRightPyramidPattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i + 1; j++){

            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the inverted number right pyramid pattern: ";
    cin >> n;

    invertedNumberRightPyramidPattern(n);
    
    return 0;
}