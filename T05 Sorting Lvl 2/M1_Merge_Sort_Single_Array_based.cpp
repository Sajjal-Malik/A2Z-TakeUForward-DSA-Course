#include <bits/stdc++.h>
using namespace std;

/*
    mergeSortedRanges():
    Merges two sorted ranges inside a vector.

    Left range  -> array[startIndex ... middleIndex]
    Right range -> array[middleIndex + 1 ... endIndex]
*/
void mergeSortedRanges(vector<int> &array, int startIndex, int middleIndex, int endIndex)
{
    // Temporary vector to store merged elements
    vector<int> mergedResult;

    int leftPointer = startIndex;
    int rightPointer = middleIndex + 1;

    // Merge both halves while elements remain
    while (leftPointer <= middleIndex && rightPointer <= endIndex)
    {
        if (array[leftPointer] <= array[rightPointer])
        {
            mergedResult.push_back(array[leftPointer]);
            leftPointer++;
        }
        else
        {
            mergedResult.push_back(array[rightPointer]);
            rightPointer++;
        }
    }

    // Copy remaining elements from left half
    while (leftPointer <= middleIndex)
    {
        mergedResult.push_back(array[leftPointer]);
        leftPointer++;
    }

    // Copy remaining elements from right half
    while (rightPointer <= endIndex)
    {
        mergedResult.push_back(array[rightPointer]);
        rightPointer++;
    }

    // Copy merged result back to original vector
    for (int i = startIndex; i <= endIndex; i++)
    {
        array[i] = mergedResult[i - startIndex];
    }
}

/*
    mergeSortRecursive():
    Recursively sorts the vector using merge sort.
*/
void mergeSortRecursive(vector<int> &array,
                        int startIndex,
                        int endIndex)
{
    // Base case: one or zero elements
    if (startIndex >= endIndex)
        return;

    int middleIndex = startIndex + (endIndex - startIndex) / 2;

    // Sort left half
    mergeSortRecursive(array, startIndex, middleIndex);

    // Sort right half
    mergeSortRecursive(array, middleIndex + 1, endIndex);

    // Merge sorted halves
    mergeSortedRanges(array, startIndex, middleIndex, endIndex);
}

int main()
{
    vector<int> numbers = {4, 3, 8, 5, 6, 7, 6, 2, 1, 5};

    mergeSortRecursive(numbers, 0, numbers.size() - 1);

    cout << "Sorted array:\n";
    for (int value : numbers)
        cout << value << " ";

    return 0;
}
