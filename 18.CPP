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

int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> M;
    int ans = 0;
    for (int i = 0; i < n; i++)
        M[arr[i]]++;

    for (auto x : M)
    {
        // if (x.first > k)
        //     continue;

        if (k == 2 * x.first)
        {
            ans += (x.second * x.second - 1) / 2;
        }
        else if (M.count((k - x.first)))
        {

            ans += (x.second * M[k - x.first]);
            //cout << x.first << " -- " << k - x.first << " = " << (x.second * M[k - x.first]) << endl;
            M[k - x.first] = 0;
        }
        M[x.first] = 0;
    }

    return ans;
}

int main()
{
    IO();
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getPairsCount(arr, n, k) << endl;

    delete[] arr;
}