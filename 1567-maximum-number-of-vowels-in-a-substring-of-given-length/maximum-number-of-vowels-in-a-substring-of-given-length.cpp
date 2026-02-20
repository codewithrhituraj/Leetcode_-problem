class Solution {
public:
    bool isvowels(char& ch){
        return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
    }
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int val=0;
        int maxl=INT_MIN;
        int n=s.length();
        while(j<n){
            if(isvowels(s[j])){
                val++;
            }
            if(j-i+1==k){
                maxl=max(maxl,val);
                if(isvowels(s[i])) val--;
                i++;
            }
            j++;
        }
        return maxl;
        
    }
};