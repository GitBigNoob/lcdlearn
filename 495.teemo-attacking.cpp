/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */
/*int findPoisonedDuration(vector<int>& nums, int d) {
        if(nums.empty())return 0;
        if(nums.size()==1)return d;
        int ans = d;
        int time = nums[0]+d;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1] >=d){
                ans+=d;
            }
            else{
                ans+=nums[i]-nums[i-1];
            }
        }
        return ans;
    }
    */
class Solution {
public:
    int findPoisonedDuration(vector<int>& nums, int d) {
        if(nums.empty())return 0;
        if(nums.size()==1)return d;
        int ans = d;
        int time = nums[0]+d;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<time){
                if(nums[i]+d>time){
                    ans+=nums[i]+d-time; 
                    time = nums[i]+d;
                }
            }
            else{
                time=nums[i]+d;
                ans+=d;
            }
        }
        return ans;
    }
};

