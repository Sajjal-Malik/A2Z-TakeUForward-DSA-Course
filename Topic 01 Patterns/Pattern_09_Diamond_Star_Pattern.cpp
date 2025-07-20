#include<bits/stdc++.h>
using namespace std;


void starPyramidPattern(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        for(int j = 1; j <= (2 * i - 1); j++){
            cout << "*";
        }

        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

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
    cout << "Enter the number of rows for the Diamond star pyramid pattern: ";
    cin >> n;

    starPyramidPattern(n);
    invertedStarPyramidPattern(n);
    
    return 0;
}