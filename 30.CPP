#include <bits/stdc++.h>
using namespace std;
#define ll long long
inline void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("E:/CODES/input.txt", "r", stdin);
    freopen("E:/CODES/output.txt", "w", stdout);
#endif
}

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long s = 0, e = m - 1;
    long long ans = INT64_MAX;
    while (e < n)
    {
        ans = min(ans, a[e] - a[s]);

        e++;
        s++;
    }

    return ans;
}

int main()
{
    IO();
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    cout << findMinDiff(a, n, m);
}