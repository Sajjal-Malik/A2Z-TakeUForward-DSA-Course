#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a integer variable to store the input integer from the user.
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    // pre-computationg here
    map<int, int> mpp;
    for (int i = 0; i < num; i++)
    {
        mpp[arr[i]]++; // increment the count of the value searching for
    }

    // iterate on the map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    // --- Query Phase ---
    // Declare an integer variable to store the number of queries the user wants to make.
    int num_queries;
    cout << "Enter the number of characters you want to count: ";
    cin >> num_queries;

    // Loop for the specified number of queries.
    while (num_queries--)
    {
        // Declare a number variable to store the query number.
        int query_number;
        cin >> query_number;

        // fetch the occurence / frequency of the number
        cout << mpp[query_number];
    }

    return 0;
}