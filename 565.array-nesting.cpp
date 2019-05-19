/*
 * @lc app=leetcode id=565 lang=cpp
 *
 * [565] Array Nesting
 */
/*
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size(), res = 0;
        for (int i = 0; i < n; ++i) {
            int cnt = 1;
            while (nums[i] != i && nums[i] != nums[nums[i]]) {
                swap(nums[i], nums[nums[i]]);
                ++cnt;
            }
            res = max(res, cnt);
        }
        return res;
    }
};
*/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res = -1;
        vector<bool> v(nums.size(),false);
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]])continue;
            int count=1,j=nums[i];
            v[nums[i]]=true;
            while(j != i){
                v[j] = true;
                j = nums[j];
                count++;
            }
            res = max(res,count);
        }
        return res;
    }
};

