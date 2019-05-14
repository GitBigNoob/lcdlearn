/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */
/*快慢指针慢指针前全是数，快慢指针之间都是零*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0,r = 0;
        for(;r < nums.size();r++){
            if(nums[r] != 0){
                swap(nums[l++],nums[r]);
            }
        }
    }
};

