class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string token="";
        while(getline(ss,token,'/')){
            if(token=="." or token==""){
                continue;
            }
            if(token!="..") st.push(token);
            else if(!st.empty() and token=="..") st.pop();
            
        }
        string res="";
        if(st.empty()) return "/";
        while(!st.empty()){
            res='/'+st.top()+res;
            st.pop();
        }
        return res;
    }
};