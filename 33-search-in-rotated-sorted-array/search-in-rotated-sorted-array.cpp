class Solution {
public:
   int  pivot_idx(vector<int>& nums,int& n){
    int l=0;
    int r=n-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[r]) l=mid+1;
        else r=mid;
    }
    return r;
   }

   int binary_search(int l,int r,vector<int> nums,int& target,int& n){
        int idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) {
                idx=mid;
                break;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else l=mid+1;

        }
        return idx;
   }
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int pivot=pivot_idx(nums,n);
        int idx=binary_search(0,pivot-1,nums,target,n);
        if(idx!=-1) return idx;
        idx=binary_search(pivot,n-1,nums,target,n);
        return idx;

        
    }
};