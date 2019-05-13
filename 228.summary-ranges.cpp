/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string tmp;
        int now;
        for(int i = 0;i < nums.size();i++){
            if(tmp.empty()){
                tmp+= to_string(nums[i]);
                now = nums[i];
            }
            else{
                if(nums[i]!=nums[i - 1] + 1){
                    if(nums[i - 1] == now){
                        ans.push_back(tmp);
                        tmp="";
                    }else{
                        tmp+="->";
                        tmp+=to_string(nums[i-1]);
                        ans.push_back(tmp);
                        tmp="";
                    }
                    i--;
                }
            }
        }
        if(nums.size() > 1 && nums[nums.size() - 1] == nums[nums.size() - 2] + 1){
            tmp+="->";
            tmp+=to_string(nums[nums.size()-1]);
        }
        if(!tmp.empty())
            ans.push_back(tmp);
        return ans;
    }
};

