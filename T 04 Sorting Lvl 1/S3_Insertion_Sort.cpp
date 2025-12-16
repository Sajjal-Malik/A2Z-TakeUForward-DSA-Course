#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Sorts an array of integers in ascending order using the Insertion Sort algorithm.
 *
 * Insertion Sort builds the final sorted array one element at a time. It takes an element
 * from the unsorted part and inserts it into its correct position within the already sorted part.
 */
void insertionSort(int array[], int size)
{
    // Outer loop: Iterate from the second element (index 1) to the end of the array.
    // The first element (index 0) is considered the initial "sorted" subarray.
    for (int step = 1; step < size; step++)
    {
        // 'keyElementIndex' starts at the current 'step'. This element is what we try to insert
        // into the sorted sequence before it.
        int keyElementIndex = step;

        // Inner loop (while loop): Shift elements of the sorted subarray 'arr[0..keyElementIndex-1]'
        // that are greater than the 'arr[keyElementIndex]' one position ahead of their current position
        // to make space for the key element.
        while (keyElementIndex > 0 && array[keyElementIndex - 1] > array[keyElementIndex])
        {
            // Swap the key element with the element immediately before it as long as the
            // previous element is larger.

            // Using a temporary variable for standard swapping:
            int temp = array[keyElementIndex];
            array[keyElementIndex] = array[keyElementIndex - 1];
            array[keyElementIndex - 1] = temp;

            // Move the index backward to check the next preceding element.
            keyElementIndex--;

            // Alternatively, using the standard library swap function:
            // swap(arr[keyElementIndex], arr[keyElementIndex - 1]);
            // keyElementIndex--;
        }
        // At this point, the key element is in its correct sorted position relative to the elements before it.
    }
}

int main()
{
    // Define the array of integers we want to sort.
    int data_array[] = {13, 46, 24, 52, 20, 9};

    // Calculate the number of elements in the array dynamically.
    int array_size = sizeof(data_array) / sizeof(data_array);

    // Print the array before sorting to show the initial state.
    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    // Call the insertion sort function to sort the array.
    insertionSort(data_array, array_size);
    cout << endl;

    // Print the array after sorting to show the final sorted state.
    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}
