#include <bits/stdc++.h>
using namespace std;
#define ll long long int

//Configured for min cuurently

int fun(int * arr, int n, int s, int e, int numindex){
  int toplace = s;
  for(int i=s;i<=e;i++){
    if(arr[i]<arr[numindex]){swap(arr[i],arr[toplace++]);}
    else continue;
  }
  swap(arr[toplace],arr[numindex]);
  return toplace;
}

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

       int n,k;
       cin >> n;
       int * arr = new int [n];
       for(int i=0;i<n;i++)cin >>arr[i];

       cin >> k;

       int ans=-1;
       int s=0,e=n-1;

       while(ans!=k-1){
         int pivot = rand();
         pivot = s+(pivot%(e-s+1));
         swap(arr[pivot],arr[e]);
         ans = fun(arr,n,s,e-1,e);
         if(ans==k-1){cout << arr[ans] << endl;break;}
         else if(ans<k-1){s=ans+1;}
         else{e=ans-1;}
       }

       delete [] arr;


     }

 }
