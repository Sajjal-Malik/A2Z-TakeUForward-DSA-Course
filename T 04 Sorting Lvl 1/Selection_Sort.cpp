#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minimum])
                minimum = j;
        }

        // swap(arr[minimum], arr[i]);

        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, size);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}