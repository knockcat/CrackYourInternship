// https://leetcode.com/problems/container-with-most-water/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right)
        {
            int width = right - left;
            int h = min(height[left], height[right]);

            max_area = max(max_area, width * h);

            if (height[left] < height[right])
                ++left;
            else if (height[left] > height[right])
                --right;
            else
            {
                ++left, --right;
            }
        }

        return max_area;
    }
};