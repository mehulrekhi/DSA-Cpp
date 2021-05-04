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

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            ans.push_back(A[i]);
            while (A[i] == ans.back() && i < n1)
                i++;
            j++;
            k++;
        }
        else if (A[i] <= B[j] && A[i] <= C[k])
        {
            i++;
        }
        else if (B[j] <= A[i] && B[j] <= C[k])
        {
            j++;
        }
        else if (C[k] <= B[j] && C[k] <= A[i])
        {
            k++;
        }
    }
    return ans;
}

int main()
{
    IO();
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int *arr1, *arr2, *arr3;
    arr1 = new int[n1];
    arr2 = new int[n2];
    arr3 = new int[n3];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    for (int i = 0; i < n3; i++)
        cin >> arr3[i];

    for (int x : commonElements(arr1, arr2, arr3, n1, n2, n3))
    {
        cout << x << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}