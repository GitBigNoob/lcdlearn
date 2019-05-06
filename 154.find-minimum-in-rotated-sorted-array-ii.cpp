/*
 * @lc app=leetcode id=154 lang=cpp
 *
 * [154] Find Minimum in Rotated Sorted Array II
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int m = (r + l) / 2;
            if(nums[m] > nums[r]){
                l = m + 1;
            }else if(nums[m] < nums[r]) {
                r = m;
            }
            else{
                r--;
            }
        }
        return nums[r];
    }
};

