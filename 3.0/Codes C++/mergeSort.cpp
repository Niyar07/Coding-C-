#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    int index = s;
    // left copy
    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }
    // right copy
    for (int i = 0; i < rightLength; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    // merge logic

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[mainArrayIndex] = leftArr[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = rightArr[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    while (leftIndex < leftLength)
    {
        arr[mainArrayIndex] = leftArr[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    while (rightIndex < rightLength)
    {
        arr[mainArrayIndex] = rightArr[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{

    // Base Case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // Left part solve using recursion
    mergeSort(arr, s, mid);

    // Right part solve using recursion
    mergeSort(arr, mid + 1, e);

    // merge both the parts
    merge(arr, s, e, mid);
}

int main()
{
    vector<int> arr;
    arr = {1, 5, 4, 88, 42, 7, 89, 12, 124, 748, 3, 787, 20, 18};

    cout << "Before Merge Sort Array : ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";
    mergeSort(arr, 0, arr.size() - 1);

    cout << "After Merge Sort Array : ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}