/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */
class Solution {
public:
    vector<vector<string>> res;
    bool check(int x,int y,int n,vector<string>& tmp){
        for(int i=1;i<=x;i++){
            if(y-i >=0 && tmp[x-i][y-i] == 'Q'){
                return false;
            }
            if(y+i < n && tmp[x-i][y+i]=='Q'){
                return false;
            }
        }
        return true;
    }
    void dfs(int num,int n,vector<string>& tmp,vector<bool>& v){
        if(num == n){
            res.push_back(tmp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!v[i] && check(num,i,n,tmp)){
                tmp[num][i]='Q';
                v[i]=true;
                dfs(num+1,n,tmp,v);
                tmp[num][i]='.';
                v[i]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s;
        for(int i=0;i<n;i++){
            s+='.';
        }
        vector<bool> v(n,0);
        vector<string> tmp(n,s);
        dfs(0,n,tmp,v);
        return res;
    }
};

