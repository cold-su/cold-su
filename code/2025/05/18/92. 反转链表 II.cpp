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
	ListNode* reverseBetween(ListNode* head, int left, int right) {
		std::vector<int> a;
		while (head) {
			a.emplace_back(head->val);
			head = head->next;
		}
		std::reverse(a.begin() + left - 1, a.begin() + right);
		auto make = [&](this auto& self, int i = 0) -> ListNode* {
			if (i >= a.size()) {
				return nullptr;
			}
			return new ListNode(a[i], self(i + 1));
		};
		return make();
	}
};