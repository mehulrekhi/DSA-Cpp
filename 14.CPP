//Submitted on Leetcode
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int> > ans;
        for(auto x:intervals){
          if(ans.empty())ans.push_back(x);
          else{
            if(x[0]<=ans.back()[1]){
              ans.back()[1]=max(ans.back()[1],x[1]);
            }
            else{
              ans.push_back(x);
            }
          }
        }
        return ans;
    }
