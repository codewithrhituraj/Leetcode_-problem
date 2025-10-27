class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n,-1);
        vector<long long> pref(n,0);
        pref[0]=nums[0];
        if(n<2*k+1) return res;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        for(int i=k;i<n-k;i++){
            int left=i-k;
            int right=i+k;
            long long sum=pref[right];
            if(left>0) sum-=pref[left-1];
            res[i]=sum/(2*k+1);

        }
        return res;
    }
};