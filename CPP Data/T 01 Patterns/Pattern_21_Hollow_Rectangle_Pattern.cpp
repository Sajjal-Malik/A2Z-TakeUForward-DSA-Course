#include <bits/stdc++.h>
using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

void hollowRectanglePattern(int n)
{
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == n || j == n )
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the Hollow Rectangle Pattern: ";
    cin >> n;

    hollowRectanglePattern(n);

    return 0;
}
