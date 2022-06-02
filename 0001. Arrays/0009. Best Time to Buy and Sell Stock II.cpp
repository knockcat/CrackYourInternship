// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int mxprofit = 0;

        for (int i = 1; i < n; ++i)
        {
            if (prices[i] > prices[i - 1])
                mxprofit += prices[i] - prices[i - 1];
        }
        return mxprofit;
    }
};

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> t(n, 0);

        for (int i = 1; i < n; ++i)
        {
            t[i] = max(t[i - 1], t[i - 1] + prices[i] - prices[i - 1]);
        }

        return t[n - 1];
    }
};