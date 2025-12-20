#include <bits/stdc++.h>
using namespace std;

/**
 * Partitioning function (Hoare-like scheme)
 * Rearranges elements so that items smaller than the pivot are on the left,
 * and items larger than the pivot are on the right.
 */
int quickSort(int *arr, int low, int high)
{
    // Pick the first element as the pivot
    int pivot = arr[low];
    int start = low;
    int end = high;

    while (start < end)
    {
        // Increment 'start' until an element greater than pivot is found
        while (arr[start] <= pivot && start <= high - 1)
        {
            start++;
        }

        // Decrement 'end' until an element smaller than or equal to pivot is found
        while (arr[end] > pivot && end >= low + 1)
        {
            end--;
        }

        // If pointers haven't crossed, swap the out-of-place elements
        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            // Alternatively we can also use
            // swap(arr[start], arr[end]);
        }
    }

    // Final Step: Place the pivot in its correct sorted position by swapping with 'end'
    int temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;

    // Alternatively we can also use
    // swap(arr[low], arr[end]);

    // Return the index where the pivot is now located
    return end;
}

/**
 * Recursive function to divide and conquer the array
 */
void quickSortRecursive(int *arr, int low, int high)
{
    // Base case: if the sub-array has more than one element
    if (low < high)
    {
        // Find the index where the pivot is correctly placed
        int partition_index = quickSort(arr, low, high);

        // Recursively sort elements before and after the partition index
        quickSortRecursive(arr, low, partition_index - 1);
        quickSortRecursive(arr, partition_index + 1, high);
    }
}

int main()
{
    // Initialize sample array
    int arr[] = {4, 2, 6, 5, 7, 9, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Begin the recursive QuickSort process
    quickSortRecursive(arr, 0, size - 1);

    cout << endl;

    // Print the final sorted array
    cout << "After sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
