class Solution
{
public:
	TreeNode*
	sortedListToBST(ListNode* l)
	{
		std::vector<int> a;
		while (l) {
			a.emplace_back(l->val);
			l = l->next;
		}
		auto make = [&](auto& self, int l, int r) -> TreeNode* {
			if (l >= r) {
				return nullptr;
			}
			int m = (l + r) / 2;
			return new TreeNode(a[m], self(self, l, m), self(self, m + 1, r));
		};
		return make(make, 0, a.size());
	}
};