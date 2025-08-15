class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long sum=0;
        long long res=0;
        int n= nums.size();
        int i=0;
        int j=0;
        while(j<n){
            while(st.find(nums[j])!=st.end()){ //subarra should be distinct 
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