class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;  
        vector<string> push(numRows,"");
        int down=true;
        int r=0;
        for(char c: s){
            push[r]+=c;
            if(r==0) down=true;
            else if(r==numRows-1) down =false;


            r+=(down ? 1 :-1);
        }
        string ans="";
        for(auto ch: push){
            ans+=ch;
        }
        return ans;
    }
};