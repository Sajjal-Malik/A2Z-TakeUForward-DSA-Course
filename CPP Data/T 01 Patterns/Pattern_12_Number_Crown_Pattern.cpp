#include<bits/stdc++.h>
using namespace std;

// 1      1
// 12    21
// 123  321
// 12344321

void numberCrownPattern(int n)
{

    int spaces = 2 * (n - 1);

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {

            cout << j;
        }

        for(int j = 1; j <= spaces ; j++){
            
            cout << " ";
        }

        for(int j = i; j >= 1; j--) {

            cout << j;
        }

        cout << endl;
        spaces -= 2;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the Number crown pattern: ";
    cin >> n;

    numberCrownPattern(n);
    
    return 0;
}