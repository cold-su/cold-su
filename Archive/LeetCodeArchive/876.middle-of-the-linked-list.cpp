/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
   public:
    ListNode* middleNode(ListNode* head) {
        int sz = getLenth(head) / 2;
        for (int i = 1; i <= sz; i++) {
            head = head->next;
        }
        return head;
    }
    int getLenth(ListNode* node) {
        int counter = 1;
        while (node->next != nullptr) {
            ++counter;
            node = node->next;
        }
        return counter;
    }
};
// @lc code=end