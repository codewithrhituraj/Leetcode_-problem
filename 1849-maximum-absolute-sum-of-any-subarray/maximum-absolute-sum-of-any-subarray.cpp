class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currsubarray=nums[0];
        int maxsubarray=nums[0];
        int n=nums.size();
        //for max
        for(int i=1;i<n;i++){
            currsubarray=max(nums[i],currsubarray+nums[i]);
            maxsubarray =max(currsubarray,maxsubarray);
        }
        //for min
        currsubarray=nums[0];
        int minsubarray=nums[0];
        for(int i=1;i<n;i++){
            currsubarray=min(nums[i],currsubarray+nums[i]);
            minsubarray=min(minsubarray,currsubarray);
        }

        return max(abs(minsubarray),maxsubarray);
        
    }
};