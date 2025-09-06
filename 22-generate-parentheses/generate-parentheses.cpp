class Solution {
public:
    vector<string> res;
    bool isvalid(string str){
        int cnt=0;
        for(auto& ch : str){
            if(ch=='(') cnt++;
            else cnt--;
            if(cnt<0 )  return false;

        }
        return cnt==0 ? true : false;
    }
    void solve(string& curr, int n){
        if(curr.length()==2*n){
            if(isvalid(curr)){
                res.push_back(curr);
            }
            return;
        }
      
       curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        solve(curr,n);
        return res;


        
    }
};