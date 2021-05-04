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
     cin >> n;
     int * arr = new int [n];
     for(int i=0;i<n;i++)cin >> arr[i];
     int ans = INT_MIN, currsum=0;

     for(int i=0;i<n;i++){
       currsum+=arr[i];
       ans=max(ans,currsum);
       currsum=max(currsum,0);
     }

     cout << ans << endl;

     delete [] arr;
 }
