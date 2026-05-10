class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n= s.length();
        for(int i=0;i<n;i++){
            if(st.empty() or s[i]=='(' or s[i]=='{' or s[i]=='[' ){
                st.push(s[i]);
                continue;
            }
            else if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else return false;
            }
            else if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                if(st.top()=='['){
                    st.pop();
                }
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
        
    }
};