#include <bits/stdc++.h>
using namespace std;

void recursiveSelectionSort(int array[], int size, int currentIndex)
{
    if (currentIndex >= size - 1)
    {
        return;
    }

    int minIndex = currentIndex;

    for (int searchIndex = currentIndex; searchIndex < size; searchIndex++)
    {
        if (array[searchIndex] < array[minIndex])
            minIndex = searchIndex;
    }

    int temp = array[minIndex];
    array[minIndex] = array[currentIndex];
    array[currentIndex] = temp;

    recursiveSelectionSort(array, size, currentIndex + 1);
}

int main()
{

    int data_array[] = {13, 46, 24, 52, 20, 9};

    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    recursiveSelectionSort(data_array, array_size, 0);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}