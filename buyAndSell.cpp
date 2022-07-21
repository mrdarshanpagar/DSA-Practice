class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<int> preMax(prices.size());

        int maxPrice = INT_MIN;
        for(int i=prices.size() - 1; i >= 0; i--){
            maxPrice = max(maxPrice, prices[i]);
            preMax[i] = maxPrice;
        }
        
        int profit = 0;
        for(int i=0; i < prices.size(); i++){
            profit = max(profit, (preMax[i] - prices[i]));
        }
        
        return profit;
    }
};
