#include <bits/stdc++.h>
using namespace std;

// Function to reverse an array in place using recursion.
// It swaps elements from the beginning (index i) with elements from the end (index size - i - 1)
// moving inwards towards the center of the array.
void reverseArray(int i, int arr[], int size)
{
    // Base case: Stop the recursion when the start index 'i' reaches or crosses
    // the middle of the array (size / 2). The array is fully reversed at this point.
    if (i >= size / 2)
    {
        return;
    }
    // Swap the element at the current start index with the element at the corresponding end index.
    swap(arr[i], arr[size - i - 1]);
    // Recursive step: Increment 'i' to move one step further into the array
    // and call the function again to process the next pair of elements.
    reverseArray(i + 1, arr, size);
}

int main()
{

    int arr[] = {2, 5, 7, 3, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the array before reversal
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline for separation

    // Call the recursive function to reverse the array in place
    reverseArray(0, arr, size);

    // Print the array after reversal
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}