#include <bits/stdc++.h>
using namespace std;

/**
 * Partitioning function (Lomuto-Hoare hybrid scheme)
 * Uses the right-most element as the pivot.
 * Moves smaller elements to the left and larger to the right.
 */
int partition(int *arr, int low, int high)
{
    // Pick the last element (right-most) as the pivot
    int pivot = arr[high];
    int leftPointer = low;
    int rightPointer = high - 1; // Exclude the pivot itself from the scanning

    while (leftPointer <= rightPointer)
    {
        // Increment 'leftPointer' until an element greater than pivot is found
        while (leftPointer <= rightPointer && arr[leftPointer] <= pivot)
        {
            leftPointer++;
        }

        // Decrement 'rightPointer' until an element smaller than pivot is found
        while (rightPointer >= leftPointer && arr[rightPointer] > pivot)
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

    // Final Step: Place the pivot in its correct sorted position.
    // 'leftPointer' is now at the first element larger than the pivot.
    int temp = arr[leftPointer];
    arr[leftPointer] = arr[high];
    arr[high] = temp;

    // Alternatively we can also use
    // swap(arr[high], arr[leftPointer]);

    // Return the index where the pivot is now located
    return leftPointer;
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
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Begin the recursive QuickSort process using the last element as pivot
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
