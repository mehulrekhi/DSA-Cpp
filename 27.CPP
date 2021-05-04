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

string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_set<int> S;
    for (int i = 0; i < n; i++)
        S.insert(a1[i]);
    bool ans = true;
    for (int i = 0; i < m; i++)
    {
        if (S.find(a2[i]) == S.end())
        {
            ans = false;
            break;
        }
    }

    if (ans)
        return "Yes";
    else
        return "No";
}

int main()
{
    IO();
    int n, m;
    cin >> n >> m;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    int *arr2 = new int[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    if (m > n)
    {
        cout << "No";
        return 0;
    }

    cout << isSubset(arr1, arr2, n, m);

    delete[] arr1;

    delete[] arr2;
}