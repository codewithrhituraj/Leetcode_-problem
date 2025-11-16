class Solution {
public:
    bool solve(string& s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){

                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.length();
        int maxlen=INT_MIN;
         int startingIndex = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)){
                    if(maxlen<j-i+1){
                        maxlen=j-i+1;
                        startingIndex=i;
                    }
                }
            }
        }
      return s.substr(startingIndex, maxlen);
        
    }
};