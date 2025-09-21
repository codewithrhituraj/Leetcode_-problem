class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int cnt=0;
        unordered_map<int,int> mp;// sum, cnt;
        mp.insert({0,1});
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(sum-k)) cnt+=mp[sum-k];
            mp[sum]++;
        }
        return cnt;

    }
};