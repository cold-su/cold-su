class Solution {
public:
	ListNode* swapPairs(ListNode* h) {
		if (!h) {
			return nullptr;
		}
		auto a = h;
		if (!a->next) {
			return a;
		}
		auto b = a->next;
		auto nxt = b->next;
		b->next = a;
		a->next = swapPairs(nxt);
		return b;
	}
};