class Solution {
public:
    bool canExist(vector<int>& piles,int mid,int h){
        int actual=0;
        for(auto& x: piles){
            actual+=x/mid;
            if(x%mid!=0) actual++;
        }
        return actual<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l=1;
        int r=*max_element(begin(piles),end(piles));
        while(l<r){
            int mid = l+(r-l)/2;
            if(canExist(piles,mid,h)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};