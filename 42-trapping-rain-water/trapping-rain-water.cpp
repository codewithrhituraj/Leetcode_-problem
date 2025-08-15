class Solution {
public:
    vector<int> getleftmax(vector<int>& height,int& n){
        vector<int> left(n);
        left[0]=height[0];
        for(int i=1;i<n;i++){
            left[i]=max(height[i],left[i-1]);
        }
        return left;
    }


        vector<int> getrightmax(vector<int>& height,int& n){
        vector<int> right(n);
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(height[i],right[i+1]);
        }
        return right;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left=getleftmax(height,n);
        vector<int> right=getrightmax(height,n);
        int sum=0;
        int h=0;
        for(int i=0;i<n;i++){
            h=min(left[i],right[i])-height[i];
            sum+=h;

        }
        return sum;

        
    }
};