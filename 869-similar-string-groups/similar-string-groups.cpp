class Solution {
public:
    bool isSimilar(string &strs1,string &strs2){
        int diff=0;
        int n=strs1.size();

        for(int i=0;i<n;i++){
            if(strs1[i]!=strs2[i]) diff++;
        }
        return diff==0 || diff==2;
    }


    void DFS(int u,unordered_map<int,vector<int>> &adj, vector<bool> &visited){
        visited[u]=true;
        for(auto& v: adj[u]){
            if(!visited[v])

                DFS(v,adj,visited);
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        int n=strs.size();
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isSimilar(strs[i],strs[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> visited(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(i,adj,visited);
                cnt++;
            }

        } 
        return cnt;

        
    }
};