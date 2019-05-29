/*
 * @lc app=leetcode id=357 lang=cpp
 *
 * [357] Count Numbers with Unique Digits
 */
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> a{
            0,
            9,
            9*9,
            9*9*8,
            9*9*8*7,
            9*9*8*7*6,
            9*9*8*7*6*5,
            9*9*8*7*6*5*4,
            9*9*8*7*6*5*4*3,
            9*9*8*7*6*5*4*3*2,
            9*9*8*7*6*5*4*3*2*1
        };
        if(n > 10)
            return 0;
        int res=1;
        for(int i=1;i<=n;i++){
            res+=a[i];
        }
        return res;
    }
};

