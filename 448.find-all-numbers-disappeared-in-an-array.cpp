/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            while(nums[i] != i + 1){
                int tmp=nums[i];
                if(nums[i] == 0)
                    break;
                if(tmp == nums[tmp - 1]){
                    nums[tmp-1]=0;
                }
                nums[i]=nums[tmp - 1];
                nums[tmp-1]=tmp;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(!nums[i]){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};

