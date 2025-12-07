#include<bits/stdc++.h>
using namespace std;


void increasingLetterTrianglePattern(int n)
{

    for(int i = 1; i <= n; i++) {

        for(char character = 'A'; character <= 'A' + i - 1; character++){

            cout << character << " ";
        }

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the increasing Letter Triangle pattern: ";
    cin >> n;

    increasingLetterTrianglePattern(n);
    
    return 0;
}