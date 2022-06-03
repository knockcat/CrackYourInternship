// https://leetcode.com/problems/3sum/

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> v;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = nums.size() - 1;

            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    v.push_back({nums[i], nums[j], nums[k]});
                    ++j;
                    while (j < k && nums[j] == nums[j - 1])
                        ++j;
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                    ++j;
                else
                    --k;
            }
        }

        return v;
    }
};