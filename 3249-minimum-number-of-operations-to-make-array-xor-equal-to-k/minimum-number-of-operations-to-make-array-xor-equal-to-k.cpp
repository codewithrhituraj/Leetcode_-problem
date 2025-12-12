class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total_xor=0;
        for(auto& it: nums){
            total_xor=total_xor^it;

        }
        int diff=total_xor^k;
        return __builtin_popcount(diff);
        
    }
};