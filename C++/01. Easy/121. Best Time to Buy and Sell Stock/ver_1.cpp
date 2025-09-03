class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = prices[0], max_profit = 0;
        
        for (int i=1; i<(int(prices.size())); i++) {
            min_value = std::min(prices[i], min_value);
            max_profit = std::max((prices[i]-min_value), max_profit);
        }

        return max_profit;
    }
};
