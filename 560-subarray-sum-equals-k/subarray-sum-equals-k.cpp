class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
       //brute force , not optimal
        int cnt=0;
        unordered_map<int,int> mp;
        mp.insert({0,1});
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(sum-k)){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;

    }
};