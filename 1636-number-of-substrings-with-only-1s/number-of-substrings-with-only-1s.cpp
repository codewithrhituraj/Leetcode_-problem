class Solution {
public:
    int numSub(string s) {
        int M= 1e9+7;
        long long cnt1=0;
        long long res=0;
        for(auto& ch: s){
            if(ch=='1'){
                cnt1++;
                //res=(res+cnt1)
            }
            else {// ch==1;
                res=(res+cnt1*(cnt1+1)/2)%M;
                cnt1=0;
            }
        }
       res=(res+cnt1*(cnt1+1)/2)%M;
        return (int)res;

        
    }
};