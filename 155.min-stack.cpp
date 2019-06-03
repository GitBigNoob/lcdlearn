/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */
class MinStack {
public:
    vector<int> s;
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s.push_back(x);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        int minnum=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(s[i]<minnum){
                minnum=s[i];
            }
        }
        return minnum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

