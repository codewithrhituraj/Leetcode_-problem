class Solution {
public:
    bool isVowel(char& ch){
        return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
    }
    int maxVowels(string s, int k) {
        
        int n= s.length();
        int val=0;
        int maxval=0;
        int i=0;
        int j=0;
        while(j<n){
            if(isVowel(s[j])){
                val++;
            }
            if(j-i+1 == k){
                maxval=max(maxval,val);
                if(isVowel(s[i])){
                    val--;
                }
                i++;

            }
            j++;
        }
        return maxval;
    }
};