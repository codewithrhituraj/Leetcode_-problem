class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(begin(strs),end(strs));
        string first=strs[0];
        string second=strs[n-1];
        string temp="";
        for(int i=0;i<min(first.size(),second.size());i++){
            if(first[i]==second[i])
            temp+=first[i];
            else return temp;
        }  
        return temp;      
    }
};