//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool isPossibleAns(int arr[], int n, int k, int mid)
    {
        long long totalTime = 0;
        long long c = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mid)
            {
                return false;
            }

            if (totalTime + arr[i] > mid)
            {
                c++;
                totalTime = arr[i];
                if (c > k)
                {
                    return false;
                }
            }
            else
            {
                totalTime += arr[i];
            }
        }
        return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time

        long long start = 0;
        long long end = accumulate(arr, arr + n, 0);
        long long ans = -1;

        while (start <= end)
        {
            long long mid = start + (end - start) / 2;

            if (isPossibleAns(arr, n, k, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minTime(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends