// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int sum = 0;
        unordered_map<int, int> m;
        int cnt = 0;

        for (auto itr : nums)
        {
            sum += itr;

            if (sum == k)
                ++cnt;
            if (m.find(sum - k) != m.end())
                cnt += m[sum - k];
            if (m.find(sum) != m.end())
                ++m[sum];
            else
                m[sum] = 1;
        }
        return cnt;
    }
};

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int sum = 0, cnt = 0;
        unordered_map<int, int> m;

        m.insert({0, 1});
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];

            auto itr = m.find(sum - k);
            if (itr != m.end())
                cnt += itr->second;

            itr = m.find(sum);
            if (itr != m.end())
                ++itr->second;
            else
                m.insert({sum, 1});
        }
        return cnt;
    }
};