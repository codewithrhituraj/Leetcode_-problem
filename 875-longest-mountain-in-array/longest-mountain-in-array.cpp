class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=1;i<=n-2;){
            //first we check the element is in mountain or not
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                int j=i;
                int cnt=1; // for mid elemnt 
                
                while(j>0 and arr[j]>arr[j-1]){
                    j--;
                    cnt++;
                }
                while(i<n-1 and arr[i]>arr[i+1]){
                    i++;
                    cnt++;
                }
                ans=max(cnt,ans);
            }
            else i++;
        }
        return ans;
        
    }
};