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

bool subArrayExists(int arr[], int n)
{
    vector<int> V(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            return true;
        V[i] += arr[i] + V[max(0, i - 1)];
    }
    unordered_map<int, int> M;
    for (int x : V)
    {
        if (x == 0)
            return true;
        if (M[x]++ == 1)
            return true;
    }
    return false;
}

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (subArrayExists(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";

    delete[] arr;
}