class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long n= x;
        int temp=0;
        long long num=0;

        while(n>0){
            int digit= n%10;
            //int num= 0;
            num= (num*10)+digit;
            n=n/10;
        }if(x==num) return true;
        else return false;

        
    }
};