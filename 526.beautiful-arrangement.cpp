/*
 * @lc app=leetcode id=526 lang=cpp
 *
 * [526] Beautiful Arrangement
 */
//为什么p不能从0开始？
class Solution {
public:
    void check(int& count,int n,int p,vector<bool>& v){
        if(n<p){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!v[i]&& (p%i==0 || i%p==0)){
                v[i]=true;
                check(count,n,p+1,v);
                v[i]=false;
            }
        }
    }
    int countArrangement(int N) {
        int count=0;
        vector<bool> v(N+1,0);
        check(count,N,1,v);
        return count;
    }
};

