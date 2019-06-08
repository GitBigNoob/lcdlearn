/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.empty()){
            if(nums2.empty()){
                return {};
            }
            return vector<int>(nums1.size(),-1);
        }
        unordered_map<int,int> m;
        vector<int> dp(nums2.size());
        for(int i = 0;i<nums2.size();i+、+){
            m[nums2[i]] = i;
        }
        dp[dp.size()-1] = -1;
        for(int i = dp.size()-2;i>=0;i--){
            if(nums2[i+1]>nums2[i]){
                dp[i] = nums2[i+1];
            } else {
                int j = i+1;
                while(dp[j]!=-1&&dp[j]<nums2[i]){
                    j = m[dp[j]];
                }
                dp[i] = dp[j];
            }
        }
        vector<int> ret;
        for(auto x: nums1){
            int i = m[x];
            ret.push_back(dp[i]);
        }
        return ret;
    }
};

