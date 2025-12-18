class Solution {
public:
    bool check(int i,int j,string& s){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxx=INT_MIN;
        int start=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(i,j,s)){
                    if(maxx<j-i+1){
                        maxx=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxx);

        
    }
};