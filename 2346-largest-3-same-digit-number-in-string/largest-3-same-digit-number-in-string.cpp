class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        char maxx=' ';
        for(int i=0;i<=n-3;i++){
            if(num[i]==num[i+1] and num[i]==num[i+2]){
                maxx=max(maxx,num[i]);
            }
        }    
        return maxx==' ' ? "" : string(3,maxx);    
    }
};