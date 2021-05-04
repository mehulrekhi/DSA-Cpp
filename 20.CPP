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

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int s = 0, e = n - 1;
    while (arr[e] > 0 && e > s)
        e--;

    while (s < e)
    {
        if (arr[s] >= 0)
        {
            swap(arr[s], arr[e]);
            s++;
            while (arr[e] >= 0 && e > s)
                e--;
        }
        else
        {
            s++;
        }
    }

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // cout << endl;

    int sw = n - 1;
    while (arr[sw] >= 0 && sw > 0)
        sw--;
    if (sw == 0 && arr[sw] >= 0)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    else
    {
        sw++;
        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] >= 0)
                break;
            if (sw == n)
                break;
            if (arr[sw] < 0)
                break;
            swap(arr[sw++], arr[i]);
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    // for (int i = 1; i < n; i += 2)
    // {
    //     if (i >= sw || sw > n)
    //         break;
    //     swap(arr[i], arr[sw]);
    //     i += 2;
    //     sw++;
    // }

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    delete[] arr;
}