//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int start, int end)
    {
        if (start >= end)
            return;
        int pivot = end;
        int i = start - 1;
        int j = start;

        while (j < pivot)
        {
            if (arr[j] < arr[pivot])
            {
                ++i;
                swap(arr[i], arr[j]);
            }
            ++j;
        }

        ++i;

        swap(arr[i], arr[pivot]);
        quickSort(arr, start, i - 1);
        quickSort(arr, i + 1, end);
    }

public:
    int partition(int arr[], int low, int high)
    {
        // Your code here
        //   I don't use this
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends