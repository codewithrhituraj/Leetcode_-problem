class Solution {
public:
   bool isPalindrom(string& s, int left,int right){
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
   }
   
    bool validPalindrome(string s) {
        int left =0;
        int right= s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return isPalindrom(s,left+1,right) or isPalindrom(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};