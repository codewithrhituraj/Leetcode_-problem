class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
       double maxx = INT_MIN;    
        int i=0;
        int j=0;
         int sum=0;
        while(j<n){
           
            sum+=nums[j];
            if(j-i+1 ==k){
              if(sum>maxx) maxx=sum;
                // maxx=max(maxx,sum);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return maxx/k;
        
    }
};