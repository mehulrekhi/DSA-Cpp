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

int findLongestConseqSubseq(int arr[], int N)
{
    unordered_set<int> S;
    for (int i = 0; i < N; i++)
        S.insert(arr[i]);
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (S.find(arr[i] - 1) != S.end()) //If 4 in arr
            continue;
        //if 4 not in arr
        int curr = 1;
        while (S.find(arr[i] + curr) != S.end())
        {
            curr++;
        }
        ans = max(curr, ans);
    }
    return ans;
}

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findLongestConseqSubseq(arr, n);
    delete[] arr;
}