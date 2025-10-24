class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res="";
        string token="";
        while(ss>>token){
            res=token+" "+res;
        }
        res.pop_back();
        return res;
    }
};