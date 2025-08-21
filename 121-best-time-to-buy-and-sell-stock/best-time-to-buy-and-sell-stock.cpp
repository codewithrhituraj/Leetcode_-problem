class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=0;
        int mini=prices[0];
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            cost=prices[i]-mini;
            mini=min(prices[i],mini);
            profit=max(cost,profit);
        }
        return profit;
    }
};