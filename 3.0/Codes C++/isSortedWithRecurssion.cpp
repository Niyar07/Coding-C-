// find out the given array is the sorted or not using recurssioin

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size, int index)
{
    // base case
    if (size - 1 == index)
        return true;

    // 1 case handle
    bool currentKaAns = false;
    bool recurssionKaAns = false;

    if (arr[index + 1] > arr[index])
    {
        currentKaAns = true;
    }

    // recurssion call
    recurssionKaAns = isSorted(arr, size, index + 1);

    return (currentKaAns && recurssionKaAns);
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    bool ans = isSorted(arr, size, 0);
    if (ans)
        cout << "True \n";
    else
        cout << "False \n";
    return 0;
}