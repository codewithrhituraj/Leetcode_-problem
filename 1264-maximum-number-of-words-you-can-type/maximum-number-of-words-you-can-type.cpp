class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool mp[26] = {false};
        for (char &ch : brokenLetters)
            mp[ch - 'a'] = true;

        bool good = true;
        int cnt = 0;
        int n = text.size();

        for (int i = 0; i <= n; i++) {  
            if (i == n || text[i] == ' ') {   
                if (good) cnt++;
                good = true;                  
            } else {
                if (mp[text[i] - 'a']) good = false;
            }
        }
        return cnt;
    }
};
