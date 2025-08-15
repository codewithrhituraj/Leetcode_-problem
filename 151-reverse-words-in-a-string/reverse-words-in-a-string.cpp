class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token="";
        string res="";
        while(ss>>token){ // ss take the words from the string and ss>> token means one words transfer to the token one a=fter one ;
            res= token+" "+res;
        }
        res.pop_back();
        return res;

        
    }
};