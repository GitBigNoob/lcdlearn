/*
 * @lc app=leetcode id=316 lang=cpp
 *
 * [316] Remove Duplicate Letters
 */
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> v(26,0);
        vector<int> num(26,0);
        stack<char> st;
        for(int i=0;i<s.size();i++){
            num[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            num[s[i]-'a']--;
            if(v[s[i]-'a'])continue;
            if(!st.empty() && st.top() > s[i]){
                while(!st.empty() && num[st.top()-'a']>0 && ch < st.top()){
                    char tmp=st.top();
                    st.pop();
                    v[tmp-'a']=false;
                }
            }
            v[ch-'a']=true;
            st.push(ch);
        }
        string res;
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};

