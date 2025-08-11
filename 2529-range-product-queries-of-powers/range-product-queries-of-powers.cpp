class Solution {
public:
     int m= 1e9 +7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> power;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0){ // ith bit is set or not
             power.push_back(1<<i);

            }
        }
        vector<int> res;

        for(auto& query: queries){
            int start=query[0];
            int end=query[1];
            long long product=1;
            for(int i=start;i<=end;i++){
                product=(product*power[i])%(m);

            }
            res.push_back(product);
        }
        return res;
        
    }
};