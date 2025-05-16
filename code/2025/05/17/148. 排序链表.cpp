class Solution
{
public:
	ListNode*
	sortList(ListNode* h)
	{
		std::vector<int> a;
		auto copy = h;
		while (h) {
			a.emplace_back(h->val);
			h = h->next;
		}
		std::ranges::sort(a);
		auto ans = copy;
		int i = 0;
		while (copy) {
			copy->val = a[i++];
			copy = copy->next; 
		}
		return ans;
	}
};