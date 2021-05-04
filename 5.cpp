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

     int toplace = 0;
     for(int i=0;i<n;i++){
       if(arr[i]>=0)continue;
       else{
         swap(arr[i],arr[toplace++]);
       }
     }

     for(int i=0;i<n;i++)cout << arr[i] << " ";
     cout << endl;

     delete [] arr;

 }
