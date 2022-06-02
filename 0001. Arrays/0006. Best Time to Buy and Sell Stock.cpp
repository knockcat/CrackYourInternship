// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mx = 0;
        int mn = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i)
        {
            profit = prices[i] - mn;

            if (profit > mx)
                mx = profit;
            if (prices[i] < mn)
                mn = prices[i];
        }

        return mx;
    }
};