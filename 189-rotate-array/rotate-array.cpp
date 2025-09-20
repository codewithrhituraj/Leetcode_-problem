class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(begin(nums),end(nums)-k);
        reverse(end(nums)-k,end(nums));
        reverse(begin(nums),end(nums));
    }
};