/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */
class Solution {
public:
    vector<vector<int>> res;
    void dfs(int num,int count,int n,int k,vector<int>& tmp){
        if(count==k){
            res.push_back(tmp);
            return;
        }
        for(int i=num;i<=n;i++){
            tmp.push_back(i);
            dfs(i+1,count+1,n,k,tmp);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> tmp;
        dfs(1,0,n,k,tmp);
        return res;
    }
};

