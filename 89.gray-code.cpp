/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */
class Solution {
public:
    vector<int> grayCode(int n) {
        int cur = 0;
        vector<int> ans;
        ans.push_back(cur);
        for(int i = 0; i<n; i++){
            cur = 1<<i;
            int cur_size = ans.size();
            for(int j = cur_size-1; j>=0; j--){
                ans.push_back(ans[j]+cur);
            }
        }
        return ans;
    }
};

