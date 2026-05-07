class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n= nums.size();
        unordered_set<int> st;
        while(j<n){
            if(abs(i-j)>k){
                st.erase(nums[i]);
                i++;
            }
            //past mein dekha h
            if(st.count(nums[j])) return true;

            



            st.insert(nums[j]);
            j++;
        }
        return false;

        
    }
};