/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,count=0,pro=1;
        for(int i=0;i<nums.size();i++){
            pro *= nums[i];
            while(l <= i && pro >= k){
                pro/=nums[l];
                l++;
            }
            count+= (i - l + 1);
        }
        return count;
    }
};

