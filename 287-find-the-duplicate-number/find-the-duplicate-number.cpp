class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        // sort(begin(nums),end(nums));
        // int d=0;
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         d=nums[i];
        //         break;
        //     }
        // }
        // return d;

        // linear
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        int res;

        for(auto& it: mp){
            if(it.second>1){
                res=it.first;
            }
        }
        return res;
    }
};