/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */
/*int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i && nums[i] == nums[i - 1]) {
                continue;
            }
            for(int j = i + 1; j < nums.size(); j++) {
                if(j != i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int diff = nums[j] - nums[i];
                if(diff == k) {
                    count++;
                }
                else if(diff > k) {
                    break;
                }
            }
        }
        return count;
    }
    */

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) {
            return 0;
        }
        int count = 0;
        unordered_map<int, int> values;
        for(int n : nums) {
            values[n]++;
        }
        if(k) {
            for(auto val: values) {
                if(values.count(val.first + k) > 0) {
                    count++;
                }
            }
        }
        else {
            for(auto val: values) {
                if(val.second > 1) {
                    count++;
                }
            }
        }
        return count;
    }
};

