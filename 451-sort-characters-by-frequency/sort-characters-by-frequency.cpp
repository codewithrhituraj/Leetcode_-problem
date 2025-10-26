class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto& it: mp){
            char ch= it.first;
            int freq=it.second;
            pq.push({freq,ch});
        }
        string res;
        while(!pq.empty()){
            int a=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            res+=string(a,ch);
        }
        return res;
        
    }
};