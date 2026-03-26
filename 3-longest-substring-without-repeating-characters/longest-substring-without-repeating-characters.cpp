class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n= s.length();
        int i=0;
        int maxlen=0;
        for(int j=0;j<n;j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            int len=j-i+1;
            maxlen=max(len,maxlen);

        }

        return maxlen;
        
    }
};