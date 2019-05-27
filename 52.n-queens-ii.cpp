/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */
class Solution {
public:
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
    void dfs(int num,int n,vector<string>& tmp,vector<bool>& v,int& count){
        if(num == n){
            count++;
            return;
        }
        for(int i=0;i<n;i++){
            if(!v[i] && check(num,i,n,tmp)){
                tmp[num][i]='Q';
                v[i]=true;
                dfs(num+1,n,tmp,v,count);
                tmp[num][i]='.';
                v[i]=false;
            }
        }
    }
    int totalNQueens(int n) {
        string s;
        for(int i=0;i<n;i++){
            s+='.';
        }
        int count=0;
        vector<bool> v(n,0);
        vector<string> tmp(n,s);
        dfs(0,n,tmp,v,count);
        return count;
    }
};

