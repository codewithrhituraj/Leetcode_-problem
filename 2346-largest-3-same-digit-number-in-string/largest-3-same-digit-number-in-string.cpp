class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        char maxx=' ';
        for(int i=2;i<n;i++){
            if(num[i]==num[i-1] and num[i]==num[i-2]){
                maxx=max(maxx, num[i]);
            }
        }
        if(maxx==' ') return "";
        return string(3,maxx); 
        
    }
};