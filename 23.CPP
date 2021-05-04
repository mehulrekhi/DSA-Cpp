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

long long maxProduct(int *arr, int n)
{
    ll finalmax = INT_MIN, currmax = 1, currmin = 1; //--

    bool nopositive = true;
    ll one = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            nopositive = false;
            currmax = currmax * arr[i];
            currmin = currmin * arr[i];

            finalmax = max(finalmax, currmax);

            //--
        }
        else if (arr[i] == 0)
        {
            currmin = 1;
            currmax = 1;
        }
        else
        {
            currmin = currmin ^ currmax;
            currmax = currmax ^ currmin;
            currmin = currmin ^ currmax;
            currmin = currmin * arr[i];
            currmax = currmax * arr[i];

            finalmax = max(finalmax, currmax);

            currmax = max(currmax, one);
        }

        //finalmax = max(finalmax,currmin);
    }

    // if (nopositive)

    ll zero = 0;

    finalmax = max(finalmax, zero);
    return finalmax;
}

int main()
{
    IO();
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxProduct(arr, n);

    delete[] arr;
}