#include <bits/stdc++.h>
using namespace std;

// Recursion using Parameterized Way:
// The sum is maintained and updated as an argument through the function calls.
// A corrected version would explicitly return the function's output. Below is the commented original structure:
int sumOfNNumbersParameterized(int i, int sum)
{
    // Base case: When 'i' becomes less than 1, we have iterated through all numbers 1 to n.
    // The accumulated 'sum' is returned from this final base case call.
    if (i < 1)
    {
        return sum;
    }
    // Recursive step: Call the function with a reduced 'i' (i-1) and an updated 'sum' (sum + i).
    // The value returned by this recursive call is ignored in the original code, causing a bug.
    sumOfNNumbersParameterized(i - 1, sum + i);
    // To fix this, a 'return' statement should be added before the recursive call:
    // return sumOfNNumbersParameterized(i - 1, sum + i);
}

// Recursion using the Functional Approach:
// The sum is calculated by returning values up the function call stack.
int sumOfNNumbersFunctional(int n)
{
    // Base case: When n reaches 0 or less, the sum is 0. This stops the recursion.
    if (n <= 0)
    {
        return 0;
    }

    // Recursive step: Return the current number 'n' plus the result of summing numbers from 1 to (n-1).
    // The values are added together as the function calls unwind from the stack.
    return n + sumOfNNumbersFunctional(n - 1);
}

int main()
{

    int n;
    cin >> n;

    // Call the parameterized function starting from n down to 1, with an initial sum of 0.
    cout << sumOfNNumbersParameterized(n, 0) << endl;

    // Call the functional approach function to calculate the sum of first 'n' natural numbers.
    cout << sumOfNNumbersFunctional(n) << endl;

    return 0;
}