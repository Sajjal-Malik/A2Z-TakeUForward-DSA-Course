#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int array_of_data[], int size_of_array)
{
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

    recursiveBubbleSort(data_array, array_size);

    cout << endl;

    cout << "After Sorting: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << data_array[i] << " ";
    }

    return 0;
}