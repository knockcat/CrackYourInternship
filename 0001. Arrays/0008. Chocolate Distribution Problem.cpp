// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code

        sort(a.begin(), a.end());

        int i = 0, j = 0;
        long long mn = INT_MAX;

        while (j < n)
        {
            if (j - i + 1 < m)
                ++j;
            else if (j - i + 1 == m)
            {
                mn = min(a[j] - a[i], mn);
                ++i;
                ++j;
            }
        }

        return mn;
    }
};