/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        int m1 = INT_MAX,m2=INT_MAX,m3=INT_MAX;
        for(auto x : nums){
            if(x > a){
                c=b;
                b=a;
                a=x;
            }else if(x > b){
                c=b;
                b=x;
            }else if(x > c){
                c=x;
            }
            if(x < m1){
                m3=m2;
                m2=m1;
                m1=x;
            }else if(x < m2){
                m3=m2;
                m2=x;
            }else if(x < m3){
                m3=x;
            }
        }
        return max(a*b*c,a*m1*m2);
    }
};

