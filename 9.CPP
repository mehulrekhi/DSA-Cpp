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
	   int n,k;
     cin >> n >> k;
     int * arr = new int [n];
     for(int i=0;i<n;i++)cin >> arr[i];
     sort(arr,arr+n);
     int minn = arr[0], maxx=arr[n-1],ans;
     if(maxx-minn<=k){ans=maxx-minn;}
     else{
     minn+=k;maxx-=k;

     int temp1 = maxx;
     maxx=max(temp1,minn);
     minn=min(temp1,minn);
     arr[0]=minn;arr[n-1]=maxx;
     for(int i=1;i<n-1;i++){
       if(arr[i]<=maxx-k || arr[i]>=minn+k)continue;
       if(arr[i]-minn>maxx-arr[i] && arr[i]>=k){arr[i]-=k;minn=min(minn,arr[i]);}
       else {arr[i]+=k;maxx=max(maxx,arr[i]);}
     }

     ans=maxx-minn;
   }
   cout << ans;

     delete [] arr;


 }
