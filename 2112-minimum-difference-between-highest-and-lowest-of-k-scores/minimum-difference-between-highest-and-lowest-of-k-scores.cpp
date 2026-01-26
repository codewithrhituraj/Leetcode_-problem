class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n= nums.size();
        int mindiff=INT_MAX;
        sort(begin(nums),end(nums));
        int i=0;
        int j=k-1;
        while(j<n){
            int maxel=nums[j];
            int minel=nums[i];
            mindiff=min(mindiff,maxel-minel);
            i++;
            j++;
            
        }
        return mindiff;
        
    }
};