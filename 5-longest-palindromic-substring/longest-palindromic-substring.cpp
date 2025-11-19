class Solution {
public:
   bool check(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
          
        }
          i++;
            j--;

    }
    return true;
   }
    string longestPalindrome(string s) {
        int start=0;
        int maxx=INT_MIN;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j)){
                    //if true;
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