class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;

        int profit = 0;

        while (right < prices.size()){
            if(prices[left] < prices[right]){
                int current_profit = prices[right] - prices[left];
                profit = max(profit, current_profit);
            } else{
                left = right;
            }
            right++;


        }
        return profit;

        
    }
};
