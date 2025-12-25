#include <bits/stdc++.h>
using namespace std;

/*
    Function: isPalindrome
    Purpose : Checks whether a string is a palindrome using recursion
*/
bool isPalindrome(int leftIndex, string &text, int length)
{
    // Base case:
    // When left index reaches or crosses the middle
    if (leftIndex >= length / 2)
    {
        return true;
    }

    // If characters at both ends do not match
    if (text[leftIndex] != text[length - leftIndex - 1])
    {
        return false;
    }

    // Recursive call moving inward
    return isPalindrome(leftIndex + 1, text, length);
}

int main()
{
    string word = "madam";
    int length = word.size();

    if (isPalindrome(0, word, length))
    {
        cout << "This string is a Palindrome" << endl;
    }
    else
    {
        cout << "This string is NOT a Palindrome" << endl;
    }

    return 0;
}
