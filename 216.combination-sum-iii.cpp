/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<vector<int>> combinationSum3(int k, int n) {
        a(k,n,0,0,0);
        return ans;
    }
    void a(int k,int n,int now,int sum,int t){
        if(t == k){
            if(sum == n){
                ans.push_back(tmp);
            }
            return;
        }
        for(int i = now + 1;i < 10;i++){
            tmp.push_back(i);
            a(k,n,i,sum+i,t+1);
            tmp.pop_back();
        }
    }
};

