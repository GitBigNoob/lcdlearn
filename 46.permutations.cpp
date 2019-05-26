/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */
class Solution {
public:
    vector<vector<int>> res;
    void dfs(int n,vector<bool>& v,vector<int>& nums,vector<int>&tmp){
        if(n == nums.size()){
            res.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!v[i]){
                v[i]=true;
                tmp.push_back(nums[i]);
                dfs(n+1,v,nums,tmp);
                tmp.pop_back();
                v[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> v(nums.size(),0);
        vector<int> tmp;
        dfs(0,v,nums,tmp);
        return res;
    }
};

