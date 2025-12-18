#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Selection Sort using recursion.
 * Selection sort works by repeatedly finding the minimum element from the
 * unsorted part and putting it at the beginning.
 */
void recursiveSelectionSort(int array[], int size, int currentIndex)
{
    // Base Case: If we have reached the last element, the array is sorted
    if (currentIndex >= size - 1)
    {
        return;
    }

    // Assume the current position holds the minimum value
    int minIndex = currentIndex;

    // Iteratively find the actual minimum element in the remaining unsorted portion
    for (int searchIndex = currentIndex + 1; searchIndex < size; searchIndex++)
    {
        if (array[searchIndex] < array[minIndex])
            minIndex = searchIndex; // Update index if a smaller element is found
    }

    // Swap the found minimum element with the element at the current position
    // Using a temporary variable for the swap logic:
    int temp = array[minIndex];
    array[minIndex] = array[currentIndex];
    array[currentIndex] = temp;

    // Alternatively, using the standard library swap function:
    // swap(array[minIndex], array[currentIndex]);

    // Recursive Call: Move to the next index to sort the rest of the array
    recursiveSelectionSort(array, size, currentIndex + 1);
}

int main()
{
    // Initialize an unsorted integer array
    int data_array[] = {13, 46, 24, 52, 20, 9};

    // Calculate the number of elements in the array
    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    // Display array state before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    // Start the recursive sorting process beginning at index 0
    recursiveSelectionSort(data_array, array_size, 0);
    cout << endl;

    // Display array state after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
