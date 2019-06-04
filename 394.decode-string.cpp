/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */
class Solution {
public:
    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
    string decode(string s,int &i){
        int n=s.length();
        string res="";
        while(i<n&&s[i]!=']'){
            if(s[i]<'0'||s[i]>'9'){
                res+=s[i];
                i++;
            }else{
                int count=0;
                while(s[i]>='0'&&s[i]<='9'){
                    count=count*10+s[i]-'0';
                    i++;
                }
                i++;
                string t=decode(s,i);
                i++;
                while(count--){
                    res+=t;
                }
            }
        }
        return res;
    }
};

