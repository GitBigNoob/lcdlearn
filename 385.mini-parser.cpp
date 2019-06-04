/*
 * @lc app=leetcode id=385 lang=cpp
 *
 * [385] Mini Parser
 */
/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 *   对于NestedInteger()，构造函数初始化一个空的嵌套列表。
    对于NestedInteger(int value)，构造函数初始化一个整数。
    对于bool isInteger() const，如果此NestedInteger包含单个整数而不是嵌套列表，则返回true。
    对于int getInteger() const，返回此NestedInteger保存的单个整数（如果它包含单个整数），如果此NestedInteger包含嵌套列表，则结果未定义。
    对于void setInteger(int value)，设置此NestedInteger以保存单个整数。
    对于void add(const NestedInteger &ni)，设置此NestedInteger以保存嵌套列表并向其添加嵌套整数。
    对于const vector< NestedInteger> &getList() const，如果它拥有嵌套列表，则返回此NestedInteger包含的嵌套列表，如果此NestedInteger包含单个整数，则结果未定义。
 * 
 * 
 * 
 * };
 */
class Solution {
public:
    NestedInteger deserialize(string s) {
        if(s.empty()) return NestedInteger();
        if(s[0]!='[') return NestedInteger(stoi(s));
        if(s.size() <= 2) return NestedInteger();
        NestedInteger res;
        int start=1,count=0;
        for(int i=1;i<s.size();i++){
            if(count==0 && s[i]==',' || i==s.size()-1){
                res.add(deserialize(s.substr(start,i-start)));
                start=i+1;
            }
            else if(s[i]=='[') count++;
            else if(s[i]==']')count--;
        }
        return res;
    }
};

