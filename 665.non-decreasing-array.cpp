/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() < 2) return true;
        int f = 0;
        for(int i=1;i<nums.size() && f < 2;i++){
            if(nums[i] < nums[i-1]){
                f++;
                if(i-2<0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];                    //modify nums[i-1] of a priority
                else nums[i] = nums[i-1];
            }
        }
        return f < 2;
    }
};

