class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        // agr humlog ko diagonally kuch ops karna h toh i+j or i-j technique
        //use karo
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool flip=true;
        vector<int> res;
        for(auto& it : mp){
            if(flip){
                reverse(it.second.begin(),it.second.end());

            }
            for(int num: it.second){
                res.push_back(num);
            }
            flip=!flip;

            
        }
        return res;
        
    }
};