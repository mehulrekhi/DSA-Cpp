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

/*
Use Sliding window to calculate for all windows
*/

int minSwap(int *arr, int n, int k)
{
    int ans = 0, num = 0, tempans = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] <= k)
            num++;
    for (int i = 0; i < num; i++)
        if (arr[i] <= k)
            ans++;
    //cout << num << " " << ans << endl;
    tempans = ans;
    int s = 0, e = num;
    while (e < n)
    {
        if (arr[s] <= k)
            tempans--;
        if (arr[e] <= k)
            tempans++;
        s++;
        e++;
        ans = max(ans, tempans);
    }
    return num - ans;
}

int main()
{
    IO();
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minSwap(arr, n, k);
    delete[] arr;
}