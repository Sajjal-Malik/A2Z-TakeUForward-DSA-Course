#include <bits/stdc++.h>
using namespace std;

void checkSumAndPalindrome(int n) {
    if (n < 0) {
        cout << "Note: Taking absolute value of input." << endl;
        n = abs(n);  // for abs value
    }

    int sum = 0;
    int originalNumber = n;
    int reverseNumber = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        sum += lastDigit;
        reverseNumber = (reverseNumber * 10) + lastDigit;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    if (originalNumber == reverseNumber) {
        cout << "Is a Palindrome: Yes" << endl;
    } else {
        cout << "Is a Palindrome: No" << endl;
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (!cin) { // Handle invalid input (e.g., "abc")
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    checkSumAndPalindrome(n);
    return 0;
}