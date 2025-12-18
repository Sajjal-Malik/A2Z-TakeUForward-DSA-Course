#include <bits/stdc++.h>
using namespace std;

/**
 * Performs Insertion Sort using recursion.
 * Insertion sort works by taking one element at a time (the 'key') and
 * inserting it into its correct position within the already sorted
 * portion of the array (to the left).
 */
void recursiveInsertionSort(int array[], int size, int step)
{
    // Base Case: If the current step reaches the size of the array, we are finished
    if (step >= size)
    {
        return;
    }

    // keyElementIndex tracks the element we are currently trying to "insert"
    int keyElementIndex = step;

    // Shift/Swap logic:
    // Compare the current element with the one before it.
    // If the previous element is larger, swap them and move backwards.
    while (keyElementIndex > 0 && array[keyElementIndex - 1] > array[keyElementIndex])
    {
        // Standard swap using a temporary variable
        int temp = array[keyElementIndex];
        array[keyElementIndex] = array[keyElementIndex - 1];
        array[keyElementIndex - 1] = temp;

        // Move the index back to continue comparing the key with earlier elements
        keyElementIndex--;

        // Alternatively, using the standard library swap function:
        // swap(array[keyElementIndex], array[keyElementIndex - 1]);
        // keyElementIndex--;
    }

    // Recursive Call: Move to the next element in the array (increment step)
    recursiveInsertionSort(array, size, step + 1);
}

int main()
{
    // Initialize an unsorted array
    int data_array[] = {13, 46, 24, 52, 20, 9};

    // Calculate the number of elements in the array
    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    // Display array state before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    // Start recursive sort from index 1 (the first element is already "sorted" by itself)
    recursiveInsertionSort(data_array, array_size, 1);

    cout << endl;

    // Display array state after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
