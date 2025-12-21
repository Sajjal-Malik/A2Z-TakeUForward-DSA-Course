#include <bits/stdc++.h>
using namespace std;

/**
 * Partitioning function (Hoare-like scheme)
 * Rearranges elements so that items smaller than the pivot are on the left,
 * and items larger than the pivot are on the right.
 */
int partition(int *arr, int low, int high)
{
    // Pick the first element as the pivot
    int pivot = arr[low];
    int leftPointer = low;
    int rightPointer = high;

    while (leftPointer < rightPointer)
    {
        // Increment 'leftPointer' until an element greater than pivot is found
        while (arr[leftPointer] <= pivot && leftPointer <= high - 1)
        {
            leftPointer++;
        }

        // Decrement 'rightPointer' until an element smaller than or equal to pivot is found
        while (arr[rightPointer] > pivot && rightPointer >= low + 1)
        {
            rightPointer--;
        }

        // If pointers haven't crossed, swap the out-of-place elements
        if (leftPointer < rightPointer)
        {
            int temp = arr[leftPointer];
            arr[leftPointer] = arr[rightPointer];
            arr[rightPointer] = temp;

            // Alternatively we can also use
            // swap(arr[leftPointer], arr[rightPointer]);
        }
    }

    // Final Step: Place the pivot in its correct sorted position by swapping with 'rightPointer'
    int temp = arr[low];
    arr[low] = arr[rightPointer];
    arr[rightPointer] = temp;

    // Alternatively we can also use
    // swap(arr[low], arr[rightPointer]);

    // Return the index where the pivot is now located
    return rightPointer;
}

/**
 * Recursive function to divide and conquer the array
 */
void quickSort(int *arr, int low, int high)
{
    // Base case: if the sub-array has more than one element
    if (low < high)
    {
        // Find the index where the pivot is correctly placed
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the partition index
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    // Initialize sample array
    int arr[] = {4, 2, 6, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // n for number of element (standard shorthand)

    // Print array before sorting
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Begin the recursive QuickSort process
    quickSort(arr, 0, n - 1);

    cout << endl;

    // Print the final sorted array
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
