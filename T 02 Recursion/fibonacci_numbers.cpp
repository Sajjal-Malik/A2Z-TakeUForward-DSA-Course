#include <bits/stdc++.h>
using namespace std;

// Function to calculate the n-th Fibonacci number using recursion.
// The Fibonacci sequence typically starts: 0, 1, 1, 2, 3, 5, ...
int fibonacciNumber(int n)
{
    // Base cases:
    // If n is 0 or 1, the function returns n itself (F(0) = 0, F(1) = 1).
    // These conditions stop the recursion.
    if (n <= 1)
    {
        return n;
    }
    // Recursive step: the n-th Fibonacci number is the sum of the (n-1)-th and (n-2)-th numbers.
    // The function calls itself twice, creating a binary recursion tree.

    // Calculate the (n-1)-th Fibonacci number
    int firstValue = fibonacciNumber(n - 1);

    // Calculate the (n-2)-th Fibonacci number
    int secondValue = fibonacciNumber(n - 2);

    // Return the sum of the two preceding numbers
    return firstValue + secondValue;
}

int main()
{

    int n;
    cin >> n;

    // Calculate the fibonacci of the input number and print the result to the console
    cout << fibonacciNumber(n);

    return 0;
}