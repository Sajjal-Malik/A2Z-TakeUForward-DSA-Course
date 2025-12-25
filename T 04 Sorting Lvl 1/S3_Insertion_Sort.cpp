#include <bits/stdc++.h>
using namespace std;

/*
    Insertion Sort Algorithm
    ------------------------
    Insertion Sort works like sorting playing cards in hand.

    It takes one element at a time from the unsorted part
    and inserts it into its correct position in the sorted part.
*/
void insertionSort(int numbers[], int totalElements)
{
    // Start from the second element
    for (int currentIndex = 1; currentIndex < totalElements; currentIndex++)
    {
        int keyValue = numbers[currentIndex];
        int previousIndex = currentIndex - 1;

        // Shift elements greater than keyValue to the right
        while (previousIndex >= 0 && numbers[previousIndex] > keyValue)
        {
            numbers[previousIndex + 1] = numbers[previousIndex];
            previousIndex--;
        }

        // Insert keyValue at its correct position
        numbers[previousIndex + 1] = keyValue;
    }
}

int main()
{
    int numbers[] = {13, 46, 24, 52, 20, 9};
    int totalElements = sizeof(numbers) / sizeof(numbers[0]); // FIXED

    cout << "Before Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    insertionSort(numbers, totalElements);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < totalElements; i++)
        cout << numbers[i] << " ";

    return 0;
}
