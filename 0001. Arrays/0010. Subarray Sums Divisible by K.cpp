// https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> cnt(k, 0);
        int sum = 0;

        for (int x : nums)
        {
            sum += (x % k + k) % k;
            ++cnt[sum % k];
        }

        int res = cnt[0];
        // for 0 case nC2 + n;
        for (auto x : cnt)
            res += (x * (x - 1)) / 2; // nC2
        return res;
    }
};