class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums2.size();
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top() <=nums2[i]){
                st.pop();
            }
            if(st.size()==0) mp[nums2[i]]=-1;
            else {
                mp[nums2[i]]=st.top();

            }


           // mp[nums2[i]]=-1;
            st.push(nums2[i]);
        }
        vector<int> ans;

        for(auto& c: nums1){
            ans.push_back(mp[c]);
            
        }
        return ans;
        
    }
};