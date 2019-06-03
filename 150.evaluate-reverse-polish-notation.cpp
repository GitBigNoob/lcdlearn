/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for(string token : tokens){
            if(token == "+"){
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                nums.push(a+b);
            }else if(token == "-"){
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                nums.push(b-a);
            }else if(token == "*"){
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                nums.push(b*a);
            }else if(token == "/"){
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                nums.push(b/a);
            }else{
                nums.push(atoi(token.c_str()));
            }
        }
        return nums.top();
    }
};

