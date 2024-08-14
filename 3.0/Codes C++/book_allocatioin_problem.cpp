
class Solution
{
public:
    // Function to find minimum number of pages.
    bool isPossibleSolution(int A[], int n, int m, int sol)
    {
        int pageSum = 0;
        int c = 1;

        for (int i = 0; i < n; i++)
        {
            if (A[i] > sol)
            {
                return false;
            }

            if (pageSum + A[i] > sol)
            {
                c++;
                pageSum = A[i];

                if (c > m)
                {
                    return false;
                }
            }
            else
            {
                pageSum += A[i];
            }
        }

        return true;
    }

    long long findPages(int n, int arr[], int m)
    {

        if (m > n)
        {
            return -1;
        }

        int start = 0;
        int end = accumulate(arr, arr + n, 0);
        int ans = -1;

        while (start <= end)
        {
            int mid = (start + end) >> 1;

            if (isPossibleSolution(arr, n, m, mid))
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