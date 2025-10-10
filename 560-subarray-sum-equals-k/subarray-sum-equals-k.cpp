class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int> mp; // sum,cnt;
        // 1,2,3----> 2-2 =0 ,3-2=1   mp[1]=1; beacuse we deal with prefix sum so we assume 0 has 1 value beacause in prefix sum we calculated the value before 1 
        int sum=0;
        mp.insert({0,1});
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