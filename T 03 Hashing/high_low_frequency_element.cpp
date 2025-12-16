#include <bits/stdc++.h>
using namespace std;

void analyzeFrequency(int input_array[], int array_size)
{
    // Use an unordered_map to store the count (frequency) of each unique integer in the array.
    // Unordered maps provide average O(1) time complexity for insertion and lookups.
    unordered_map<int, int> frequency_map;

    // --- Pre-computation Phase ---
    // Iterate through the input array and populate the frequency map.
    for (int i = 0; i < array_size; i++)
        frequency_map[input_array[i]]++;

    // Initialize variables to track the maximum and minimum frequencies found so far.
    // 'max_frequency' starts at 0, 'min_frequency' starts at the maximum possible (array size).
    int max_frequency = 0;
    int min_frequency = array_size;

    // Initialize variables to store the elements corresponding to the max/min frequencies.
    int max_element = 0;
    int min_element = 0;

    // --- Analysis Phase ---
    // Traverse through the frequency map to find the elements with the highest and lowest counts.
    for (auto const &pair : frequency_map)
    {
        int current_count = pair.second;
        int current_element = pair.first;

        // Check if the current element's count is higher than the current maximum frequency.
        if (current_count > max_frequency)
        {
            max_element = current_element;
            max_frequency = current_count;
        }

        // Check if the current element's count is lower than the current minimum frequency.
        if (current_count < min_frequency)
        {
            min_element = current_element;
            min_frequency = current_count;
        }
    }

    // --- Output Phase ---
    cout << "The highest frequency element is: " << max_element << " (Count: " << max_frequency << ")\n";
    cout << "The lowest frequency element is: " << min_element << " (Count: " << min_frequency << ")\n";
}

int main()
{
    // Define the array of integers to analyze.
    int data_array[] = {10, 5, 10, 15, 10, 5, 10, 5};

    // Calculate the number of elements in the array dynamically.
    int n = sizeof(data_array) / sizeof(data_array[0]);

    // Call the function to analyze and print frequencies.
    analyzeFrequency(data_array, n);

    return 0;
}
