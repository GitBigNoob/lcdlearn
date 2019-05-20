/*
 * @lc app=leetcode id=611 lang=cpp
 *
 * [611] Valid Triangle Number
 */
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() < 3)
            return 0;
        int j,k;
        int count=0;
        for(int i=0;i<nums.size() - 2;i++){
            j=i+1;
            while(j < nums.size() -1){
                k=j+1;
                while(k < nums.size() && nums[k] < nums[i] + nums[j]){
                    k++;
                    count++;
                }
                j++;
            }
        }
        return count;
    }
};

