/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s1;
        string temp = "";
        path +="/";
        for(int i = 0;i!=path.size();++i){
            if(path[i] == '/'){
                if(temp == ".."){
                    if(!s1.empty()){
                        s1.pop();
                    }
                }
                else if(temp == "." || temp == ""){
                    ;                    
                }
                else{
                    s1.push(temp);
                }
                temp = "";
            }
            else{
                temp += path[i];
            }
        }
        if(s1.empty())return "/";
        temp="";
        while(s1.size()){
            temp="/"+s1.top()+temp;
            s1.pop();
        }
        return temp;
    }
};

