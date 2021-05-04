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
	 int t;
	 cin>>t;
	 while(t--){
	 	  int n;
      cin >> n;
      int * a = new int [n];
      for(int i=0;i<n;i++)cin>>a[i];
      cout << a[n-1] << " ";
      for(int i=0;i<n-1;i++)cout << a[i] << " ";
      cout << endl;
      delete [] a;

	 }

 }
