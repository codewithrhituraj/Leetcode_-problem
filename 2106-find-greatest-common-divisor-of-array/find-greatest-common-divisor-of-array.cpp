class Solution {
public:
    int GCD(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        int low=nums[0];
        int high= nums[n-1];
       return GCD(low,high);

        
    }
};