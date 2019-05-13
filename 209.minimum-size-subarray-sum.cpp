/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int ans = INT_MAX;
        for(int i = 0;i < nums.size(); i++){
            sum+=nums[i];
            while(sum >=s){
                ans = min(ans,i + 1 - left);
                sum -= nums[left++];
            }
        }
        return (ans != INT_MAX) ? ans : 0;
    }
};

