#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {

 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	#ifndef ONLINE_JUDGE
 		freopen("E:/CODES/input.txt","r",stdin);
 		freopen("E:/CODES/output.txt","w",stdout);
 	#endif

  int n;
  int * arr = new int [n];
  for(in ti=0;i<n;i++)cin >> arr[i];
  int ans = INT_MIN;
  int curr=0;

  for(int i=0;i<n;i++){
    curr+=arr[i];
    if(curr<0)curr=0;
    else{ans=max(ans,curr);}
  }

  if(ans!=INT_MIN)cout << ans << endl;
  else{
    for(int i=0;i<n;i++)ans=max(ans,arr[i]);
    cout << ans << endl;
  }


  delete [] arr;


 }
