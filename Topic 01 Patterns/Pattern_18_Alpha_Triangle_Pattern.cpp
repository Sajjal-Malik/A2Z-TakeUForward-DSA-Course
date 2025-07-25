#include <bits/stdc++.h>
using namespace std;

// F 
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F 

void alphaTrianglePattern(int n)
{
    char endChar = 'A' + n - 1;  // 'F' for n=6

    for(int i = 1; i <= n; i++) {

        char startChar = endChar - (i - 1);  // Starting character of each row

        for(char character = startChar; character <= endChar; character++) {
            cout << character << " ";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows for the Alpha Triangle pattern: ";
    cin >> n;

    alphaTrianglePattern(n);
    
    return 0;
}
