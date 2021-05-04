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

int sb(int arr[], int n, int x)
{
    int s = 0;
    int e = 0;
    int ans = INT_MAX;
    int sum = arr[0];

    while (e < n)
    {
        if (sum > x)
        {
            ans = min(ans, e - s + 1);
            if (s < e)
            {
                sum -= arr[s];
                s++;
            }
            else
            {
                e++;
                if (e >= n)
                    break;
                sum += arr[e];
            }
        }
        else
        {
            e++;
            if (e >= n)
                break;
            sum += arr[e];
        }
    }
    return ans;
}

int main()
{
    IO();
    int n, x;
    cin >> n >> x;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sb(arr, n, x);

    delete[] arr;
}