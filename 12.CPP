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
	 int n,m,*arr1,*arr2;
   cin >> n >> m;
   arr1 = new int [n];
   arr2 = new int [m];
   for(int i=0;i<n;i++)cin >> arr1[i];
   for(int i=0;i<m;i++)cin >> arr2[i];

   //Code starts
   for(int i=0;i<n;i++){
     if(arr1[i]<=arr2[0])continue;
     //cout << arr1[i] << " & " << arr2[0];
     swap(arr1[i],arr2[0]);
     int j=0;
     while(j<m-1){
       if(arr2[j]>arr2[j+1]){swap(arr2[j],arr2[j+1]);j++;}
       else break;

     }
   }

   for(int i=0;i<n;i++)cout << arr1[i] << " ";
   for(int i=0;i<m;i++)cout << arr2[i] << " ";

   delete [] arr1;
   delete [] arr2;

 }
