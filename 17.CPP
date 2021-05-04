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

int maxProfit(vector<int> &prices)
{
    int buy = prices[0];
    //int sell = INT_MIN;
    int ans = 0;

    for (int x : prices)
    {
        if (x < buy)
        {
            buy = x;
        }
        else if (x > buy)
        {
            ans = max(ans, (x - buy));
        }
    }

    return ans;
}

int main()
{
    IO();
    int n, temp, m;
    cin >> n;
    m = n;
    vector<int> prices;
    while (m--)
    {
        cin >> temp;
        prices.push_back(temp);
    }

    cout << maxProfit(prices) << endl;
}