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

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
{
    vector<int> All(N * N, 0);
    int put = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            All[put++] = Mat[i][j];
    }
    sort(All.begin(), All.end());
    put = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            Mat[i][j] = All[put++];
    }
    return Mat;
}

int main()
{
    IO();
}