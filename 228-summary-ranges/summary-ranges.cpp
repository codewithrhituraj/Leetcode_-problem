class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n=nums.size();
        if(n==0) return {};
        for(int i=0;i<n;i++){
            int start=nums[i];
            while(i+1<n and nums[i+1]==1+nums[i]){
                i++;
            }
            if(start!=nums[i]) res.push_back(to_string(start)+"->"+to_string(nums[i]));
            else res.push_back(to_string(start));
        }
        return res;

        
    }
};