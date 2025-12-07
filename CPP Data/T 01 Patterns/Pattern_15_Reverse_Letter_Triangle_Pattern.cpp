#include<bits/stdc++.h>
using namespace std;

// B C D E 
// A B C D
// A B C
// A B
// A

void reverseLetterTrianglePattern(int n)
{

    for(int i = 1; i <= n; i++) {

        for(char character = 'A'; character <= 'A' + (n - i); character++)
        {
            cout << character << " ";
        }

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the Reverse Letter Triangle pattern: ";
    cin >> n;

    reverseLetterTrianglePattern(n);
    
    return 0;
}