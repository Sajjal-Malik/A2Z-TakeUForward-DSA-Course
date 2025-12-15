#include <bits/stdc++.h>
using namespace std;

// Function to print a specific name ('Malik') a total of 'n' times using recursion.
void printName(int start, int n)
{
    // Base case: Stop the recursion when the current iteration count ('start') exceeds the target count ('n').
    if (start > n)
    {
        return;
    }
    // Action: Print the string "Malik" followed by a newline.
    cout << "Malik" << endl;
    // Recursive step: Increment the counter 'start' and call the function again.
    // This repeats the process until the base case is met.
    printName(start += 1, n);
}

int main()
{

    int n;
    cin >> n;

    printName(1, n);

    return 0;
}