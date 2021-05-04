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

     cin >>arr[0];
     int min = arr[0], max = arr[0];

     for(int i=1;i<n;i++){
       cin >> arr[i];
       if(arr[i]>max){max=arr[i];}
       else if(arr[i]<min){min=arr[i];}

     }

     cout << "MAX :" << max << endl << "MIN :" << min << endl;

     delete [] arr;

 }
