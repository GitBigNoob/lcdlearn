/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */
class Solution {
public:
    vector<string> res;
    void dfs(int left,int right,int num,int n,string& tmp){
        if(num == 2*n){
            if(left ==n && right == n){
                res.push_back(tmp);
            }
            return;
        }
        if(right > left)
            return;
        tmp+="(";
        dfs(left+1,right,num+1,n,tmp);
        tmp.pop_back();
        tmp+=")";
        dfs(left,right+1,num+1,n,tmp);
        tmp.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        if(n == 0) return {};
        string s;
        dfs(0,0,0,n,s);
        return res;
    }
};

