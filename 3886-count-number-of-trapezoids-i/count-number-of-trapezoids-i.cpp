class Solution {
public:
    int M = 1e9+7;
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int> mp; //y-axis corresponding how much points are available
        for(auto& it: points){
            int y=it[1];
            mp[y]++;
            //x1,y1,x2,y1,....

        }
        long long res=0;
        long long prevhorizontal=0;
        for(auto& it: mp){
            int cnt=it.second;
            long long horizontallines=(long long)cnt*(cnt-1)/2; // number of lines 
            res+=horizontallines*prevhorizontal; // total 
            prevhorizontal+= horizontallines;// if multiple y axis 
        }
        return res%M;
    }
};