#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> tempArr;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            tempArr.push_back(arr[left]);
            left++;
        }
        else
        {
            tempArr.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        tempArr.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        tempArr.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = tempArr[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{

    vector<int> arr = {4, 3, 8, 5, 6, 7, 6, 2, 1, 5};
    int low = 0;
    int high = arr.size() - 1;
    mergeSort(arr, low, high);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}