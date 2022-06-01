// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 0 || nums.size() == 1)
            return nums.size();

        int j = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[j])
            {
                ++j;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
};

// Not a good approach as it uses extra space

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s;

        for (int i = 0; i < nums.size(); ++i)
            s.insert(nums[i]);

        nums.clear();

        for (auto itr : s)
            nums.push_back(itr);

        return nums.size();
    }
};