// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> res;
        for (int n : nums)
        {
            n = abs(n);
            if (nums[n - 1] > 0)
                nums[n - 1] *= -1;
            else
                res.push_back(n);
        }
        return res;
    }
};

// T.c => o(n) S.c => O(n);

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> m;
        vector<int> v;

        for (auto itr : nums)
            ++m[itr];

        for (auto itr : m)
        {
            if (itr.second > 1)
                v.push_back(itr.first);
        }

        return v;
    }
};