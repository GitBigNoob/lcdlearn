/*
 * @lc app=leetcode id=331 lang=cpp
 *
 * [331] Verify Preorder Serialization of a Binary Tree
 */
class Solution {
public:
    bool isValidSerialization(string preorder) {
        int n = preorder.size();        
        if(n == 0) return true;        
        vector<string> v;        
        int pos = -1;        
        for(int i = 0; i < n; i++){            
            if(preorder[i] == ','){                
                v.push_back(preorder.substr(pos+1, i-pos-1));                
                pos = i;            
            }        
        }        
        if(preorder[n-1] != '#') return false;        
        v.push_back("#");        int cnt = 1;        
        for(int i = 0; i < v.size(); i++){            
            if(cnt <= 0) return false;            
            if(v[i] == "#") cnt -= 1;            
            else cnt += 1;        
        }                
        return cnt == 0;
    }
};

