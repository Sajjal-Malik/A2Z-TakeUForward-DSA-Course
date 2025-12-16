#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Sorts an array of integers in ascending order using the Selection Sort algorithm.
 *
 * Selection Sort works by repeatedly finding the minimum element from the unsorted part
 * and putting it at the beginning of the sorted part.
 */
void selectionSort(int array[], int size)
{
    // Outer loop: Iterate through the array to place elements in their correct sorted position.
    // We only need to go up to n-1 because the last element will be in place after n-1 iterations.
    for (int currentIndex = 0; currentIndex < size - 1; currentIndex++)
    {
        // Initialize 'min_index' to the start of the current unsorted segment.
        int minIndex = currentIndex;

        // Inner loop: Find the index of the minimum element in the remaining unsorted array.
        for (int searchIndex = currentIndex; searchIndex < size; searchIndex++)
        {
            // If the current element is smaller than the assumed minimum, update min_index.
            if (array[searchIndex] < array[minIndex])
                minIndex = searchIndex;
        }

        // Swap the found minimum element with the element at the 'currentIndex'.
        // This effectively moves the smallest element to its correct sorted position.

        // Using a temporary variable for swapping:
        int temp = array[minIndex];
        array[minIndex] = array[currentIndex];
        array[currentIndex] = temp;

        // Alternatively, using the standard library swap function:
        // swap(array[minIndex], array[currentIndex]);
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

    // Call the selection sort function to sort the array.
    selectionSort(data_array, array_size);
    cout << endl;

    // Print the array after sorting to show the final sorted state.
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
