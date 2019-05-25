/*
 * @lc app=leetcode id=714 lang=cpp
 *
 * [714] Best Time to Buy and Sell Stock with Transaction Fee
 */
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int A = 0 - prices[0];
        int B = 0;
        int B_temp;
        int A_temp;
        for (int i = 1; i < prices.size(); ++i) {
            A_temp = A;
            B_temp = B;

            A = max(A_temp, B_temp - prices[i]);

            B = max(B_temp, A_temp + prices[i] - fee);
        }
        return B;
    }
};

