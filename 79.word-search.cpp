/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */
class Solution {
public:
    bool check(int n,int i,int j,string& word,vector<vector<char>> b){
        if(n==word.size())
            return true;
        if(i < 0 || j < 0 || j >= b[0].size() || i >= b.size())
            return false;
        if(b[i][j]!=word[n])
            return false;
        char tmp = b[i][j];
        b[i][j]='*';

        bool flag = check(n+1,i-1,j,word,b)
        || check(n+1,i+1,j,word,b)
        || check(n+1,i,j+1,word,b)
        || check(n+1,i,j-1,word,b);
        b[i][j]=tmp;
        return flag;
        
    }
    bool exist(vector<vector<char>>& board, string word) {

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j])
                    if(check(0,i,j,word,board)){
                        return true;
                    }
            }
        }
        return false;
    }
};

