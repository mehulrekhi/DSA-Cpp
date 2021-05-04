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

int trappingWater(int arr[], int n)
{
    int *left = new int[n];
    int *right = new int[n];
    int x = arr[0];
    left[0] = 0;
    for (int i = 1; i < n; i++)
    {
        left[i] = x;
        x = max(x, arr[i]);
    }
    x = arr[n - 1];
    arr[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = x;
        x = max(x, arr[i]);
    }

    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        ans += max(0, (min(left[i], right[i]) - arr[i]));
    }

    return ans;

    delete[] left;
    delete[] right;
}

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << trappingWater(arr, n);
    delete[] arr;
}