/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
class Solution {
public:
    public:
    int romanToInt(string s) {
        if (s.empty()) return 0;
        char prev = s[0];
        char curr;
        int sum = valueOf(prev);
        for (int i=1;i<s.length();i++){
            
            curr = s[i];
            if (valueOf(prev) < valueOf(curr)) { 
                sum = sum + valueOf(curr) - 2 * valueOf(prev);
                
            }
            else{
                sum = sum + valueOf(curr);
            }
             prev = curr;
            
        }
        return sum;
        
    }
    int valueOf(char a){
        int output;
        if (a=='I') output = 1;
        if (a=='V') output = 5;
        if (a=='X') output = 10;
        if (a=='L') output =  50;
        if (a=='C') output = 100;
        if (a=='D') output = 500;
        if (a=='M') output = 1000;
        return output;
    }
    
};

