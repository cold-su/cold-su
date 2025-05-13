class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* h, int n) {
		return make(h, n).first;
	}
private:
	std::pair<ListNode*, int> make(ListNode* h, int n) {
		if (!h)
			return { nullptr, 0 };
		auto [next, d] = make(h->next, n);
		d++;
		if (n == d)
			return { next, d };
		return { new ListNode(h->val, next), d };
	}
};