class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int summ=nums[0];
        int currsum=nums[0];
        for(int i=1;i<n;i++){
            //kadanes algo
           currsum=max(nums[i],nums[i]+currsum);
           summ=max(summ,currsum);

            
        }
        return summ;
        
    }
};