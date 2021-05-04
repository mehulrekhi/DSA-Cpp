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
	 int n,temp;
   cin >> n;
   int * arr = new int [n];
   for(int i=0;i<n;i++)cin >> arr[i];

   for(int i=0;i<n/2;i++){
     temp=arr[i];
     arr[i]=arr[n-i-1];
     arr[n-i-1]=temp;
   }

   for(int i=0;i<n;i++)cout << arr[i] << " ";
   cout << endl;

   delete [] arr;

 }
