#include <bits/stdc++.h>
using namespace std;

void countDigitsInNumber(int n)
{
    int count = 0;
    int originalNumber = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        count++;
        n /= 10;
    }
    cout << "The total number of digits in " << originalNumber << " are: " << count << endl;
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    countDigitsInNumber(n);

    return 0;
}