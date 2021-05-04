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
     int zero,one,two;
     zero=one=two=0;

     for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]==0)zero++;
        else if(arr[i]==1)one++;
        else two++;
     }

     while(zero--)cout << "0 ";
     while(one--)cout << "1 ";
     while(two--)cout << "2 ";
     cout << endl;

     delete [] arr;

 }
