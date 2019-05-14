/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */
/*通过异或运算查找缺失的数字*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0 , i = 0;
        for(auto x : nums){
            res ^= x;
            res ^= ++i;
        }
        return res;
    }
};

