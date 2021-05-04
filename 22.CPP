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

void multiply(vector<int> &ans, int x)
{
    int carry = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        int p = ans[i] * x + carry;
        ans[i] = p % 10;
        carry = p / 10;
    }

    while (carry > 0)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }
}

vector<int> factorial(int N)
{
    int n = N;
    int digits = 0;
    vector<int> ans;
    while (n > 0)
    {
        ans.push_back(n % 10);
        n /= 10;
        digits++;
    }
    N--;
    while (N > 1)
    {
        multiply(ans, N--);
    }
    return ans;
}

int main()
{
    IO();
    int n;
    cin >> n;

    vector<int> ans = factorial(n);
    for (vector<int>::reverse_iterator it = ans.rbegin(); it != ans.rend(); it++)
        cout << *it;
}