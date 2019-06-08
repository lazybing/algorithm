class Solution {
    public:
        int maxProfit (vector<int>& prices) {
            if (prices.size() == 0)
                return 0;

            int maxprofit = 0;
            int minprice  = prices[0];

            for (int i = 1; i < prices.size(); i++) {
                if (prices[i] < minprice)
                    minprice = prices[i];
                else
                    maxprofit = ((prices[i] - minprice) > maxprofit) ? prices[i] - min : maxprofit;
            }

            return maxprofit;
        }

};
