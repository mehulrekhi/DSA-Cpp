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

int countOccurence(int arr[], int n, int k)
{
    unordered_map<int, int> M;
    for (int i = 0; i < n; i++)
    {
        M[arr[i]]++;
    }
    int ans = 0;
    for (auto x : M)
        if (x.second > (n / k))
            ans++;
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

    cout << countOccurence(arr, n, k);
    delete[] arr;
}