class Solution {
public:
    bool vowels(char& ch){
        return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
    }
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int cnt=0;
        int maxval=0;
        int n=s.length();
        while(j<n){
            if(vowels(s[j])) cnt++;
            if(j-i+1 == k){
                maxval=max(maxval, cnt);
                if(vowels(s[i])) cnt--;
                i++;
            }

            j++;
        }
        return maxval;
        
    }
};