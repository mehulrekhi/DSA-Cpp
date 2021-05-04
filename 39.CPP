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

int median(vector<vector<int>> &matrix, int r, int c)
{
    int maxx = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < r; i++)
    {
        maxx = max(maxx, matrix[i][c - 1]);
        minn = min(minn, matrix[i][0]);
    }

    int chhote = (r * c + 1) / 2;
    int mid = 0;
    while (minn < maxx)
    {
        mid = (maxx + minn) / 2;
        int count = 0;
        for (int i = 0; i < r; i++)
        {
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }

        if (count < chhote)
        {

            minn = mid + 1;
        }
        else
            maxx = mid;
    }

    return minn;
}

int main()
{
    IO();
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];
    }

    cout << median(matrix, r, c);
}