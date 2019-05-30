/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        int target = l1->val + l2->val;
        ListNode* res = new ListNode(target % 10);
        res->next = addTwoNumbers(l1->next, l2->next);
        if (target >= 10)
            res->next = addTwoNumbers(res->next, new ListNode(1));
        delete l1, l2;
        return res;
    }
};

