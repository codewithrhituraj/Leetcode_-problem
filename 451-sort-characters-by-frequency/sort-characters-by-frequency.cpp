class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto& x: s){
            mp[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto& it: mp){
            int a=it.first;// ch
            int b=it.second;// int;
            pq.push({b,a});
        }
        string res;
        while(!pq.empty()){
            int a=pq.top().first;// int
            int b=pq.top().second;
            pq.pop();
            res+=string(a,b);

        }
        return res;
    }
};