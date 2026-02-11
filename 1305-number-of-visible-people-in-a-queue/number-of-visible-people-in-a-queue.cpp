class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int> arr(n,0);
        stack<int> st;
        st.push(heights[n-1]);
        arr[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int cnt=0;
            while(!st.empty() and heights[i]> st.top())
        {
            st.pop();
            cnt++;
        }
        if(st.size()>0) cnt++;
        arr[i]=cnt;
        st.push(heights[i]);

        }
        return arr;
        
    }
};