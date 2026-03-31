class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string res;
        string token;
        while(ss>>token){
            res=token;
        }    
        return res.size();  
    }
};