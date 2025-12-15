#include <bits/stdc++.h>
using namespace std;

// Function to calculate the factorial of a non-negative integer 'n'
// This function uses recursion to solve the problem.
int factorial(int n)
{
    // Base case: the factorial of 0 is defined as 1.
    // This condition is crucial for stopping the infinite chain of recursive calls.
    if (n == 0)
    {
        return 1;
    }
    // Recursive step: the factorial of n (for n > 0) is n multiplied by the factorial of (n - 1).
    // The function calls itself with a reduced input (n - 1), moving closer to the base case (n == 0).
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // Calculate the factorial of the input number and print the result to the console
    cout << factorial(n) << endl;

    return 0;
}