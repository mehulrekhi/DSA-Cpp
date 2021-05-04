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
Sort the Array, Fix one element from end,
Use two pointer on the remaining left array to find a Pair whose sum is X-A[i]
*/

bool findSum(int *arr, int n, int e, int x)
{
    int s = 0;
    while (s < e)
    {
        if (arr[s] + arr[e] == x)
            return true;
        if (arr[s] + arr[e] > x)
            e--;
        else
            s++;
    }
    return false;
}

bool find3Numbers(int A[], int n, int X)
{
    sort(A, A + n);

    for (int i = n - 1; i > 1; i--)
    {
        if (findSum(A, n, i - 1, X - A[i]))
            return true;
    }
    return false;
}

int main()
{
    IO();
    int n, x;
    cin >> n >> x;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << find3Numbers(arr, n, x);

    delete[] arr;
}