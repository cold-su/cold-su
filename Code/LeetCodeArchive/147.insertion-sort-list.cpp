/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    int sz(ListNode* node) {
        int counter = 0;
        while (node != nullptr) {
            node = node->next;
            counter++;
        }
        return counter;
    }
    vector<int> switchFrom(ListNode* node) {
        vector<int> ret;
        while (node != nullptr) {
            ret.push_back(node->val);
            node = node->next;
        }
        return ret;
    }
    void insertRet(vector<int> k, ListNode* node, int len) {
        // std::cout << sz(node) << " ";
        for (int i = 0; i < len; i++) {
            node->val = k[i];
            // std::cout << node->val << " ";
            node = node->next;
        }
    }
    ListNode* insertionSortList(ListNode* head) {
        vector<int> key = switchFrom(head);
        int length = sz(head);
        for (int i = 1; i < length; i++) {
            int index = i;
            while (index > 0 && key[index - 1] > key[index]) {
                std::swap(key[index - 1], key[index]);
                index--;
            }
        }
        // for (auto prev : key) {
        //     std::cout << prev << " ";
        // }
        insertRet(key, head, length);
        // for (int j = 0; j < length; j++) {
        //     head->val = key[j];
        //     // std::cout << head->val << " ";
        //     head = head->next;
        // }
        return head;
    }
};
// @lc code=end
