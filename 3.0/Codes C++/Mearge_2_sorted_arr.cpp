#include <bits/stdc++.h>
using namespace std;

vector<int> meargeTwoSortedArray(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();

    int i = 0;
    int j = 0;
    while (i < arr1Size && arr2Size)
    {
        if (arr1[i] <= arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1Size)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while (j < arr2Size)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> arr1;
    arr1 = {1, 4, 6, 8, 9, 20};
    cout << "First Sorted Array : \n";
    for (auto arr : arr1)
    {
        cout << arr << " ";
    }
    cout << "\n";

    vector<int> arr2;
    arr2 = {2, 5, 7, 10, 20, 22, 54, 89, 500};
    cout << "Second Sorted Array : \n";
    for (auto arr : arr2)
    {
        cout << arr << " ";
    }
    cout << "\n";

    vector<int> ans;

    ans = meargeTwoSortedArray(arr1, arr2);

    cout << "Final Sorted Array : \n";
    for (auto k : ans)
    {
        cout << k << " ";
    }
    cout << "\n";

    return 0;
}