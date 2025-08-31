class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int noz=0;
        // int noo=0;
        // int nott=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0) noz++;
        //     else if(nums[i]==1) noo++;
        //     else nott++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(i<noz) nums[i]=0;
        //     else if(i<noz+noo) nums[i]=1;
        //     else nums[i]=2;
        // }

        //O(n)

        int i=0; //0
        int j=0; //1
        int n=nums.size();
        int k=n-1; //2
        while(j<=k){
            if(nums[j]==1) j++;
            else if(nums[j]==2) {
                swap(nums[j],nums[k]);
                k--;
            }
            else {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }

        }
    }

};