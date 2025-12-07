#include<bits/stdc++.h>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

void printRectangularStarPattern(int n)
{
    for(int i = 1; i<= n; i++){

        for(int j = 1; j <= n; j++){

            cout << "* ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the rectangular start pattern: ";
    cin >> n;

    printRectangularStarPattern(n);

    return 0;
}