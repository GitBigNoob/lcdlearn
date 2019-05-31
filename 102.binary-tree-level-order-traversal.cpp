/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode*> s1;
        queue<TreeNode*> s2;
        vector<int> tmp;
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
                TreeNode* p = s1.front();
                s1.pop();
                tmp.push_back(p->val);
                if(p->left)s2.push(p->left);
                if(p->right)s2.push(p->right);
            }
            if(!tmp.empty())res.push_back(tmp);
            tmp.clear();
            while(!s2.empty()){
                TreeNode* p = s2.front();
                s2.pop();
                tmp.push_back(p->val);
                if(p->left)s1.push(p->left);
                if(p->right)s1.push(p->right);
            }
            if(!tmp.empty())res.push_back(tmp);
            tmp.clear();
        }
        return res;
    }
};

