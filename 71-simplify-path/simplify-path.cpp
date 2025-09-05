class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string token;
        while(getline(ss,token,'/')){ // tokenise the string with the basis of /
          if(token=="" or token==".") continue;
          if(token != ".."){
            st.push(token);
        }
        else if(!st.empty() and token==".."){
            st.pop();
         }

        }


        if(st.empty()) return "/";
        string res;
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        return res;
        
    }
};