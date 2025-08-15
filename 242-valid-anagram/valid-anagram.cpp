class Solution {
public:
    bool isAnagram(string s, string t) {
          if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }

        for(int j=0;j<t.length();j++){
            mp2[t[j]]++;
        }

        for(auto& x: mp1){
            int ch=x.first;
            int freq=x.second;
            if(mp2.count(ch)){
                int freq2=mp2[ch];
                if(freq!=freq2) return false;

            }
            else return false;
        }
        return true;
        
    }
};