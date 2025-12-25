#include <bits/stdc++.h>
using namespace std;

/*
    Function: calculateFactorial
    Purpose : Computes factorial of a non-negative integer using recursion.
    Formula : n! = n * (n-1)! , with 0! = 1
*/
int calculateFactorial(int number)
{
    // Base case:
    // Factorial of 0 is 1, stops recursion
    if (number == 0)
    {
        return 1;
    }

    // Recursive case:
    // Multiply current number with factorial of (number - 1)
    return number * calculateFactorial(number - 1);
}

int main()
{
    int inputNumber;
    cin >> inputNumber;

    cout << calculateFactorial(inputNumber) << endl;
    return 0;
}
