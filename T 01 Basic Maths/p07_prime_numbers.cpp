#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
void primeNumberBruteforce(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "Number is prime";
    else
        cout << "Number is not prime";
}

// Optimal Approach using -> SQRT(n)
void primeNumberOptimal(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
                count++;
        }
    }
    if (count == 2)
        cout << "Number is prime";
    else
        cout << "Number is not prime";
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    primeNumberBruteforce(n);

    return 0;
}