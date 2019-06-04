/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.empty()) return "0";
        if(!k) return num;
        
        stack<int> st;
        int i = 0;
        while(i < num.size()){
            while(st.size() && st.top() > num[i]-'0' && k){
                st.pop(); k--;
            }
            if(st.size() || num[i]-'0')
                st.push(num[i]-'0');
            i++;
        }
        
        while(st.size() && k--)
            st.pop();
        // Stack to String
        string res = "";
        while(!st.empty()){
            res += st.top()+'0';
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res.size() ? res : "0";
    }
};

