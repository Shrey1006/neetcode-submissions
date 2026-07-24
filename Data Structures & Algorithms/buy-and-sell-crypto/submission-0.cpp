class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;
        int buyprices = prices[0];
        for(int i=0; i<prices.size(); i++){
            profit = max(profit, prices[i] - buyprices);
            if(buyprices > prices[i]){
                buyprices = prices[i];
            }
        }
        if(profit<=0) return 0;
        return profit;
    }
};
