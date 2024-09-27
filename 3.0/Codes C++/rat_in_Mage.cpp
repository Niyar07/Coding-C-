class Solution
{
public:
    bool isSafe(int newx, int newy, vector<vector<int>> &m, vector<vector<bool>> &visited, int n)
    {
        if (newx < 0 || newy < 0 || newx >= n || newy >= n)
        {
            // out of bound
            return false;
        }
        if (visited[newx][newy] == true)
        {
            // already visited
            return false;
        }
        if (m[newx][newy] == 0)
        {
            // blocked space
            return false;
        }
        // valid case
        return true;
    }

    void solve(vector<vector<int>> &mat, vector<vector<bool>> &visited, int n, vector<string> ans, int srcx, int srcy, int destx, int desty, string output)
    {

        // base condintion
        if (srcx == destx && srcy == desty)
        {
            ans.push_back(output);
            return;
        }

        // Up
        int newx = srcx - 1;
        int newy = srcy;
        //
        if (isSafe(newx, newy, mat, visited, n))
        {
            visited[newx][newy] = true;
            solve(mat, visited, n, ans, newx, newy, destx, desty, output + 'U');
            visited[newx][newy] = false;
        }

        // Down
        newx = srcx + 1;
        newy = srcy;

        if (isSafe(newx, newy, mat, visited, n))
        {
            visited[newx][newy] = true;
            solve(mat, visited, n, ans, newx, newy, destx, desty, output + 'D');
            visited[newx][newy] = false;
        }

        // left
        newx = srcx;
        newy = srcy - 1;

        if (isSafe(newx, newy, mat, visited, n))
        {
            visited[newx][newy] = true;
            solve(mat, visited, n, ans, newx, newy, destx, desty, output + 'L');
            visited[newx][newy] = false;
        }

        // Right
        newx = srcx;
        newy = srcy + 1;

        if (isSafe(newx, newy, mat, visited, n))
        {
            visited[newx][newy] = true;
            solve(mat, visited, n, ans, newx, newy, destx, desty, output + 'R');
            visited[newx][newy] = false;
        }
    }

    vector<string> findPath(vector<vector<int>> &mat)
    {
        // Your code goes here
        int n = mat.size();
        vector<string> ans;
        vector<vector<bool>> visited(n, vector<bool>(n, 0));

        int srcx = 0;
        int srcy = 0;

        int destx = n - 1;
        int desty = n - 1;

        visited[0][0] = true;

        string output = " ";

        if (mat[0][0] = 0)
        {
            return ans;
        }

        solve(mat, visited, n, ans, srcx, srcy, destx, desty, output);
        return ans;
    }
};