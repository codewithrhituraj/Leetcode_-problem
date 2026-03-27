class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n= s.length();
        for(auto& x: s){
            if(st.empty() or x=='(' or x=='{' or x=='['){
                st.push(x);
                continue;
            }
            else if(x==')'){
                if(st.top()=='(') st.pop();
                else return false;

            }
            else if(x=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }
            else{
                if(st.top()=='[') st.pop();
                else return false;
            }
        }
        return st.empty()? true: false;
        
    }
};