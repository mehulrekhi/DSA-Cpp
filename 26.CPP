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

int solve(int *arr, vector<int> &DP, int n)
{
    int ma = arr[n], mi = arr[1];
    for (int j = n - 1; j >= 1; j--)
    {
        ma = max(ma, arr[j]);
        DP[j] = max(DP[j + 1], ma - arr[j]);
    }
    for (int i = 1; i <= n; i++)
    {
        mi = min(arr[i], mi);
        DP[i] = max(DP[i - 1], DP[i] + arr[i] - mi);
    }
    return DP[n];
}

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    vector<int> DP(n + 1, 0);

    cout << solve(arr, DP, n);

    delete[] arr;
}