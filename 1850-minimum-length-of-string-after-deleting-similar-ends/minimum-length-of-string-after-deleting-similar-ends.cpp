class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int n=s.size();
        int j=n-1;
        while(i<j and s[i]==s[j]){ // here first and last ch same so dw worry 
            char ch=s[i];
            while(i<j and s[i]==ch) i++;
            while(j>=i and s[j]==ch) j--;
        }
        return j-i+1;
        
    }
};