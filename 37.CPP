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

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    vector<int> ans(r * c, 0);
    int put = 0;
    int rs = 0, re = r - 1, cs = 0, ce = c - 1;
    while (put < r * c)
    {
        //Row
        for (int i = cs; i <= ce; i++)
        {
            ans[put++] = matrix[rs][i];
        }
        rs++;
        if (put >= r * c)
            break;

        //Col
        for (int i = rs; i <= re; i++)
        {
            ans[put++] = matrix[i][ce];
        }
        ce--;
        if (put >= r * c)
            break;

        //Row Reverse
        for (int i = ce; i >= cs; i--)
        {
            ans[put++] = matrix[re][i];
        }
        re--;
        if (put >= r * c)
            break;

        //Col Reverse
        for (int i = re; i >= rs; i--)
        {
            ans[put++] = matrix[i][cs];
        }
        cs++;
    }

    return ans;
}

int main()
{
    IO();
    //Write driver code here****
}