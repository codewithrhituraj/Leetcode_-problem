class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch: s){
            if(st.empty() or ch=='(' or ch=='{' or ch=='['){
                st.push(ch);
                continue;
            }
            else if(ch==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else return false;
            }
            else if(ch=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else return false;
            }
            else if(ch==']'){
                if(st.top()=='['){
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty() ? true: false;
        
    }
};