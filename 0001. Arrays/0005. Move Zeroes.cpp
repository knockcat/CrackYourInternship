// https://leetcode.com/problems/move-zeroes/

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            int j = i;
            if (nums[i] == 0)
            {
                while (nums[j] == 0 && j < nums.size() - 1)
                    ++j;
                swap(nums[i], nums[j]);
            }
        }
    }
};