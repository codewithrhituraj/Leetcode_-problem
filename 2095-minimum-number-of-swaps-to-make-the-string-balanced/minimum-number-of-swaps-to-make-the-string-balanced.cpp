class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
      //  stack<int> st;
      int cnt=0;
        for(auto& it: s){
            if(it=='[') cnt++;
            else if(cnt!=0)
                cnt--;
        }
        return (cnt+1)/2;
        
    }
};