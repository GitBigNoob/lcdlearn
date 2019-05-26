/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */
class Solution {
public:
    vector<string> h{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res;
    void dfs(int n,string& tmp,string& d){
        if(n == d.size()){
            res.push_back(tmp);
            return;
        }
        int num = d[n]-'0';
        for(int i = 0;i < h[num].size();i++){
            tmp+=h[num][i];
            dfs(n+1,tmp,d);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string d) {
        int n = d.size();
        if(d.empty())  return {};
        string s;
        dfs(0,s,d);
        return res;

    }
};

