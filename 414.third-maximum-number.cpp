/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int maxi = LONG_MIN, smax = LONG_MIN, tmax = LONG_MIN;
        for(int j=0;j<3;j++){
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi)maxi = nums[i];
            else if(nums[i]>smax && nums[i]<maxi)smax = nums[i];
            else if(nums[i]>tmax && nums[i]<smax)tmax = nums[i];
        }}
        cout<<maxi<<" "<<smax<<" "<<tmax<<endl;
        if(smax == LONG_MIN || tmax == LONG_MIN)return maxi;
        return tmax;
    }
};

