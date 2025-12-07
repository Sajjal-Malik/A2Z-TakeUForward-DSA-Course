#include<bits/stdc++.h>
using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void printRightAngledNumberPatternII(int n)
{
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {

            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the number of rows for the right-angled number pyramid pattern II: ";
    cin >> n;

    printRightAngledNumberPatternII(n);
    
    return 0;
}