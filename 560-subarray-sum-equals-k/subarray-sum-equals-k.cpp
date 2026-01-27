class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        // i have to store prefix sum with how many time you saw 

         // (nums[i]-k) --> in stored prefix sum then there is a possibility that there is a subbarray possible 
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(sum-k)) cnt+=mp[sum-k];
            mp[sum]++;

        }
        return cnt;

        
    }
};