https : // leetcode.com/problems/find-the-duplicate-number/

        class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int low = 1, high = nums.size() - 1, cnt;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for (int n : nums)
            {
                if (n <= mid)
                    ++cnt;
            }
            // binary search on left
            if (cnt <= mid)
                low = mid + 1;
            else
                // binary search on right
                high = mid - 1;
        }
        return low;
    }
    // for github repository link go to my profile.
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ind = 0;

        // sort the vector
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // if two consecutive elements are equal
            // you have find a duplicate
            // break the loop
            if (nums[i] == nums[i + 1])
            {
                ind = nums[i];
                break;
            }
        }
        // return duplicate value
        return ind;
    }
    // for github repository link go to my profile.
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // initialise cnt vector of size nums with 0
        vector<int> cnt(nums.size(), 0);
        int ind = 0;

        // store the cnt of each value in the cnt vector
        for (int i = 0; i < nums.size(); i++)
        {
            cnt[nums[i]]++;
        }

        for (int i = 0; i < cnt.size(); i++)
        {
            // if cnt[i] > 1
            // this means that element occur more than once in nums
            // we have to return i
            if (cnt[i] > 1)
            {
                ind = i;
                break;
            }
        }

        return ind;
    }
    // for github repository link go to my profile.
};

// 😉😉😉😉Please upvote if it helps 😉😉😉😉
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        int duplicate = 0;
        for (auto i = 0; i < nums.size(); ++i)
            ++m[nums[i]];

        for (auto i : m)
        {
            if (i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
    // for github repository link go to my profile.
};
