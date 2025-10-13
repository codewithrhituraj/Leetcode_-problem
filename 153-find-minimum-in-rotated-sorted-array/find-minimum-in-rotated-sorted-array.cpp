class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int mid= l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{//nums[mid]<=nums[r];
            r=mid;

            }
        }
        return nums[r];
    }
};