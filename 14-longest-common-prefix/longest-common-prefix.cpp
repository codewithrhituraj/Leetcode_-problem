class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        sort(begin(strs),end(strs)); // we sorted beacuse most different two string go to  end of the list 
        string res="";
        string first=strs[0];
        string end=strs[n-1];
        for(int i=0;i<min(first.size(),end.size());i++){
            if(first[i]==end[i]) res+=first[i];
            else return res;
        }
        return res;
        
        
    }
};