class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res="";
        int n= s.size();
        for(int i=0;i<n;i++){
            if(st.empty() or st.top()!=s[i]){
                st.push(s[i]);
            }
            else st.pop();
        }  
        while(!st.empty()){
            res+=st.top();
            st.pop();
        } 
        reverse(res.begin(),res.end());
        return res;    
    }
};