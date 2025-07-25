#include <bits/stdc++.h>
using namespace std;

// A 
// B B
// C C C
// D D D D
// E E E E E

void alphaRamprTrianglePattern(int n)
{
    char character = 'A';

    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout << character << " ";
        }

        cout << endl;
        character++;
    }
}

int main()
{

    int n;
    cout << "Enter the number of rows for the Alpha Ramp Triangle pattern: ";
    cin >> n;

    alphaRamprTrianglePattern(n);

    return 0;
}