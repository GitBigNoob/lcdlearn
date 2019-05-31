/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* p=root;
        TreeNode* lp=nullptr;
        while(p){
            s.push(p);
            p=p->left;
        }
        while(s.size()){
            p=s.top();
            s.pop();
            if(p->right==NULL || p->right==lp){
                res.push_back(p->val);
                lp=p;
            }else{
                s.push(p);
                p=p->right;
                while(p){
                    s.push(p);
                    p=p->left;
                }
            }
        }
        return res;
    }
};

