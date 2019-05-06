/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */
/*可以通过三次反转得到结果*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() > 1) {
        if(k > nums.size())
            k -= nums.size();
        int n = nums.size()-k;
        std::rotate(nums.begin(),nums.begin()+n,nums.end());
                
     }
    }
};

