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
     vector<int> nums(n);
     for(int i=0;i<n;i++){cin>>nums[i];}

     //Code Starts Here
     int slow = nums[0];
     int fast=nums[0];
     slow=nums[slow];
     fast=nums[(nums[fast])];

     while(slow!=fast){
       slow=nums[slow];
       fast=nums[(nums[fast])];
     }

     slow = nums[0];
     while(slow!=fast){
       slow=nums[slow];
       fast=nums[fast];
     }
     cout << fast << endl;

 }
