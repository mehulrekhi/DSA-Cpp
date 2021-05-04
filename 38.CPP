#include <bits/stdc++.h>
using namespace std;
#define ll long long int
inline void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("E:/CODES/input.txt", "r", stdin);
    freopen("E:/CODES/output.txt", "w", stdout);
#endif
}
//Best Optimal Solution
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] <= target && matrix[i][m - 1] >= target)
        {
            return binary_search(matrix[i].begin(), matrix[i].end(), target);
        }
    }
    return false;
}

//My solution
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            if (target >= matrix[i + 1][0])
                continue;
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == target)
                    ans = true;
            }
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == target)
                ans = true;
        }
    }
    return ans;
}

int main()
{
    IO();

    //WRITE DRIVER CODE*****
}