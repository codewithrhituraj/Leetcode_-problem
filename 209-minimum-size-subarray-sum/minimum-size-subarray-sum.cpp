class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int i=0;
        int j=0;
        int mil=INT_MAX;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                mil=min(mil,j-i+1);
                sum-=nums[i];
                i++;

            }
            j++;
        }
        if(mil==INT_MAX) return 0;
        return mil;

        
    }
};