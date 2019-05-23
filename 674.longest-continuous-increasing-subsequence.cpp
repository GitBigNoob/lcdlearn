/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max_l=1,tmp=1;
        const int n=nums.size();if(n==0)return 0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i])
                max_l=max(++tmp,max_l);
            else
                tmp=1;
        }
        return max_l;
    }
};

