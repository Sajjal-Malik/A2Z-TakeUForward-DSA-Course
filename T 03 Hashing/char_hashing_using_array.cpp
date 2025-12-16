#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declare a string variable to store the input string from the user.
    string input_string;
    cout << "Enter a string (lowercase letters only): ";
    cin >> input_string;

    // --- Pre-computation Phase ---
    // Create an array (acting as a hash map/frequency array) of size 26,
    // initialized to zeros. This maps lowercase English letters 'a' through 'z'
    // to counts (index 0 through 25).
    int char_counts[26] = {0};

    // Iterate through the entire input string to count the occurrences of each character.
    for (int i = 0; i < input_string.size(); i++)
    {
        // The expression `s[i] - 'a'` converts a character (e.g., 'b') into an
        // integer index (e.g., 'b' - 'a' = 1).
        char_counts[input_string[i] - 'a']++;
    }

    // --- Query Phase ---
    // Declare an integer variable to store the number of queries the user wants to make.
    int num_queries;
    cout << "Enter the number of characters you want to count: ";
    cin >> num_queries;

    // Loop for the specified number of queries.
    while (num_queries--)
    {
        // Declare a character variable to store the query character.
        char query_char;
        cout << "Enter a character to find its frequency: ";
        cin >> query_char;

        // Use the pre-computed frequency array to instantly look up the count
        // of the queried character and print it.
        cout << "Frequency of '" << query_char << "': ";
        cout << char_counts[query_char - 'a'] << endl;
    }

    return 0;
}
