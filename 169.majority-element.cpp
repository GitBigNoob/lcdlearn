/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int now = 0;
        int count = 0;
        for(auto x : nums){
            if(count == 0){
                now = x;
            }
            if(x == now){
                count++;
            }
            else{
                count--;
            }
        }
        return now;
    }
};

