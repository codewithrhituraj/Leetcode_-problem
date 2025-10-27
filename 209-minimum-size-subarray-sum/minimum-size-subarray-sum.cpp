class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int sum=0;
        int res=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                res=min(res,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(res==INT_MAX){
            return 0;
        }
        else return res;
    }
};