#include <bits/stdc++.h>
using namespace std;

// Function to print numbers from i up to n using recursion.
void printNum(int i, int n)
{
    // Base case: If the current number 'i' exceeds the limit 'n', stop the recursion.
    if (i > n)
    {
        return;
    }
    // Print the current number followed by a newline.
    cout << i << endl;
    // Recursive step: Call the function again with an incremented 'i'.
    // The expression 'i += 1' increments 'i' *before* it is passed as an argument
    // to the next function call.
    printNum(i += 1, n);
}

int main()
{

    int n;
    cin >> n;

    // Start the printing process by calling the function with the starting number 1 and the limit n.
    printNum(1, n);

    return 0;
}