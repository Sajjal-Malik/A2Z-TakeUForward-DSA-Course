#include <bits/stdc++.h>
using namespace std;

void printBothWays(int i, int n) {
    if (i > n) 
        return; // Base case
    
    // Print while going down (forward)
    cout << i << " ";
    
    // Recursive call
    printBothWays(i + 1, n);
    
    // Print while coming back (backward)
    cout << i << " ";
}

int main() {
    
    int n;
    cin >> n;

    printBothWays(1, n);

    return 0;
}
