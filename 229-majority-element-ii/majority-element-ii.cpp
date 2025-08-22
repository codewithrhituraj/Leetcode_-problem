class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        n=n/3;
        for(auto x: mp){
          

            if(x.second>n){
                ans.push_back(x.first);
            }
        }
  return ans;
        
    }
};