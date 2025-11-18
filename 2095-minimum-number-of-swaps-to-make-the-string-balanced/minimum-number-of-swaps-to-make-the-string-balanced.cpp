class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        stack<int> st;
        for(auto& it: s){
            if(it=='[') st.push(it);
            else if(!st.empty())
                st.pop();
        }
        return (st.size()+1)/2;
        
    }
};