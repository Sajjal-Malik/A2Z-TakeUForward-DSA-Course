#include <bits/stdc++.h>
using namespace std;

// Function to print numbers from i down to 1 using recursion.
void printNum(int i)
{
    // Base case: Stop the recursion when the current number 'i' becomes less than 1.
    if (i < 1)
    {
        return;
    }
    // Print the current number followed by a newline.
    cout << i << endl;
    // Recursive step: Call the function again with a decremented 'i'.
    // The expression 'i -= 1' decrements 'i' *before* it is passed as an argument
    // to the next function call.
    printNum(i -= 1);
}

int main()
{

    int n;
    cin >> n;

    // Start the printing process by calling the function with the user-provided 'n'.
    printNum(n); // For n=5, output will be: 5, 4, 3, 2, 1

    return 0;
}