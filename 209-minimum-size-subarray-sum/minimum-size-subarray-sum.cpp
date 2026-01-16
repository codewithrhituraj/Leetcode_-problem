class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int j=0;
        int res=INT_MAX;
        int summ=0;
        while(j<n){
            summ+=nums[j];
            while(summ>=target){
                res=min(res,j-i+1);
                summ-=nums[i];
                i++;

            }
            j++;
        }
        if(res==INT_MAX) return 0;
        else return res;

        
    }
};