#include<bits/stdc++.h>
using namespace std;

//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

void alphaHillPyramidPattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        char character = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for(int j = 1; j <= (2 * i - 1); j++){
            cout << character;
            if(j < breakpoint) 
                character++;
            else 
                character--;
        }

        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the Alpha Hill pyramid pattern: ";
    cin >> n;

    alphaHillPyramidPattern(n);
    
    return 0;
}