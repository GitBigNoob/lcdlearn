/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* n = root;
        while(n!=NULL || !s.empty()){
            while(n!=NULL){
                s.push(n);
                n=n->left;
            }
            if(!s.empty()){
                n=s.top();
                res.push_back(n->val);
                s.pop();
                n=n->right;
            }
        }
        return res;
        
    }
};

