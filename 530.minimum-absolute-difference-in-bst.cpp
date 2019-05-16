/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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
/*中序遍历该BST，然后使用中序遍历的数组求有序数组中的相邻两个元素的差值的最小值*/
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> res;
        dfs(root,res);
        int min=INT_MAX;
        for(int i=1;i<res.size();i++){
            if(res[i]-res[i-1] < min)
                min = res[i]-res[i-1];
        }
        return min;
    }
    void dfs(TreeNode* root,vector<int>& res){
        if(root==NULL)return;
        dfs(root->left,res);
        res.push_back(root->val);
        dfs(root->right, res);
        return;
    }
};

