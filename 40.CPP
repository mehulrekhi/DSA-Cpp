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

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int ans = 0;
    int oneind = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[0][i] == 0)
            oneind++;
        else
            break;
    }
    if (oneind == 0)
        return 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i][oneind - 1] == 1)
        {
            ans = i;
            oneind = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 0)
                    oneind++;
                else
                    break;
            }
            if (oneind == 0)
                return ans;
        }
    }
    if (oneind >= m)
        return -1;
    return ans;
}

int main()
{
    IO();
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    cout << rowWithMax1s(arr, n, m);
}