/*
 * @lc app=leetcode id=93 lang=cpp
 *
 * [93] Restore IP Addresses
 */
class Solution {
public:
    vector<string> ans;
    void DFS(string s, string str, int k)
    {
        if(s.size()==0 && k==4) return ans.push_back(str.substr(0, str.size()-1));
        if(s.size()==0 || k== 4) return;
        for(int i = 1; i <= min(3, (int)s.size()); i++)
        {
            int val = stoi(s.substr(0,i));
            if(val >=0 && val <= 255)
                DFS(s.substr(i), str+s.substr(0,i)+".", k+1);
            if(s[0] == '0') break;
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size()==0) return {};
        DFS(s, "", 0);
        return ans;
    }
};

