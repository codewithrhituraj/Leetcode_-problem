class Solution {
public:
    vector<int> countBits(int n) {
        //__builtin_popcount(x);
        vector<int> v(n+1);
        for(int i=0;i<n+1;i++){
            v[i]=__builtin_popcount(i);// count the bit in that number 
        }
        return v;
    }
};