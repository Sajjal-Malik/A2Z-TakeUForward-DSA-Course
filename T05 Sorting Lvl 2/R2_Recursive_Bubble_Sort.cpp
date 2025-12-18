#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Bubble Sort using recursion.
 * Bubble sort works by repeatedly stepping through the list, comparing adjacent
 * elements and swapping them if they are in the wrong order.
 * With each "pass", the largest unsorted element "bubbles up" to its correct position.
 */
void recursiveBubbleSort(int array[], int size, int passIndex)
{
    // Base Case: If we have completed (size - 1) passes, the array is fully sorted
    if (passIndex >= size - 1)
    {
        return;
    }

    // Inner loop: Compare adjacent elements in the unsorted portion.
    // Note: 'size - passIndex - 1' ensures we don't re-check elements
    // that have already "bubbled" to the end in previous passes.
    for (int compareIndex = 0; compareIndex < size - passIndex - 1; compareIndex++)
    {
        // If the current element is greater than the next, swap them
        if (array[compareIndex] > array[compareIndex + 1])
        {
            // Manual swap using a temporary variable
            int temp = array[compareIndex];
            array[compareIndex] = array[compareIndex + 1];
            array[compareIndex + 1] = temp;

            // Alternatively, using the standard library swap function:
            // swap(arr[compareIndex], arr[compareIndex + 1]);
        }
    }

    // Recursive Call: Move to the next pass to sort the next largest element
    recursiveBubbleSort(array, size, passIndex + 1);
}

int main()
{
    // Initialize an unsorted array
    int data_array[] = {13, 46, 24, 52, 20, 9};

    // Calculate array size (number of elements)
    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    // Print array state before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    // Start the recursive bubble sort process beginning at pass 0
    recursiveBubbleSort(data_array, array_size, 0);

    cout << endl;

    // Print array state after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
