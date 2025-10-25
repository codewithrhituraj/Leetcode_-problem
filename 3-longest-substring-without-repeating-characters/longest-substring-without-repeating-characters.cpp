class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s1;
        int maxlen=0;
        int left=0;
        int n=s.length();
        for(int r=0;r<n;r++){
            while(s1.count(s[r])){
                s1.erase(s[left]);
                left++;
            }
            s1.insert(s[r]);
            int ans= r-left+1;
            if(ans>maxlen) maxlen=ans;
        }
        return maxlen;
        
    }
};