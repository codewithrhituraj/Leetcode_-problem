class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        int minkposition=-1;
        int maxkposition=-1;
        int culpritidx=-1;
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            if(nums[i] < minK or nums[i] > maxK) culpritidx=i;
            if(nums[i]==minK) minkposition=i;
            if(nums[i]==maxK) maxkposition=i;
            int smaller=min(minkposition,maxkposition);
            int cnt=smaller-culpritidx;
            if(cnt<=0) ans+=0;
            else ans+=cnt;
        }
        return ans;
    }
};