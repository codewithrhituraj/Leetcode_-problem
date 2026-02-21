class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long res=0;
        long long sum=0;
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            while(st.count(nums[j])){
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }


            sum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k){
                res=max(res,sum);
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return res;

        
    }
};