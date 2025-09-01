class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n= strs.size();
      sort(begin(strs),end(strs));
      string first= strs[0];
      string last= strs[n-1];
      string res="";
      for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]) res+=first[i];
        else return res;

      }
      return res;
        
    }
};