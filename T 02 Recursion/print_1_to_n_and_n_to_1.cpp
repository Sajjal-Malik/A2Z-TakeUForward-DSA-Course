#include <bits/stdc++.h>
using namespace std;

void printBothWays(int i, int n)
{
    // Base case
    if (i > n)
        return;

    // Print while going away (forward)
    cout << i << " ";

    // Recursive call
    printBothWays(i + 1, n);

    // Print while coming back (backward)
    cout << i << " ";
}

int main()
{

    int n;
    cin >> n;

    printBothWays(1, n);

    return 0;
}
