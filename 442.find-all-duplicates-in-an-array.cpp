/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */
/*将每个数字，交换到其秩减一的位置重复即找到*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            while(nums[i] != i + 1){
                int tmp=nums[i];
                if(nums[i] == 0)
                    break;
                if(tmp == nums[tmp - 1]){
                    ans.push_back(tmp);
                    nums[tmp-1]=0;
                }
                nums[i]=nums[tmp - 1];
                nums[tmp-1]=tmp;
            }
        }
        return ans;
    }
};

