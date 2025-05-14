class Solution
{

public:

	ListNode*
	deleteDuplicates(ListNode* h)
	{
		return work(h).first;
	}
	
private:

	std::pair<ListNode*, int>
	work(ListNode* h)
	{
		if (!h) {
			return {nullptr, INT_MIN};
		}
		auto [N, p] = work(h->next);
		h = new ListNode(h->val, N);
		if (del(h, p)) {
			return {h, p};
		}
		return {h, h->val};
	}

	bool
	del(ListNode*& h, int x)
	{
		bool res = false;
		while (h and h->val == x) {
			res = true;
			h = h->next;
		}
		return res;
	}
};