class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(begin(arr),end(arr));
        int minn=INT_MAX;
        int n=arr.size();
        for(int i=1;i<n;i++){
            minn=min(minn,arr[i]-arr[i-1]);
        }
        vector<vector<int>> v;
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            if(diff==minn) v.push_back({arr[i-1],arr[i]});
        }
        return v;

        
    }
};