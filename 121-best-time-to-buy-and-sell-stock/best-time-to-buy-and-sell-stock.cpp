class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=0;
        int buy=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
            sell=max(sell,(prices[i]-buy));
            buy=min(buy,prices[i]);

        }
        return sell;
        
    }
};