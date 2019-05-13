/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> s;
        int i;
        for(i=0;i<k && i < nums.size();++i){
            s.insert(nums[i]);
        }
        if(i != s.size())return true;
        int a = nums[0];
        for(;i<nums.size();i++){
            int l = s.size();
            s.insert(nums[i]);
            if(l != s.size())return true;
            s.rease(a);
            a = nums[i-k];
        }
    }
};

