#include <bits/stdc++.h>
using namespace std;

// Function to print numbers from 1 to n (inclusive) going forward,
// and then print them from n down to 1 (inclusive) coming backward,
// creating a sequence like 1 2 ... n n ... 2 1.
void printBothWays(int i, int n)
{
    // Base case: Stop the recursion when the current number 'i' exceeds the limit 'n'.
    if (i > n)
        return;

    // Action during the forward phase (before the recursive call):
    // Print the current number 'i'. This builds the sequence 1, 2, ..., n.
    cout << i << " ";

    // Recursive call: Move to the next number. This pushes the current state onto the call stack.
    printBothWays(i + 1, n);

    // Action during the backward phase (after the recursive call returns):
    // When the stack unwinds (coming back from the base case),
    // print the current number 'i' again. This builds the sequence n, ..., 2, 1.
    cout << i << " ";
}

int main()
{

    int n;
    cin >> n;

    // Start the recursive process with i=1 and the user-provided n
    printBothWays(1, n);
    // For n=3, the output will be: 1 2 3 3 2 1

    return 0;
}
