/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */
class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())return 0;
        int res=0;
        bool flag=false,f=false;
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                if(res==0 && f==false)
                    continue;
                else
                    break;
            }
            else if(str[i]=='-'){
                if(!f){
                    flag=true;
                    f=true;
                }else{
                    break;
                }
            }else if(str[i]=='+'){
                if(!f){
                    f=true;
                }else{
                    break;
                }
            }
            else if(str[i] >='0' && str[i] <= '9'){
                if(res > INT_MAX / 10){
                    return flag ? INT_MIN : INT_MAX;
                }
                res*=10;
                if(res > INT_MAX - str[i]+'0'){
                    return flag ? INT_MIN : INT_MAX;
                }
                res+=str[i]-'0';
                f=true;
            }else{
                break;
            }
        }
        if(flag){
            return -res;
        }
        return res;
    }
};

