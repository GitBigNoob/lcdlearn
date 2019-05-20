/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        int m = nums[0], n = nums.size(), left = n, right = -1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < m)
                right = i;
            m = max(m, nums[i]);
        }
        m = nums[n - 1];
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] > m)
                left = i;
            m = min(m, nums[i]);
        }
        return max(0, right - left + 1);
    }
};

