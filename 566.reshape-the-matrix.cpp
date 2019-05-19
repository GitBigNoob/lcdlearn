/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size() * nums[0].size() != r * c) return nums;
        vector<vector<int>> res(r,vector<int>(c,0));
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                res[count/c][count%c] = nums[i][j];
                count++;
            }
        }
        return res;
    }
};

