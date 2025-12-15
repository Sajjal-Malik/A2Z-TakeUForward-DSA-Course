#include <bits/stdc++.h>
using namespace std;

// Function to recursively check for a palindrome.
bool pallindromeCheck(int i, string &str, int size)
{
    // Base case: If the index 'i' has reached the middle of the string or passed it,
    // all corresponding characters have successfully been compared.
    if (i >= size / 2)
    {
        return true;
    }
    // Check if the characters at the current start index (i) and corresponding end index (size - i - 1) do not match.
    if (str[i] != str[size - i - 1])
    {
        return false; // If they don't match, it's not a palindrome.
    }
    // !! LOGIC ERROR START:
    // This swap operation is incorrect for simply *checking* a palindrome; it permanently changes the string characters.
    swap(str[i], str[size - i - 1]);
    // This recursive call calculates a value but does not return it to the caller function,
    // leading to undefined behavior or an implicit 'void' return in some contexts.
    pallindromeCheck(i + 1, str, size);
    // !! LOGIC ERROR END
}

int main()
{

    string str = "madam";
    int size = str.size();
    // Call the palindrome check function using the initial index (0), the string, and its size.
    // Due to the function's internal errors, the result here might be unreliable.
    if (pallindromeCheck(0, str, size))
    {
        cout << "This is string is Pallindrome" << endl;
    }
    else
    {
        cout << "This string is not a Pallindrome" << endl;
    }
    return 0;
}