class Solution {
public:
    int find_pivot (vector<int>& nums,int l, int r){
        while(l<r){
            // skip duplicate
            while(l<r and nums[l]==nums[l+1]) l++;
            while(l<r and nums[r]==nums[r-1]) r--;
            int mid= l+(r-l)/2;
            if(nums[mid]> nums[r]) l=mid+1;
            else // nums[mid]< nums[r]
            r=mid;// possible
        }
        return r;
    }

    bool binary_search(vector<int>& nums,int l, int r ,int& target){
        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]> target ) r=mid-1;
            else l=mid+1;
        }
        return false;
    }


 
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot= find_pivot(nums,0,n-1);
        if(binary_search(nums,0,pivot-1,target)){
            return true;
        }
        return (binary_search(nums,pivot,n-1,target));

    }
};