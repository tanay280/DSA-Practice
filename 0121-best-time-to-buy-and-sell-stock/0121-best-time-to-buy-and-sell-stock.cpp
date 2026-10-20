class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        int minp = prices[0];
        int maxp = 0;
        for(int i = 1; i < n; i++) 
        {
            minp = min(minp, prices[i]);
            int profit = prices[i] - minp;
            maxp = max(maxp, profit);
        }
        return maxp;
    }
};