/*
 * @lc app=leetcode id=661 lang=cpp
 *
 * [661] Image Smoother
 */
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        if(M.empty())return {};
        vector<vector<int> > res(M.size(),vector<int>(M[0].size(),0));
        vector<int> a{1,0,-1};
        for(int i=0;i<M.size();i++){
            for(int j=0;j<M[0].size();j++){
                int count=0;
                int c=9;
                for(auto n : a){
                    for(auto m : a){
                        if(i+n >= 0 && i+n < M.size() && j+m >= 0 && j+m < M[0].size())
                            count+=M[i+n][j+m];
                        else
                            c--;
                    }
                }
                res[i][j]=count/c;
            }
        }
        return res;
    }
};

