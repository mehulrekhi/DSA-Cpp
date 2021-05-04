#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i=n-1;
        for(;i>0;i--){
          if(nums[i]>nums[i-1])break;
        }
        if(i==0){reverse(nums.begin(),nums.end());}
        else{
          i-=1;
          int minInd = n-1;
          while(i<minInd){
            if(nums[minInd]>nums[i])break;
            else minInd--;
          }
          swap(nums[i],nums[minInd]);
          sort(nums.begin()+i+1,nums.end());
        }
        for(int x:nums)cout << x << " ";
    }

int main () {

 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	#ifndef ONLINE_JUDGE
 		freopen("E:/CODES/input.txt","r",stdin);
 		freopen("E:/CODES/output.txt","w",stdout);
 	#endif

  int n,temp;
  cin >> n;
  vector<int> nums;
  for(int i=0;i<n;i++){cin>>temp;nums.push_back(temp);}

  nextPermutation(nums);


 }
