/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */
class Solution {
public:
    set<vector<int>> res;
    void dfs(int n,vector<bool>& v,vector<int>& nums,vector<int>&tmp){
        if(n == nums.size()){
            res.insert(tmp);
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> v(nums.size(),0);
        vector<int> tmp;
        dfs(0,v,nums,tmp);
        return vector<vector<int>> (res.begin(), res.end());
    }
};

