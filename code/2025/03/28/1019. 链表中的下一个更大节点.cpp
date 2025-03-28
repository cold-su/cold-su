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
	vector<int> nextLargerNodes(ListNode* head) {
		std::vector<int> p;
		while (head) {
			p.push_back(head->val);
			head = head->next;
		}
		std::vector<int> s;
		int n = p.size();
		std::vector<int> ans(n);
		for (int i = n; --i;) {
			while (not s.empty() and s.back() <= p[i]) {
				s.pop_back();
			}
			ans[i] = not s.empty() ? s.back() : 0;
			s.push_back(p[i]);
		}
		return ans;
	}
};