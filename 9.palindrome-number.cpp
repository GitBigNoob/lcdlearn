/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
class Solution {
public:
    bool isPalindrome(int x) {
        string s{""};
        if(x < 0){
            return false;
        }
        while(x){
            char tmp = x %10 + '0';
            x/=10;
            s = tmp + s;
        }
        int n = s.size() - 1;
        for(int i=0;i<=n/2;i++){
            if(s[i] != s[n-i]){
                return false;
            }
        }
        return true;
    }
};

