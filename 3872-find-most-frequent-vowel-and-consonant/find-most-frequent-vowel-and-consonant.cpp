class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int vow=0;
        int con=0;
        for(char i='a';i<='z';i++){
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'){
                vow=max(vow,freq[i-'a']);
            }
            else con=max(con,freq[i-'a']);
        }
        return vow+con;

        
    }
};