#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans = 0;

void func(ll *arr, ll s, ll e)
{
  if (s >= e)
    return;
  ll mid = (s + e) / 2;
  func(arr, s, mid);
  func(arr, mid + 1, e);
  ll i = s, j = mid + 1;
  ll *arr2 = new ll[e - s + 1];
  int put = 0;
  while (i <= mid && j <= e)
  {
    if (arr[i] <= arr[j])
    {
      arr2[put++] = arr[i++];
    }
    else
    {
      ans += (mid + 1 - i);
      arr2[put++] = arr[j++];
    }
  }
  while (j <= e)
  {
    arr2[put++] = arr[j++];
  }
  while (i <= mid)
  {
    arr2[put++] = arr[i++];
  }
  for (int i = 0; i < e - s + 1; i++)
  {
    arr[s + i] = arr2[i];
  }

  delete[] arr2;
  return;
}

long long int inversionCount(long long arr[], long long N)
{
  ans = 0;
  if (N == 1)
    return 0;
  func(arr, 0, N - 1);
  return ans;
}

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("E:/CODES/input.txt", "r", stdin);
  freopen("E:/CODES/output.txt", "w", stdout);
#endif
  ll n;
  cin >> n;
  ll *arr = new ll[n];
  for (ll i = 0; i < n; i++)
    cin >> arr[i];
  cout << inversionCount(arr, n) << endl;

  // cout << endl;
  // for (int i = 0; i < n; i++)
  //   cout << arr[i] << " ";

  delete[] arr;
}
