#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declare a string variable to store the input string from the user.
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;

    // --- Pre-computation Phase (Using a Map) ---
    // Create a map (associative container) to store character frequencies.
    // Keys are characters, values are their integer counts, offering flexible handling
    // of any ASCII character, not just lowercase English letters.
    map<char, int> frequency_map;

    // Iterate through the entire input string.
    for (int i = 0; i < input_string.size(); i++)
    {
        // Access the map using the character as the key. If the key doesn't exist,
        // it is created automatically with a default value of 0, which is then incremented.
        frequency_map[input_string[i]]++;
    }

    // --- Display Frequencies (Optional) ---
    cout << "Character frequencies in the string:" << endl;
    // Iterate over all key-value pairs stored in the map using a range-based for loop.
    for (auto const &pair : frequency_map)
    {
        // 'pair.first' is the character, 'pair.second' is its count.
        cout << pair.first << " -> " << pair.second << endl;
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

        // Fetch the occurrence/frequency of the character from the map.
        // If the character is not found, map access will return the default
        // value for int, which is 0.
        cout << "Frequency of '" << query_char << "': ";
        cout << frequency_map[query_char] << endl;
    }

    return 0;
}
