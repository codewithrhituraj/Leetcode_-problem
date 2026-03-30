class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int deg=3;
        int n= mat.size();
        if(mat==target) return true;
        while(deg>=0){
            //transpose;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
                }
            }

            // reverse;
            for(int k=0;k<n;k++){
                reverse(mat[k].begin(),mat[k].end());
            }
            deg--;
            if(mat==target) return true;
        }
        return false;

    }
};