class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>,int> mp;
        for(int row=0;row<n;row++){
            mp[grid[row]]++;// firstly we calculated the rows count in map
        }
        int cnt=0;
        for(int c=0;c<n;c++){
            vector<int> temp;
            for(int r=0;r<n;r++){
                temp.push_back(grid[r][c]); // and we calculated columns then we compare 
            }
            cnt+=mp[temp];
        }
        return cnt;
        
    }
};