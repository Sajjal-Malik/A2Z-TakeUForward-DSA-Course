#include<bits/stdc++.h>
using namespace std;

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

void increasingNumberTrianglePattern(int n)
{

    int number = 1;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++){

            cout << number << " ";
            number += 1;        

        }

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the increasing Number Triangle pattern: ";
    cin >> n;

    increasingNumberTrianglePattern(n);
    
    return 0;
}