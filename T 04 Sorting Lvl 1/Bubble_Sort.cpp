#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap(arr[j], arr[j + 1]);

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(arr, size);
    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}