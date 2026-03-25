class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int maxfreq=0;
        int ans=-1;
        for(auto& it: mp){
            int freq=it.second;
            int num=it.first;

            if(freq>maxfreq){
                maxfreq=freq;
                ans=num;
            }
            else if(freq==maxfreq ){
                ans=min(ans,num);
            }
        }
        return ans;

        
    }
};