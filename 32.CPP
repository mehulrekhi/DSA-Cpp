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

void threeWayPartition(vector<int> &arr, int a, int b)
{
    int n = arr.size();
    int j = n - 1;
    int i = 0;
    while (i < j)
    {
        if (arr[i] <= b)
            i++;
        else
        {

            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j--;
        }
    }
    i = 0;
    j = 0;
    while (i < n)
    {
        if (arr[i] >= a)
            i++;
        else
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
            i++;
        }
    }
}

int main()
{
    IO();
    //cout << "Hi";
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    threeWayPartition(arr, a, b);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}