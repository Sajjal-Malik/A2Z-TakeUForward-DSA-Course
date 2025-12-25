#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Sorts an array of integers in ascending order using the Bubble Sort algorithm.
 *
 * Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps
 * them if they are in the wrong order. The pass through the list is repeated until
 * the list is sorted.
 */
void bubbleSort(int array[], int size)
{
    // Outer loop: Controls the number of passes needed. In each pass, the largest
    // unsorted element "bubbles up" to its correct position at the end of the array.
    // After 'i' passes, the last 'i' elements are sorted.
    for (int passIndex = size - 1; passIndex > 0; passIndex--)
    {
        // Inner loop: Iterates through the unsorted portion of the array to compare adjacent elements.
        // The upper bound 'n - passIndex - 1' decreases in each pass, as the last elements
        // become sorted and don't need re-checking.
        for (int compareIndex = 0; compareIndex <= passIndex - 1; compareIndex++)
        {
            // Compare the current element with the next element.
            if (array[compareIndex] > array[compareIndex + 1])
            {
                // If they are in the wrong order (current > next), swap them.

                // Using a temporary variable for standard swapping:
                int temp = array[compareIndex];
                array[compareIndex] = array[compareIndex + 1];
                array[compareIndex + 1] = temp;

                // Alternatively, using the standard library swap function:
                // swap(arr[compareIndex], arr[compareIndex + 1]);
            }
        }
    }
}

int main()
{
    // Define the array of integers we want to sort.
    int data_array[] = {13, 46, 24, 52, 20, 9};

    // Calculate the number of elements in the array dynamically.
    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    // Print the array before sorting to show the initial state.
    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    // Call the bubble sort function to sort the array.
    bubbleSort(data_array, array_size);
    cout << endl;

    // Print the array after sorting to show the final sorted state.
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
