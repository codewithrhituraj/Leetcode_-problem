class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        n=n/3;
        for(auto& it:mp){
            if(it.second> n){
                v.push_back(it.first);
            }
        }

return v;

        
    }
};