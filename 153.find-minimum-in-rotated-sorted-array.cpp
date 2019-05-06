/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int mid = (r + l) / 2;
            if(nums[mid] > nums[r])
                l = mid + 1;
            else
                r = mid;
        }
        return nums[r];
    }
};

