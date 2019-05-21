/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double count=0;
        double res=0;
        for(int i=0;i<nums.size();i++){
            if(i < k){
                count+=nums[i];
                res=count;
                continue;
            }
            count+=nums[i];
            count-=nums[i-k];
            res=max(count,res);
        }
        return res/k;
    }
};

